/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>
#include <string>
using std::cout;
using namespace std;

int main() {
	int numero  = 1;
	for (int i = 0; i < 6; i++)
	{
		numero = numero*10+i+2;
		cout << numero;
		int j = 5;
		while (j > i)
		{
			cout << "*";
			j--;
		}
		cout <<"\n";
	}	
    return 0;
}
