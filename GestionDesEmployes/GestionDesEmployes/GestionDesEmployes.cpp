#include <iostream>
#include "Employee.h"
int main() {
	const int maxEmployees = 2;
	Employee employees[maxEmployees];
	for (int i = 0; i < maxEmployees; ++i) {
		std::cout << "Les d�tails de l'employ� " << i + 1 << " :\n";
		std::cin >> employees[i];
	}
	for (int i = 0; i < maxEmployees; ++i) {
		std::cout << "\nD�tails de l'employ� " << i + 1 << ":\n" << employees[i]
			<< std::endl;
	}
	if (employees[0] == employees[1]) {
		std::cout << "\nLes deux employ�s ont le m�me salaire\n";
	}
	else {
		std::cout << "\nLes deux employ�s n'ont pas le m�me salaire\n";
	}
	return 0;
}