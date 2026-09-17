// Командный проект. Группа ПИ-54.
// Команда: Балицкий (в. 55, техлид), Лавриненко (в. 20).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "balitskiy.h"
// #include "lavrinenko.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

// ===== Главная функция: меню =====
int main() {
	int choice;
	int n;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Harmonic sum (1+1/2+...+1/n)\n";
		cout << "2. Sum of squares (1^2+2^2+...+n^2)\n";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
			// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:
			cout << "Enter n: ";
			cin >> n;
			cout << "Sum = " << harmonicSum(n) << "\n";
			break;
		case 2:
			cout << "Enter n: ";
			cin >> n;
			cout << "Sum = " << squaresSum(n) << "\n";
			break;
			// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
		case 0:
			cout << "Работа завершена.\n";
			break;
			
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}
