#include <iostream>
#include "../Headder/CompanyInfo.h"

#define CLEAR system("cls")
#define PAUSE system("PAUSE")
#define CHAR sizeof(char)

CompanyInfo *Company = new CompanyInfo();

void main();

void CompanyInformations() {
	if (Company->getCompanyExist() == false) {
		string answer;
		char *CompanyName = (char *) malloc(CHAR * 20);
		char *CompanySector = (char *) malloc(CHAR * 20);

		CLEAR;
		cout << "You want to create a new Company? YES or NO\nAnswer: ";
		cin >> answer;

		CLEAR;
		if (answer == "YES" || answer == "yes" || answer == "Yes") {
			cout << "Company Name: ";
			cin >> CompanyName;
			Company->setCompanyName(CompanyName);
			free(CompanyName);

			cout << "Company Sector: ";
			cin >> CompanySector;
			Company->setSectorCompany(CompanySector);
			free(CompanySector);
			

			Company->setCompanyExist();

			cout << "\n\nNew Company Created!\n";
			PAUSE;
			main();
		} else exit(0);
	} else {
		while (1) {
			int answer = NULL;

			CLEAR;
			cout << "Company Name: " << Company->getCompanyName();
			cout << "\nSector Company: " << Company->getSectorCompany();
			cout << "\nEmployers: " << Company->getEmployersNumber();

			cout << "\n\n1. New Employee";
			cout << "\n2. Employeers Number";
			cout << "\n9. Exit\n\nAnswer: ";


			cin >> answer;

			switch (answer) {
			case 1:
				Company->AddEmployee();
				cout << "\nNew Employee Add\n";
				PAUSE;
				break;
			case 2:
				cout << "\nEmployers Number: " << Company->getEmployersNumber() << "\n";
				PAUSE;
				break;
			case 9:
				main();
			}
		}
	}

}