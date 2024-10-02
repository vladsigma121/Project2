#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	/*int arr[20]{-5,10};*/
	/*int i = [15] {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10;};
	srand(time(0));
	for (int i = -5; i == 10; i++);
	{
		cout << rand() % -5 + 1;
	}*/
	for (int count = 1; count != 15; count++) {
		int r = rand() % (10 - -5 + 1) - 5;
		int arr[15] = { r,r,r,r,r,r,r,r,r,r,r,r,r,r,r};
		cout << count << ")" << arr[count] << endl;
	}


	return 0;
}
