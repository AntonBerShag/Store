#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	product apple = {"Apples", 46, 2};
	product tomato = { "Tomatoes", 67, 4 };
	product cucumber = { "Cucumbers", 20, 27 };

	//Задача 1
	cout << "Задача 1\n";
	printProd(apple);

	//Задача 2
	cout << "Задача 2\n";
	cout << "Полная стоимость всех товаров категории: " << fullPrice(tomato) << "\n\n";

	//Задача 3
	cout << "Задача 3\n";
	cout << "Осталось товара: " << sell(cucumber, 15) << "\n\n";

	return 0;
}