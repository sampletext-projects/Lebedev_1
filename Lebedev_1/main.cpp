#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	double a, b, c;

	cout << "Программа расчёта наибольшей медианы треугольника по 3 сторонам." << endl;
	cout << "Выполнил Лебедев П.В. (УМЛ-112)" << endl;

	int k;

	do
	{
		cout << "Введите длину стороны a: ";
		cin >> a;
		cout << "Введите длину стороны b: ";
		cin >> b;
		cout << "Введите длину стороны c: ";
		cin >> c;
		double ma = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
		double mb = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
		double mc = 0.5 * sqrt(2 * b * b + 2 * a * a - c * c);

		if (ma > mb && ma > mc) //одна больше всех
		{
			cout << "MA наибольшая: " << ma << endl;
		}
		else if (mb > ma && mb > mc)
		{
			cout << "MB наибольшая: " << mb << endl;
		}
		else if (mc > ma && mc > mb)
		{
			cout << "MC наибольшая: " << mc << endl;
		}
		else if (ma == mb && ma > mc) //две равны и наибольшие
		{
			cout << "MA=MB наибольшие: " << ma << " MC: " << mc << endl;
		}
		else if (mb == mc && mb > ma)
		{
			cout << "MB=MC наибольшие: " << mb << " MA: " << ma << endl;
		}
		else if (ma == mc && ma > mb)
		{
			cout << "MA=MC наибольшие: " << ma << " MB: " << mb << endl;
		}
		else if (ma == mb && mb == mc) //Все равны
		{
			cout << "MA=MB=MC: " << ma << endl;
		}
		cout << "Повторить ввод(1): ";
		cin >> k;
	}
	while (k == 1);
	system("pause");
	return 0;
}
