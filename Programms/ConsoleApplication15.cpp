// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int random1 = 0;
	int random2 = 0;
	int usrData = 0;
	random1 = rand() % 10 + 1;
	random2 = rand() % 10 + 1;
	std::cout << "посчитайте сумму произведений данных числел:" << "  "  << random1 << "  " << random2 << std::endl;
	Sleep(3000);
	std::cout << "Введите число" << std::endl;
	std::cin >> usrData;
	std::cout << usrData << std::endl;
}


