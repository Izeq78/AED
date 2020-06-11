/*Tp-EsBisiesto
Higa, Iván Ezequiel
2020-06-04*/
#include <cassert>

bool IsBisiesto(int);

int main(){
    assert(IsBisiesto(2004));            //divisible por 4 pero no por 100
    assert(IsBisiesto(1999)==false);     //no es divisible ni por 400 ni 4
    assert(IsBisiesto(1700)==false);     //divisble por 100 y por 4 pero no 400
    assert(IsBisiesto(1600));            //divisible por 4 y por 400
}

bool IsBisiesto(int year){
    return year> 1582 and (year % 4 == 0) and ((year % 400 == 0) or (year % 100 != 0));
}