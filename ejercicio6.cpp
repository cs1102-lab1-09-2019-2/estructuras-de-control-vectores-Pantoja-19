/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30  ?????

 */
#include <iostream>

using std::cout;
using std::cin;

float a,b,c,max;
int main()
{
	cout <<"introduce tres numero separdos por espacios: \n";
	cin >>a>>b>>c;
	if (a > b && a > c)
	{
		max = a;
	}
	else if (b > c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	cout <<"el numero con el mayor valor es: "<<max<<"\n";
	return 0;
}
