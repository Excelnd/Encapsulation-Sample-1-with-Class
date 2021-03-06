// Encapsulation Sample 1 with Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class item
{
	int keep_data;
public:
	void set(int enter_value);
	int get_value(void);
};


// class implementation part

void item::set(int enter_value)
{
	keep_data = enter_value;
}

int item::get_value(void)
{
	return keep_data;
}

int main()
{
	item John_cat, Joe_cat, Big_cat;
	// three objects instantiated
	int garfield; // normal varialbe

	John_cat.set(10);
	Joe_cat.set(11);
	Big_cat.set(12);
	garfield = 13;

	cout << "Accessing data using class\n";
	cout << "-------------------------\n";
	cout << "Data value for John_Cat is " << John_cat.get_value() << "\n";
	cout << "Data value for Joe_cat is " << Joe_cat.get_value() << "\n";
	cout << "Data value for Big_cat is " << Big_cat.get_value() << "\n";
	cout << "\nAccessing data normally\n";
	cout << "---------------------------\n";
	cout << "Data value for garfield is " << garfield << "\n";

}

