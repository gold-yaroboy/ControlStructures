#include<iostream>
#include<windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;
using std::cout;
using std::endl;
using std::cin;

#define t1
#define t2

void main()
{
	SetConsoleOutputCP(65001);
	
	int n;
	cout << "Доска: "; cin >> n;
	cout << endl;
#ifdef t1
	cout << "┏";
	for (int i = 0; i < (n + 1); i++)
	{
		cout << "━━";
	}
	cout << "┓" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "┃ ";
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << "██";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << " ┃";
		cout << endl;
	}
	cout << "┗";
	for (int i = 0; i < (n + 1); i++)
	{
		cout << "━━";
	}
	cout << "┛" << endl;
	cout << "\n\n\n" << endl;
#endif

#ifdef t2

	for (int i = 0; i < n; i++)
	{
		for (int h = 0; h < n; h++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
					{
						for (int l = 0; l < n; l++)
						{
							cout << "X ";
						}
						for (int l = 0; l < n; l++)
						{
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
			else
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 1)
					{
						for (int l = 0; l < n; l++)
						{
							cout << "  ";
						}
						for (int l = 0; l < n; l++)
						{
							cout << "X ";
						}
					}
				}
				cout << endl;
			}
		}
	}

#endif
}