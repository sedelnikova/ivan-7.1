// ivan 7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите 2 числа " << endl;
	cin >> A >> B;
	cout << "Высказывание " << ((A > 2) && (B <= 3));

	return 0;
}

