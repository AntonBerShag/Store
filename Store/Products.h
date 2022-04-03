#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};

//Задача 1
void printProd(product& prod);
//Задача 2
int fullPrice(product& prod);
//Задача 3
int sell(product& prod, int num);