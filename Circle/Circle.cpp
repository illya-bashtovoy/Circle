/*
	Створіть клас Circle (коло). Реалізуйте через перевантажені оператори:
		- Перевірку на рівність радіусів двох кіл (операція «==»);

*/

#include <iostream>
#include <Windows.h>

using namespace std;


class Circle {
private:
	double radius;

public:
	Circle() {}//конструктор
	friend istream& operator>>(istream& in, Circle& r) {
		cout << "радіус =";
		in >> r.radius;
		return in;
	}


	friend std::ostream& operator<<(std::ostream& os, Circle& r) {
		os << r.radius << std::endl;
		return os;
	}


	bool operator==(const Circle& other) {
		return this->radius == other.radius;
	}


	~Circle() {}//деструктор
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Circle R1;
	Circle R2;

	cin >> R1;
	cin >> R2;

	cout << "R1=" << R1;
	cout << "R2=" << R2;

	bool check = R1 == R2;

	cout << "Оператор перевантаження '=='" << check;
}