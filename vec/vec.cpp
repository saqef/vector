// vec.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <random>
using namespace std;

void main(void)

{
	setlocale(LC_ALL, "Russian");
	int n, a, b;//m-columns, n-string
	cout << "Numbers of rows=";
	cin >> n;
	cout << "Left limit=";
	cin >> a;
	cout << "Right limit=";
	cin >> b;
	//ofstream book_file("matr.txt");
	fstream file;
	file.open("c:\\matr\\vec.txt", ios_base::out);
	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister.
	uniform_real_distribution<> dist(a, b);
	file << n << endl;
		for (int j = 0; j < n; j++)
				file << dist(gen) << endl; // print the raw output of the generator.
	file.close();
}
