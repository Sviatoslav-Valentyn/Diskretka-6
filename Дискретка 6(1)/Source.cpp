#include <iostream>
#include <conio.h>
#include <iomanip>
#include <time.h>
using namespace std;
void Print(int** a, const int rowCount, const int colCount);
void Input(int** a, const int rowCount, const int colCount);
int ref(int** a, const int rowCount, const int colCount);
int symet(int** a, const int rowCount, const int colCount);
int tran(int** a, const int rowCount, const int colCount);
int main() {
	srand((unsigned)time(NULL));
	//int rowCount;
	//int colCount;
	//const int n = 4;
	//int a[n][n];
	int rowCount = 4;
	int colCount = 4;
	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];
	int k{};
	Input(a, rowCount, colCount);
	Print(a, rowCount, colCount);
	ref(a, rowCount, colCount);
	symet(a, rowCount, colCount);
	tran(a, rowCount, colCount);
	//cout << ref << endl;
	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
void Print(int** a, const int rowCount, const int colCount)
{
	cout << endl;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
void Input(int** a, const int rowCount, const int colCount)
{
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
		cout << endl;
	}
}
int ref(int** a, const int rowCount, const int colCount)
{
	int q;
	for (int i = 0; i < rowCount; i++) {
		if (a[i][i] == 0) {
			q = 0;
			cout << "It is irref and asymetr" << endl;
			break;
		}
		else q = 1;
		cout << "It is ref " << endl;
	}
	return q;
}
int symet(int** a, const int rowCount, const int colCount)
{
	int q;
	for (int i = 0; i < 2; i++)
	{
		if (a[0][1] == a[1][0]) {
			//q = 1;
			cout << "It is symet" << endl;
		}
		else
			cout << "It anty_symet " << endl;
	}
	return 0;
}
int tran(int** a, const int rowCount, const int colCount)
{
	int q;
	for (int i = 0; i < 1; i++)
	{
		if (a[3][1] == 0 && a[2][3] == 0) {
			//q = 1;
			cout << "It isn't tran" << endl;
		}
		else
			cout << "It tran " << endl;
	}
	return 0;
}