#include<iostream>
using namespace std;

//#define ELEVATOR
//#define FACTORIAL
//#define FACTORIAL1
//#define POWER
//#dedine POWER1
//#define FIBONACCI1
//#define FIBONACCI2
#define FIBONACCI

void elevator(int floor);
int factorial(int n);
double power(int a, int n);
void Fibonacci(int n/*, int a, int b*/);

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef ELEVATOR
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL1
	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL1

#ifdef POWER1
	int a;
	int n;
	cout << "Введите основание и показатель степени "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif // POWER1

#ifdef FIBONACCI
	int n;
	cout << "До какого предела вывести ряд Фибоначчи? "; cin >> n;
	Fibonacci(n);
#endif // FIBONACCI

}


#ifdef FACTORIAL
long double fact(int n)
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число: "; cin >> n;
	cout << "Факториал введенного числа: " << fact(n) << endl;
	return 0;
}
#endif // FACTORIAL

#ifdef POWER
double power(double n, double p)
{
	if (p == 0)
		return 1;
	else
	{
		return n * power(n, p - 1);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double n, p, resultat;
	cout << "Введите число: "; cin >> n;
	cout << "Введите степень: "; cin >> p;
	resultat = power(n, p);
	cout << n << " в степени " << p << " = " << resultat << endl;
	return 0;
}
#endif // POWER

#ifdef FIBONACCI1
int fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		if(fibonacci(i)<n)
		cout << fibonacci(i) << "\t";
	}
	return 0;
}
#endif // FIBONACCI1


#ifdef FIBONACCI2
int fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << fibonacci(i) << "\t";
	}
	return 0;
}
#endif // FIBONACCI2

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);
	cout << floor << endl;
}

int factorial(int n)
{
	if (n == 0)return 1;
	int f = n * factorial(n - 1);
	return f;
}

double power(int a, int n)
{
	/*if (n == 0) return 1;
	if (n < 0)
	{
		return 1./a * power(a, n + 1);
	}
	return a * power(a, n - 1);*/

	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1. / a * power(a, n + 1);
}

void Fibonacci(int n/*, int a, int b*/)
{
	static int a = 0, b = 1, c = 1;
	if (a > n)return;
	cout << a << "\t";
	//Fibonacci(n, b, a + b);
	/*a = b;
	b = c;
	c = a + b;*/
	c = (a = b) + (b = c);
	Fibonacci(n);
}