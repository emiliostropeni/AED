// Ejemplos Tipos de Datos
/*K1051
Emilio Stropeni
161545-2
2018
Ing. Sola
*/

#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int main(){
	
	const bool soleado = true;
	const char letra = 's';
	const unsigned int maximo = 350;
	const int dedos = 5;
	const double precio = 299.99;
	const string mensaje = "Estudio ingenieria";

	assert(soleado == true);
	assert(maximo>50);
	assert((letra+mensaje).length()==19);
	assert(precio*2==599.98);
	assert(letra%2!=0);
	assert(soleado and soleado);
	assert(soleado or not soleado);

}
