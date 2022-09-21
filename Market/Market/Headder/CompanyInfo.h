// IN TEST

#pragma once
#include <iostream>
#include "Personal.h"

#define CHAR sizeof(char)
#define INT sizeof(int)

using namespace std;

class CompanyInfo {
private:
	bool CompanyExist = false;
	string CompanyName = "Generic Name";
	string SectorCompany = "Null";
	int EmployersNumber = 1;
public:
	// Setters
	void setCompanyName(string companyName) {
		CompanyName = companyName;
	}

	void setSectorCompany(string sectorcompany) {
		SectorCompany = sectorcompany;
	}

	void setCompanyExist() {
		CompanyExist = true;
	}

	// Getters
	bool getCompanyExist() {
		return CompanyExist;
	}

	string getCompanyName() {
		return CompanyName;
	}

	string getSectorCompany() {
		return SectorCompany;
	}

	int getEmployersNumber() {
		return EmployersNumber;
	}

	// Específicas
	void AddEmployee(){
		string firstname, lastname, sector, function;
		int age = NULL;

		cout << "***** New Employee *****\nFirst Name: "; cin >> firstname;
		cout << "Last Name: "; cin >> lastname;
		cout << "Sector in Company: "; cin >> sector;
		cout << "Function: "; cin >> function;
		cout << "Age: "; cin >> age;

		EmployersNumber++;
	}
};