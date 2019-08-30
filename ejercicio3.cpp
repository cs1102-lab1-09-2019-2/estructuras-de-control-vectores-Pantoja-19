#include <iostream>
#include <vector>

using namespace std;

float mediana(vector<int> &lista);
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

float mediana(vector<int> &lista) {
	
    float mediana;
    int indice;
    
    if (lista.size()%2 == 0)
    {
		indice = lista.size()/2;
		mediana = (lista[indice] + lista [indice - 1])/2.0;
	}
	else
	{
		indice = lista.size()/2;
		mediana = lista[indice];
	}
    return mediana;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
    return 0;
}
