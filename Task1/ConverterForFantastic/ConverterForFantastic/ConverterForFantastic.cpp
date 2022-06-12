#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string str1;

	cout << "Введите строку: ";
	getline(cin, str1);
	transform(str1.begin(), str1.end(), str1.begin(), tolower);
	cout << "Конвертированная строка: ";

	for (char ch1 : str1)
	{
		size_t count = 0;
		for (char ch2 : str1)
		{
			if (ch1 == ch2)
			{
				count++;
			}
		}

		if (count > 1)
		{
			cout << ")"; 
		}
		else
		{
			cout << "(";
		}
	}

	cin.get();
	return 0;
}