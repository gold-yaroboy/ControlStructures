#include<iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

#define ULA	"\xDA"		//(char)218
#define URA	"\xBF"		//(char)191
#define LLA	"\xC0"		//(char)192
#define LRA	"\xD9"		//(char)217
#define HL	"\xC4\xC4"	//(char)196
#define VL	"\xB3"		//(char)179
#define WB	"\xDB\xDB"	//(char)219
#define BB	"\x20\x20"	//' '
//#define SC
//#define HC
//#define REMOVE
//#define PASKAL

void main()
{
	setlocale(LC_ALL, "");
	int n;
#ifdef SC
	cout << "Введите число: ";cin >> n;cout << endl;n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			/*if (i == 0 && j == 0)cout << ULA;
			else if (i == 0 && j == n)cout << URA;
			else if (i == n && j == 0)cout << LLA;
			else if (i == n && j == n)cout << LRA;
			else if (i == 0 || i == n)cout << HL;
			else if (j == 0 || j == n)cout << VL;
			else cout << (~i & 1 ^ ~j & 1 ? BB : WB);*/
			cout << ((i == 0 && j == 0) ? ULA :
				((i == 0 && j == n) ? URA :
					((i == n && j == 0) ? LLA :
						((i == n && j == n) ? LRA :
							((i == 0 || i == n) ? HL :
								((j == 0 || j == n) ? VL :
									((~i & 1 ^ ~j & 1) ? BB : WB)))))));
		}
		cout << endl;
	}
	n--;
#endif
#ifdef HC
	setlocale(LC_ALL, "");
	cout << "Введите число: ";cin >> n;cout << endl;
	for (int i = 0; i < n * n; i++)
	{
		for (int l = 0; l < n * n; l++)cout << (((i / n) + (l / n)) & 1 ? "  " : "X ");cout << endl;
	}
#endif
#ifdef REMOVE
	int a;
	int b;

	cout << "До обмена:" << endl; 
	cout << "a = "; cin >> a; 
	cout << "b = "; cin >> b; cout << endl;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << "После обмена: a = " << a << ", b = " << b << endl;
#endif
#ifdef PASKAL
	cout << "Введите глубину треугольника Паскаля: ";cin >> n;
	if (n <= 0)cout << "Глубина должна быть положительным числом." << endl;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n - i - 1; j++)cout << " ";
		int v = 1;
		for (int l = 0; l <= i; l++) 
		{
			cout << v << " ";
			v = v * (i - l) / (l + 1);
		}
		cout << endl;
	}
#endif
}