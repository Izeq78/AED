/*Tp Condicional y funciones_Valor Absoluto
Higa, Ivan Ezequiel
2020/05/31*/

#include <cassert>

//declaro la funcion

double abs(double);

int main(){

	//realizo el assert para comprobar su funcionamiento

	assert(abs(3) == 3);
	assert(abs(-8) == 8);
	
}

//defino la funcion

double abs(double x) {
	return x < 0 ? -x : x;
}

