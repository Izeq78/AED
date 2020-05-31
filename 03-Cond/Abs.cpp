/*Tp Condicional y funciones_Valor Absoluto
Higa, Ivan Ezequiel
2020/05/31*/

#include <cassert>

//declaro la funcion

double f(double);

int main(){

	//realizo el assert para comprobar su funcionamiento

	assert(f(3) == 3);
	assert(f(-8) == 8);
	
}

//defino la funcion

double f(double x) {
	return x < 0 ? -x : x;
}

