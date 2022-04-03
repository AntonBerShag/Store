#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};

//������ 1
void printProd(product& prod);
//������ 2
int fullPrice(product& prod);
//������ 3
int sell(product& prod, int num);