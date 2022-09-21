// IN TEST
#pragma once
#include <iostream>
#include <string>
#include "GenericFunctions.h"

using namespace std;

GenericFunctions GenericF;

class Account {
private:
	bool checker = false;	// Verifica se já possui uma conta corrente

	int AccountNumber[6] = {};	// Números da conta criados randomicamente

	double Value = NULL;

	int length = 5;
	
public:
	// Criar Conta
	void NewAccount() {
		if (checker == false) {
			string Answer;
			cout << "Do you want to create a new Bank Acount? YES or NO\nAnswer: ";
			cin >> Answer;

			srand(time(NULL));

			if (Answer == "YES" || Answer == "yes") {
				for (int i = 0, add = 0; i < length; i++) {
					AccountNumber[i] = rand() % 9;
					add += AccountNumber[i];
					AccountNumber[6] = add / 5;
				}

				cout << "\nAccount Successfully Created!\nAccount: ";
				for (int i = 0; i < length; i++) cout << AccountNumber[i]; cout << "-" << AccountNumber[6] << "\n\n";

				checker = true;
			} else cout << "\nAccount not created...\n\n";
		} else {
			cout << "\nYou already have a Bank Account...";
		}
	}

	// Entrar na Conta
	void LoginAccount() {
		system("cls");

		char accountNumber[7] = {};

		cout << "Format: XXXXX-X\nAccount Number: ";
		cin >> accountNumber;

		for (int i = 0; i < 7; i++) {
			if (accountNumber[i] == AccountNumber[i]) cout << "True";
		}

		bool checker2 = true;

		if (checker2 == false) cout << "\nAccount does not exist...\n";
		else {
			cout << "\n***** Login Success *****\n";
		}
	}

	// Fechar Conta
	void CloseAccount() {
		for (int i = 0; i < length; i++) {
			AccountNumber[i] = NULL;
		}
		checker = false;
	}
};