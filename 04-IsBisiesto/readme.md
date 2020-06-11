# Analisis del problema

### Enunciado

Determinar si un año es bisiesto.

### Restricciones

- Aplicar operadores booleanos.
- No aplicar el operador condicional.
- No utilizar if ni switch.

### Hipotesis de trabajo 

Se toma como año bisiesto a aquellos que son divisibles por 4 y posteriores o iguales al 1582. 
Ademas se requiere que no sean divisibles por 100 o, si lo son, tambien, deben ser divisibles por 400.
Decido aceptar enteros como entrada de mi funcion.

### Modelo IPO

![alt text](https://github.com/Izeq78/AED/blob/master/Images/04-Bisiesto/IsBisiesto.png)

---
# Analisis de la solución

Defino la funcion y los asserts para comprobar su funcionamiento.

### Arbol de expresion

p= año mayor a 1582

q= año divisible por 4

r= año divisible por 400

s= año divisible por 100


![alt text](https://github.com/Izeq78/AED/blob/master/Images/04-Bisiesto/Arbol_IsBisiesto.png)

### Pruebas

`assert(IsBisiesto(2004));            //divisible por 4 pero no por 100`

`assert(IsBisiesto(1999)==false);     //no es divisible ni por 400 ni 4`

`assert(IsBisiesto(1700)==false);     //divisble por 100 y por 4 pero no 400`

`assert(IsBisiesto(1600));            //divisible por 4 y por 400`

### Prototipos

`bool IsBisiesto(int);`

### Definiciones

`bool IsBisiesto(int year){
    return year> 1582 and (year % 4 == 0) and ((year % 400 == 0) or (year % 100 != 0));
}`

