#pragma once
#include <iostream>
#include <string>

#define UNDEFINED -858993460

using namespace std;

class GenericFunctions {
private:
	int length = 0;

	// Retorna o tamanho do vetor
	int VectorLength(int *vector) {
		int i = 1;
		for (i; vector[i] != UNDEFINED; i++);
		return length = i;
	}
public:
	int getVectorLength(int *vector) {
		if (length == 0) VectorLength(vector);
		return length;
	}

	// Imprime uma frase na tela
	void PrintTxt(string phrase) {
		cout << phrase;
	}
	
	// Imprime um número na tela
	int PrintNum(int number) {
		cout << number;
	}

	// Imprime um vetor na tela
	void PrintNumL(int *vector) {
		if (length == 0) VectorLength(vector);
		for (int i = 0; i < length; i++) cout << vector[i] << " ";
	}

	// Completa um vetor por inteiro com números inteiros sequenciais
	void AutoCompleteVector(int *vector) {
		if (length == 0) VectorLength(vector);
		for (int i = 0; i < length; i++) vector[i] = i + 1;
	}
};	