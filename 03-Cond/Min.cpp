/*Tp Condicional y Funciones_Valor Minimo
Higa,Ivan Ezequiel
2020/05/31*/

#include <cassert>

//declaro la funcion

double f(double,double);

int main() {

	//realizo los asserts correspondientes

	assert(f(8, 3) == 3);
	assert(f(5, 15) == 5);
}

//defino la funcion

double f(double x,double y) {
	return x < y ? x : y;
}