#include "Products.h"
#include <string>

//������ 1
void printProd(product& prod) {
	std::cout << "�������� ��������: " << prod.name << ", ���-��: " << prod.number << ", ����: " << prod.price << ".\n\n";
}

//������ 2
int fullPrice(product& prod){
	return prod.number * prod.price;
}

//������ 3
int sell(product& prod, int num){
	return prod.number - num;
}
