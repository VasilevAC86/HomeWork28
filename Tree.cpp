#include "Tree.hpp"

void print_Tree(const Tree& t) {
	std::cout << "\033[93mName of fruit: \033[0m" << t.fruit << "\n\033[93mNumber of fruits on one tree: \033[0m" << t.fruits_numbers << "\n\033[93mPrice for one fruit: \033[0m" << t.fruit_price << std::endl;
}

int full_price(const Tree& t) {
	return t.fruits_numbers*t.fruit_price;
}

int collect(const Tree& t, short number) {
	return number*t.fruit_price;
}

short fruits_exam(const Tree& t, short value) {
	while (value > t.fruits_numbers || value < 0) {
		if (value > 0)
			std::cout << "Input error! The number of fruits collected cannot be less than the number of fruits on the tree!\nEnter the quantity of fruits collected one more time -> ";
		else
			std::cout << "Input error! The number of fruits collected cannot be negative!\nEnter the quantity of fruits collected one more time -> ";
		std::cin >> value;
	}
	return value;
}
