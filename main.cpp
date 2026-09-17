// Командный проект. Группа ПИ-54.
// Команда: Балицкий (в. 55, техлид), Лавриненко (в. 20).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "balitskiy.h"
#include "lavrinenko.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

// ===== Главная функция: меню =====
int main() {
	system("chcp 65001");
	
	int choice;
	int n;
	double a,h;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Harmonic sum (1+1/2+...+1/n)\n";
		cout << "2. Sum of squares (1^2+2^2+...+n^2)\n";
		cout << "3. Объём пирамиды с квадратным основанием\n";
        cout << "4. Высота боковой грани\n";
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
		case 3:
            do{
                cout<<"Введите a и h: ";
                cin>>a>>h;
            } while(a<=0||h<=0);
            cout<<"Объем = " << pyramidVolume(a,h)<<"\n";
            break;
        case 4:
            do{
                cout<<"Введите a и h в метрах: ";
                cin>>a>>h;
            } while(a<=0||h<=0);
        cout<<"Высота боковой грани = " << pyramidApothem(a,h)<<"\n";
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
