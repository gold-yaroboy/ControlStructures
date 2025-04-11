#include<iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите число: "; cin >> n; cout << endl;
	/*cout << "1)" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "2)" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= (i - 1); j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "3)" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= (n - i); j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "4)" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * (i - 1); j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= (n - i); j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "5)" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * (n - i); j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= (i - 1); j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "6)" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 1; j <= 2 * (i - 1); j++)
		{
			cout << " ";
		}
		cout << "\\" << endl;
	}
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = 1; j <= 2 * (i - 1); j++)
		{
			cout << " ";
		}
		cout << "/" << endl;
	}*/
	cout << endl;
	cout << "7)" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}

}
