#include <iostream>
#include <cstdlib>

int guess(int user_number) {
	int random_number = (rand() % 6) + 1;
	std::cout << "The 'random' number is: " << random_number << std::endl;

	if (user_number == random_number) {
		std::cout << "Draw!" << std::endl;
		return 0;
	} else if (user_number > random_number) {
		std::cout << "You won!" << std::endl;
		return 1;
	} else {
		std::cout << "You lost!" << std::endl;
		return -1;
	}
}
