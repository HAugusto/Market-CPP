#include <iostream>
#include "../Headder/Account.h"

#define CLEAR system("cls")
#define PAUSE system("PAUSE")

Account *Company = new Account();

void main();

void AccountCompany(){
	while(1) {
		int answer = NULL;
		string Answer;

		CLEAR;
		cout << "1. Create a New Account\n";
		cout << "2. Login Account\n";
		cout << "8. Close Account\n";
		cout << "9. Exit\n";

		cin >> answer;

		switch (answer) {
		case 1:
			Company->NewAccount();
			PAUSE;
			break;
		case 2:
			Company->LoginAccount();
			PAUSE;
			break;
		case 8:
			cout << "\nAre you sure you want to close your account?";
			cin >> Answer;
			if (Answer == "YES" || Answer == "Yes" || Answer == "yes") Company->CloseAccount();
			else cout << "\nCanceled...";
			PAUSE;
			break;
		case 9:
			main();
		}
	}
}