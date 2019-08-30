#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
	vector <int> V;
	int numero;
	//Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
	while (numero != -1)
	{
		if (numero != -1)
		{
			cout << "Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:" << "\n";
			cin >> numero;
			V.emplace_back(numero);
		}
	}
	V.pop_back();
	return(V);
}

float promedio(vector<int> &lista) {
	//El promedio es la suma de todos los elementos dividido entre el total de elementos
    float prom = 0;
    for (auto elemento:lista)
    {
		prom = prom + elemento;
	}
	prom /= lista.size();
	return prom;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
    return 0;
}
