#include<iostream>
using namespace std;

//#define ELEVATOR
#define FACTORIAL
//#define POWER
//#define FIBONACCI1
//#define FIBONACCI2

#ifdef ELEVATOR
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

void main()
{
	setlocale(LC_ALL, "Russian");

	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
}
#endif // ELEVATOR

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
