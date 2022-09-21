// IN TEST

#pragma once
#include <iostream>

using namespace std;

class Personal
{
private:
	 string FirstName = "First Name";
	 string LastName = "Last Name";
	 string Sector = "Sector";
	 string Function = "Function";
	 signed int Age = 0;

public:
	// Constructor
	Personal(string firstName, string lastName, string sector, string function, int age) {
		setFirstName(firstName);
		setLastName(lastName);
		setSector(sector);
		setFunction(function);
		setAge(age);
	}

	// Setters
	void setFirstName(string firstname) {
		FirstName = firstname;
	}

	void setLastName(string lastname) {
		LastName = lastname;
	}

	void setSector(string sector) {
		Sector = sector;
	}

	void setFunction(string function) {
		Function = function;
	}

	void setAge(int age) {
		if (age > 15) Age = age;
		else {
			cout << "Insira uma idade válida";
		}
	}
	
	// Getters
	string getFirstName() {
		return FirstName;
	}
	
	string getLastName() {
		return LastName;
	}

	string getSector() {
		return Sector;
	}

	string getFunction() {
		return Function;
	}

	int getAge() {
		return Age;
	}

	string PrintPerson() {
		cout << "First Name: ";
	}
};