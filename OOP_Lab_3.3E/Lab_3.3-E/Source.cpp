//Source.cpp
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	//////////////////////////����//////////////////////////

	Pair p1, p2;
	cout << "Input first pair" << endl;
	cin >> p1;
	cout << "Input second pair" << endl;
	cin >> p2;

	cout << endl;
	cout << "First pair a and b";
	cout << p1 << endl;

	cout << "Second pair a is c, b is d";
	cout << p2 << endl;

	//��������� ���
	cout << "Sum of pairs:" << p1 + p2 << endl << endl;

	//�������� �� �����
	int number;
	cout << "(number, you want to multiply on) n = ";
	cin >> number; cout << endl;

	cout << "First pair multyplied on n : " << p1 * number << endl;
	cout << "Second pair multiplyed on n: " << p2 * number << endl;


	cout << "Number of elements of class Pair : " << Pair::Count() << endl;
	cout << "Size of class: " << sizeof(p1) << endl;

	cout << endl;
	cout << "p1: " << p1 << endl;
	cout << "++p1: " << ++p1 << endl;
	cout << "--p1: " << --p1 << endl;
	cout << "p1++: " << p1++ << endl;
	cout << "p1--: " << p1-- << endl << endl;
	cout << "--------------------------------------------" << endl << endl;


	//////////////////////////�����//////////////////////////
		Money m1, m2;

		cout << endl;
		cout << "Input money 1: ";
		cin >> m1;

		cout << endl;
		cout << "Input money 2: ";
		cin >> m2;

		cout << endl;
		cout << "Money 1: ";
		cout << m1 << endl;

		cout << "Money 2: ";
		cout << m2 << endl;

		//��������� ���
		cout << "Sum of money: " << m1 + m2 << endl;

		//�������� ���
		cout << "Difference of money: " << m1 - m2 << endl;

		//������ ���
		cout << "Division of money: " << m1 / m2 << endl;

		cout << "Number of elements of class Money : " << Money::Count() << endl;
		cout << "Size of class: " << sizeof(m1) << endl;

		cout << "m1: " << m1 << endl;
		cout << "++m1: " << ++m1 << endl;
		cout << "--m1: " << --m1 << endl;
		cout << "m1++: " << m1++ << endl;
		cout << "m1--: " << m1-- << endl << endl;
	
}
