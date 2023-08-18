#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANDIDATE_COUNT 4

// Define the candidates
#define CANDIDATE1 "Kewal Dahal"
#define CANDIDATE2 "Bipin Giri"
#define CANDIDATE3 "Prakhar Katwal"
#define CANDIDATE4 "Sandesh Bharti"

int votesCount[CANDIDATE_COUNT] = {0};
int spoiledVotes = 0;

int isValidVoter(const char *voterID) {
    FILE *file = fopen("voterid1.txt", "r");
    if (file == NULL) {
        printf("Error opening voter ID file.\n");
        return 0;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        if (strcmp(line, voterID) == 0) {
            fclose(file);
            return 1; // Voter ID is valid
        }
    }

    fclose(file);
    return 0; // Voter ID is invalid
}

void castVote() {
    char voterID[20];
    printf("\n\n ### Please enter your Voter ID to cast your vote: ");
    scanf("%s", voterID);

    if (!isValidVoter(voterID)) {
        printf("\n Invalid Voter ID! Vote casting failed.\n");
        return;
    }

    int choice;
    printf("\n\n ### Please choose your Candidate ####\n\n");
    printf(" 1. %s\n", CANDIDATE1);
    printf(" 2. %s\n", CANDIDATE2);
    printf(" 3. %s\n", CANDIDATE3);
    printf(" 4. %s\n", CANDIDATE4);
    printf(" 5. None of These\n");

    printf("\n Input your choice (1 - 5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= CANDIDATE_COUNT) {
        votesCount[choice - 1]++;
        printf("\n Thanks for voting!\n");
    } else if (choice == CANDIDATE_COUNT + 1) {
        spoiledVotes++;
        printf("\n Your vote has been marked as spoiled.\n");
    } else {
        printf("\n Error: Wrong Choice! Please retry.\n");
    }

    // Clear input buffer
    while (getchar() != '\n')
        ;
    printf("\n\n");
    system("clear");
}

// ... (rest of the functions remain unchanged)


void printVotesCount() {
    printf("\n\n ##### Voting Statistics ####\n");
    printf(" %s - %d\n", CANDIDATE1, votesCount[0]);
    printf(" %s - %d\n", CANDIDATE2, votesCount[1]);
    printf(" %s - %d\n", CANDIDATE3, votesCount[2]);
    printf(" %s - %d\n", CANDIDATE4, votesCount[3]);
    printf(" Spoiled Votes - %d\n", spoiledVotes);
}


void getLeadingCandidate() {
    printf("\n\n  #### Leading Candidate ####\n\n");
    int maxVotes = votesCount[0];
    int leadingCandidateIndex = 0;

    for (int i = 1; i < CANDIDATE_COUNT; i++) {
        if (votesCount[i] > maxVotes) {
            maxVotes = votesCount[i];
            leadingCandidateIndex = i;
        }
    }

    if (maxVotes > 0) {
        if (leadingCandidateIndex == 0) {
            printf("[%s]\n", CANDIDATE1);
        } else if (leadingCandidateIndex == 1) {
            printf("[%s]\n", CANDIDATE2);
        } else if (leadingCandidateIndex == 2) {
            printf("[%s]\n", CANDIDATE3);
        } else if (leadingCandidateIndex == 3) {
            printf("[%s]\n", CANDIDATE4);
        }
    } else {
        printf("----- Warning !!! No-win situation ----\n");
    }
}


void saveVotingDetails() {
    FILE *file = fopen("voting_details.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Voting Details:\n");
    fprintf(file, "----------------\n");
    for (int i = 0; i < CANDIDATE_COUNT; i++) {
        fprintf(file, "%s - %d\n", CANDIDATE1 + (i * 12), votesCount[i]);
    }
   
    fprintf(file, "Spoiled Votes - %d\n", spoiledVotes);

    fclose(file);
    printf("Voting details saved to 'voting_details.txt'.\n");
}

int main() {
    int choice;

    do {
        printf(" *************************************\n");
        printf("*                                     *\n");
        printf("*  Welcome to Election/Voting 2023    *\n");
        printf("*                                     *\n");
        printf(" *************************************\n");

        printf("\n\n 1. Cast your Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find Leading Candidate");
        printf("\n 4. Save Voting Details to File");
        printf("\n 0. Exit");

        printf("\n\n Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                castVote();
                break;
            case 2:
                printVotesCount();
                break;
            case 3:
                getLeadingCandidate();
                break;
            case 4:
                saveVotingDetails();
                break;
            case 0:
                printf("\n Exiting the program. Goodbye!\n");
                break;
            default:
                printf("\n Error: Invalid Choice\n");
        }
    }while (choice != 0);
    if(choice ==0){
    system ("clear");
  }
    return 0;
}