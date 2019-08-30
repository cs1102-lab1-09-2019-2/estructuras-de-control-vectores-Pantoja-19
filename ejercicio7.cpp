/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo

 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo

 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111

 Continuar? y

 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.

 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
}

int sumar(int a, int b)
{
	int suma = a + b;
	return suma;
}

int restar (int a, int b)
{
	int resta = a - b;
	return resta;
}

int multiplicar(int a, int b)
{
	int producto = a*b;
	return producto;
}
float dividir(int a, int b)
{
	if (b == 0){
		throw invalid_argument ("No se puede dividir entre cero");
	}
	float cosiente = (float)a/b;
	return cosiente;
}
int modulo (int a, int b)
{
	int modulo;
	int cociente = a/b;
	modulo = a - b*cociente;
	return modulo;
}

int main() {

	int eleccion,num1,num2;
	int suma,resto,producto,residuo;
	float cociente;
	
	mostrarMenu();
	
	cout <<"seleccione el numero de accion: ";
	cin >> eleccion;
	cout << "introduzca 2 numero enteros para operar, separados con espacios: ";
	cin >> num1>>num2;
	switch (eleccion)
	{
		case 1: suma = sumar(num1, num2);
				cout << "la suma es: "<<suma<<"\n";
				break;
		case 2: resto = restar(num1, num2);
				cout << "el resto es: "<<resto<<"\n";
				break; 
		case 3: producto = multiplicar(num1, num2);
				cout <<"el producto es: "<<producto<<"\n";
				break;
		case 4: cociente = dividir(num1, num2);
				cout <<"el cociente es: "<<cociente<<"\n";
				break;
		case 5: residuo = modulo(num1, num2);
				cout <<"el modulo es: "<<residuo<<"\n";
				break;
		default:cout <<"el numero de accion seleccionado no existe!";
				break;
	}
    return 0;
}



