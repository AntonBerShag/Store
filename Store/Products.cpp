#include "Products.h"
#include <string>

//Задача 1
void printProd(product& prod) {
	std::cout << "Название продукта: " << prod.name << ", кол-во: " << prod.number << ", цена: " << prod.price << ".\n\n";
}

//Задача 2
int fullPrice(product& prod){
	return prod.number * prod.price;
}

//Задача 3
int sell(product& prod, int num){
	return prod.number - num;
}
