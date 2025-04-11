#include<iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "go n: "; cin >> n;
	cout << endl;
	cout << "1";
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "2";
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i <= j; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "3";
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = j; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "4";
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < j; i++)
		{
			cout << "  ";
		}
		for (int i = j; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "5";
	cout << endl;
	/*for (int j = 0; j < n; j++) 
	{
		for (int i = 0; i <= (n-j); i++)
		{
			cout << "  ";
		}
		for (int i = 0; i <= j; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
	cout << endl;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
		}
		cout << endl;
	}
	cout << endl;
}