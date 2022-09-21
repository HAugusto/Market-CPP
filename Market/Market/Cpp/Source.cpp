#include <iostream>
#include "../Headder/GenericFunctions.h"

#define CLEAR system("cls")
#define PAUSE system("PAUSE")

void AccountCompany();
void CompanyInformations();

using namespace std;

bool checker = false;

int main() {
	int answer = NULL;

	if (checker == false) {
		checker = true;
		CompanyInformations();
	}

	while(1) {
		CLEAR;
		cout << "1. Company Informations\n";
		cout << "2. Finances\n";
		cout << "9. Exit\n\nAnswer: ";
		
		cin >> answer;

		switch (answer) {
		case 1:
			CompanyInformations();
			PAUSE;
		case 2:
			AccountCompany();
			PAUSE;
		case 9:
			exit(0);
		}
	}
}