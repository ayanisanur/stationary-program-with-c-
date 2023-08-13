#pragma once
#include "Book.h"
#include <iostream>
using namespace std;

class Own :public Book {
public:
	int Grade;
	int Stock;
	Own(string publisher, string lesson, double price, int grade, int stock)
		:Book(publisher, lesson, price) {
		Grade = grade;

		Stock = stock;
		cout << endl;
	}

	void getStock()
	{
		cout << " Books left in stock: " << Stock << endl;
	}
	void getGrade()
	{
		cout << "Grade: " << Grade << endl;

	}
};
