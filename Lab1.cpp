#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	//Задание 1
	cout << "Задание 1\n";

	cout << "int: " << sizeof (int) << "\n";
	cout << "short int: " << sizeof (short) << "\n";
	cout << "long int: " << sizeof (long) << "\n";
	cout << "float: " << sizeof (float) << "\n";
	cout << "double: " << sizeof (double) << "\n";
	cout << "long double: " << sizeof (long double) << "\n";
	cout << "char: " << sizeof (char) << "\n";
	cout << "bool: " << sizeof (bool) << "\n\n\n\n";



	//Задание 2
	cout << "Задание 2\n";

	int value1;
	unsigned int order1 = sizeof (int) * 8;
	unsigned int mask1 = 1 << (order1 - 1);

	cout << "Введи целое число: ";
	cin >> value1;

	for (int i = 1; i < order1; ++i)
	{
		if (i % 8 == 0 || i == 1)
		{
			putchar(' ');
		}
		putchar(value1 & mask1 ? '1' : '0');
		value1 <<= 1;
	}
	cout << "\n\n\n\n";



	//Задание 3
	cout << "Задание 3\n";

	union{
		float value2;
		int a;
	};
	unsigned int order2 = sizeof(float) * 8;
	unsigned int mask2 = 1 << (order2 - 1);

	cout << "Введите рациональное число: ";
	cin >> value2;

	for (int k = 0; k < order2; ++k)
	{
		if (k == 1 || k % 8 == 0)
		{
			putchar(' ');
		}
		putchar(a & mask2 ? '1' : '0');
		a <<= 1;
	}
	cout << "\n" << "  |<-Экс->|<--------Мантиса--------->|";
	cout << "\n\n\n\n";



	//Задание 4
	cout << "Задание 4\n";

	union {
		double value3;
		int b[2];
	};
	unsigned int order3 = sizeof(double) * 8;
	unsigned int mask3 = 1 << (order3 - 1);
	
	cout << "Введите рациональное число: ";
	cin >> value3;

	for (int l = 0; l < order3 / 2; ++l)
	{
		if (l == 1 || l % 8 == 0 || l == 12)
		{
			putchar(' ');
		}
		putchar(b[1] & mask3 ? '1' : '0');
		b[1] <<= 1;
	}
	for (int j = 0; j < order3 / 2; ++j)
	{
		if (j % 8 == 0)
		{
			putchar(' ');
		}
		putchar(b[0] & mask3 ? '1' : '0');
		b[0] <<= 1;
	}
	cout << "\n" << "  |<Экспанента>|<------------------------Мантиса------------------------->|";
}
