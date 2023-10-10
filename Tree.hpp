#pragma once

#include<iostream>

struct Tree {
	std::string fruit = "noname";
	int fruits_numbers = 85;
	int fruit_price = 55;
};

//Процедура вывода информации об объекте
void print_Tree(const Tree& t);
//Функция расчёта стоимости всех плодов на одном объекте
int full_price(const Tree& t);
//Функция расчёта стоимости оставшихся на объекте плодов
int collect(const Tree& t, short number);
//Функция проверки соответствия кол-ва сорванных плодов общему кол-ву плодов на дереве
short fruits_exam(const Tree& t, short value);

