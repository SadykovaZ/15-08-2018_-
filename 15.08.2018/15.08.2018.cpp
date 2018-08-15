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


int main()
{
	setlocale(LC_ALL, "Rus");

	int x, y;

	cin >> x >> y;

	AddRightDigit(y, x);
	cout << x << endl;


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

