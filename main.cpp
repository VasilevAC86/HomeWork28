#include<iostream>
#include"Tree.hpp"

int main() {

	std::cout << "\033[91mHome work 28\033[0m\n\n";

	Tree t1{ "pear" };
	std::cout << "Object information: " << std::endl;
	print_Tree(t1);
	std::cout << "\n\033[92mThe cost of all the fruits on the tree is \033[0m" << full_price(t1) << std::endl;
	short number;//Кол-во собранных с объекта плодов
	std::cout << "\nEnter the quantity of fruits collected -> ";		 
	std::cin >> number;	
	number = fruits_exam(t1, number);
	std::cout << "\n\033[92mThe collected fruits can be sold for \033[0m" << collect(t1, number) << std::endl;
	std::cout << "\nUpdated information about the object: " << std::endl;	
	t1.fruits_numbers -= number;
	print_Tree(t1);	

	return 0;
}