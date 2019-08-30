#include <iostream>
#include <vector>

using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsole();

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

int moda(vector<int> &lista) {
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    int moda,c1,c2 = 0;
    for (int a:lista)
    {
		c1 = 0;
		for (int i=0; i < lista.size(); i++)
		{
			if (lista[i] == a)
			{
				c1++;
			}
		}
		if (c1 > c2)
		{
			c2 = c1;
			moda = a;
		}
	}
    return moda;
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
    return 0;
}
