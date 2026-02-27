#include <iostream>
#include <cstdlib>
#include <ctime>

int guess(int user_number);

int main() {
	srand(time(NULL));

	std::cout << "Welcome to the Dice Guessing Game!" << std::endl;
	std::cout << "Pick a number from 1 to 6 and see if it beats the computer's 'random' roll." << std::endl;
	std::cout << "Higher: you win, lower: you lose, equal: draw." << std::endl;
	std::cout << std::endl;

	std::string repeat = "yes";
	int wins = 0, losses = 0, draws = 0;

	while (repeat == "yes" || repeat == "y" || repeat == "Yes") {
		int user_number;

		std::cout << "Pick number from 1 to 6: " << std::endl;
		std::cin >> user_number;

		if (user_number < 1 || user_number > 6) {
			std::cout << "Invalid number. Try again." << std::endl;
			continue;
		}

		int outcome = guess(user_number);

		switch(outcome) {
			case 1:
				wins++;
				break;
			case -1:
				losses++;
				break;
			case 0:
				draws++;
				break;
			default:
				std::cout << "Unexpected outcome value: " << outcome << std::endl;
				break;
		}

		std::cout << "Do you want to play again? (yes/no): ";
		std::cin >> repeat;
		std::cout << std::endl;
	}

	std::cout << "Final score - Wins: " << wins
		  << ", Losses: " << losses
		  << ", Draws: " << draws << std::endl;

	std::cout << "Thanks for playing!" << std::endl;
	return 0;
}
