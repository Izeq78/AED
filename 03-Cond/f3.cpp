/*Tp Condicional y Funciones_f3
Higa, Ivan Ezequiel
2020-05-31*/

#include <cassert>

//declaro la funcion

double f(double);

int main() {
	
	//ejecuto los asserts correspondientes
	assert(f(9) == 9);
	assert(f(-15) == -15);
	assert(f(2) == -2);
	assert(f(3) == -3);
	assert(f(-3) == 3);
}

//defino la funcion

double f(double x) {
	return x <= 3 and x >= -3 ? -x : x;
}