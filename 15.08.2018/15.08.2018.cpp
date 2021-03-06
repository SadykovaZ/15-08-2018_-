// 15.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

void PowerA3(int A, int &B)
{
	B = A * A * A;
}

void PowerA234(int A, int &B, int &C, int &D)
{
	B = A * A;
	C = A * A * A;
	D = A * A * A * A;
}

void Mean(int X, int Y, int &AMean, int &GMean)
{
	AMean = (X + Y) / 2;
	GMean = sqrt(X*Y);

}

void TrianglePS(int a, int &P, int &S)
{
	P = 3 * a;
	S = pow(a, 2)*sqrt(3 / 4);
}

void DigitCountSum(int K, int &C, int &S)
{
	while (K != 0)
	{
		S += K % 10;
		++C;
		K /= 10;
	}
}

void InverDigits(int &K)
{
	int n = 0;
	while (K > 0)
	{
		n *= 10;
		n += K % 10;
		K /= 10;
	}

	K = n;

}

void AddRightDigit(int D, int &K)
{
	K = D + K * 10;
}

bool IsPower5(int K)
{
	if (K == 0)
	{
		return 0;
	}
	while (K > 1)
	{
		if (K % 5 != 0)	return 0;

		K = K / 5;
	}
	return true;
}

void Reverse(int a[], int size)
{

	for (int i = 0; i < size / 2; i++)
	{
		swap(a[i], a[size - 1 - i]);
	}
}

void array1(int x, int b, int c, int &i)
{
	for (int i = 0; i <= 1000; i++)
	{
		if (i % x == 0 && i % b == 0 && i % c == 0)
		{
			cout << i << endl;
		}
	}
}

bool check(char str[])
{
	int c = 0, f=0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (c < 0) return false;
		else if (f < 0) return false;
		if (str[i] == '(' ) c++;
		else if (str[i] == ')' ) c--;
		
		else if (str[i] == '[') f++;
		else if (str[i] == ']') f--;
	}
	if (c != 0) return false;
	else if (f != 0) return false;
	return true;
}



int main()
{
	setlocale(LC_ALL, "Rus");

	char str[30];
	cin >> str;

	cout << check(str) << endl;

	/*int x, b, c, i=0;

	cin >> x >> b >> c;

	array1(x, b,c,i);*/



	/*int a[6] = { 1,2,3,4,9,5 };

	Reverse(a, 6);

	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

*/
	/*int n;
	cin >> n;
	cout << IsPower5(n) << endl;


	int x, y;

	cin >> x >> y;

	AddRightDigit(y, x);
	cout << x << endl;*/


	/*int K;
	cin >> K;

	InverDigits(K);

	cout << K << endl;*/

	/*int k, c = 0, s = 0;
	cin >> k;

	DigitCountSum(k, c, s);

	cout << c << " " << s << endl;
*/


/*int a, b, c;
cin >> a;
TrianglePS(a, b, c);

cout << b << endl;
cout << c << endl;*/


/*int a, b, c, d, amean, gmean;
cin >> a >> b;

Mean(a, b, amean, gmean);

cout << amean << " " << gmean << endl;

cin >> a >> c;
Mean(a, c, amean, gmean);

cout << amean << " " << gmean << endl;

cin >> a >> d;
Mean(a, d, amean, gmean);

cout << amean << " " << gmean << endl;*/



/*int a, b, c, d;
cin >> a;
PowerA234(a, b, c, d);

cout << b << endl;
cout << c << endl;
cout << d << endl;*/

/*int x, y = 1000;
cin >> x;
PowerA3(x, y);

cout << y << endl;
*/

	system("pause");
	return 0;
}

