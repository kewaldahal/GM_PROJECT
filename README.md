# Election/Voting System

This is a simple command-line Election/Voting system implemented in C. It allows voters to cast their votes for one of the predefined candidates or mark their vote as spoiled. The system keeps track of vote counts, prevents double voting, and displays voting statistics.

## Features

1. **Cast Your Vote**: Voters can cast their votes by entering their Voter ID and selecting a candidate from the list of candidates.

2. **Vote Validation**: The system checks if the entered Voter ID is valid before allowing the vote. Invalid IDs result in a failed vote.

3. **Spoiled Votes**: Voters can choose to mark their vote as spoiled if they don't want to vote for any candidate.

4. **Double Voting Prevention**: The system prevents voters from casting multiple votes by checking their Voter IDs.

5. **Voting Statistics**: The system keeps track of the number of votes each candidate receives, as well as spoiled votes. Users can view these statistics.

6. **Leading Candidate**: The system can display the leading candidate based on the vote counts.

## Files

- `main.c`: Contains the main C code for the election/voting system.
- `votingid.txt`: A text file containing valid voter IDs.
- `voted.txt`: A text file to record which voters have already cast their votes.
- `voting_details.txt`: A text file used to store voting statistics.



## Usage

1. **Compile the Code**: Compile the code using a C compiler (e.g., gcc): `gcc main.c -o voting_system`

2. **Run the Program**: Run the program: `./voting_system`

3. **Cast Your Vote**: Follow the on-screen prompts to cast your vote, view voting statistics, or find the leading candidate.

## Note


- This is a simple demonstration of an election/voting system and does not include advanced security features suitable for real-world elections.

- Modify the candidate names and parties in the code to match your specific election.

- Make sure to create the necessary text files (`votingid.txt`, `voted.txt`, `voting_details.txt`) and populate them with relevant data before running the program.

- To clear the console screen, the `clearScreen()` function uses system-dependent commands (`cls` for Windows and `clear` for Linux/macOS). Ensure these commands work on your system.

- The loading animation in the program is for visual appeal and can be customized or removed as needed.

## License

This code is provided as-is under the [MIT License](LICENSE). You are free to use, modify, and distribute it according to the terms of the license.

Feel free to reach out if you have any questions or need further assistance with the code.
# Election/Voting System

This is a simple command-line Election/Voting system implemented in C. It allows voters to cast their votes for one of the predefined candidates or mark their vote as spoiled. The system keeps track of vote counts, prevents double voting, and displays voting statistics.

## Features

1. **Cast Your Vote**: Voters can cast their votes by entering their Voter ID and selecting a candidate from the list of candidates.

2. **Vote Validation**: The system checks if the entered Voter ID is valid before allowing the vote. Invalid IDs result in a failed vote.

3. **Spoiled Votes**: Voters can choose to mark their vote as spoiled if they don't want to vote for any candidate.

4. **Double Voting Prevention**: The system prevents voters from casting multiple votes by checking their Voter IDs.

5. **Voting Statistics**: The system keeps track of the number of votes each candidate receives, as well as spoiled votes. Users can view these statistics.

6. **Leading Candidate**: The system can display the leading candidate based on the vote counts.

## Files

- `main.c`: Contains the main C code for the election/voting system.
- `votingid.txt`: A text file containing valid voter IDs.
- `voted.txt`: A text file to record which voters have already cast their votes.
- `voting_details.txt`: A text file used to store voting statistics.


## Usage

1. **Compile the Code**: Compile the code using a C compiler (e.g., gcc): `gcc main.c -o voting_system`

2. **Run the Program**: Run the program: `./voting_system`

3. **Cast Your Vote**: Follow the on-screen prompts to cast your vote, view voting statistics, or find the leading candidate.

## Note

- This is a simple demonstration of an election/voting system and does not include advanced security features suitable for real-world elections.

- Modify the candidate names and parties in the code to match your specific election.

- Make sure to create the necessary text files (`votingid.txt`, `voted.txt`, `voting_details.txt`) and populate them with relevant data before running the program.

- To clear the console screen, the `clearScreen()` function uses system-dependent commands (`cls` for Windows and `clear` for Linux/macOS). Ensure these commands work on your system.

- The loading animation in the program is for visual appeal and can be customized or removed as needed.

## License

This code is provided as-is under the [MIT License](LICENSE). You are free to use, modify, and distribute it according to the terms of the license.

Feel free to reach out if you have any questions or need further assistance with the code.
