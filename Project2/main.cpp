#include<iostream>
#include<Windows.h>
#include<cstdlib>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int ii = 10;
	int arr[ii];

	for (int i = 0; i < ii; i++)
	{
		arr[i] = rand() % 10, 5;
	}

	for (int i = 0; i < ii; i++)
	{
		cout << arr[i] << " ";
		if (i == 9)
		{
			cout << "\n";
		}


	}
	const int pl = 10;
	int arr[pl];;
	cout << "Введите 10 чисел от 0 до 10: (Другие числа вводить нельзя)";
	cin >> arr[pl];
	
	if (arr[pl] == arr[ii])
	{
		cout << "У вас совпали число(а)";
	}

	
	return 0;
}
