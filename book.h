#pragma once
#include <iostream>
using namespace std;
class Book {
protected:
	string Publisher;
	string Lesson;
	double Price;
public:
	Book(string publisher, string lesson, double price) :Publisher(publisher), Lesson(lesson), Price(price) {}
	void getInfo() {
		cout << "Publisher: " << Publisher << endl;
		cout << "Lesson: " << Lesson << endl;
		cout << "Price: " << Price << "TL" << endl;
	}
};


class Tyt :public Book {


public:
	int Grade;
	Tyt(string publisher, string lesson, double price, int grade)
		:Book(publisher, lesson, price) {

		Grade = grade;

	}
	void getGrade()
	{
		cout << "Grade: " << Grade << endl;
	}
};


class Ayt :public Book {

public:
	int Grade;
	Ayt(string publisher, string lesson, double price, int grade)
		:Book(publisher, lesson, price) {

		Grade = grade;
	}
	void getGrade()
	{
		cout << "Grade: " << Grade << endl;
	}
};
