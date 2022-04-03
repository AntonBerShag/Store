#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	product apple = {"Apples", 46, 2};
	product tomato = { "Tomatoes", 67, 4 };
	product cucumber = { "Cucumbers", 20, 27 };

	//������ 1
	cout << "������ 1\n";
	printProd(apple);

	//������ 2
	cout << "������ 2\n";
	cout << "������ ��������� ���� ������� ���������: " << fullPrice(tomato) << "\n\n";

	//������ 3
	cout << "������ 3\n";
	cout << "�������� ������: " << sell(cucumber, 15) << "\n\n";

	return 0;
}