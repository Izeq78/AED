# Analisis del problema

## Transcipcion del problema

Desarrollar las siguientes funciones:

1. Valor absoluto.

2. Valor mínimo entre dos valores.

3. Función *f3* , definida por:

![alt text](https://github.com/Izeq78/AED/blob/master/Images/Tp3/Grafico%20f3.png)

## Refinamiento e hipotesis de trabajo

El objetivo del trabajo es demostrar manejo de funciones y del operador condicional. 
Las pruebas deben realizarse con assert, por lo que no se necesita incluir la biblioteca iostream.
Ademas se debe definir cada funcion utilizando el operador condicional.

---

# Diseño de la solucion

## Valor Absoluto

### Lexico

![alt text](https://github.com/Izeq78/AED/blob/master/Images/Tp3/abs%20lexico.png)

### Pruebas

`assert(abs(3) = 3)`

`assert(abs(-8) = 8)`

### Prototipos

`double abs(double);`

### Definiciones

`double abs(double x) {
	return x < 0 ? -x : x;
}`

---

## Valor Minimo

### Lexico

![alt text](https://github.com/Izeq78/AED/blob/master/Images/Tp3/min%20lexico.png)

### Pruebas

`assert(min(8, 3) == 3);`

`assert(min(5, 15) == 5);`

### Prototipos

`double min(double,double);`

### Definiciones

`double min(double x,double y) {
	return x < y ? x : y;
}`

---

## F3

### Lexico

![alt text](https://github.com/Izeq78/AED/blob/master/Images/Tp3/f3%20lexico.png)

### Pruebas

`assert(f3(9) == 9);`

`assert(f3(-15) == -15);`

`assert(f3(2) == -2);`

`assert(f3(3) == -3);`

`assert(f3(-3) == 3);`

### Prototipos

`double f3(double);`

### Definiciones

`double f3(double x) {
	return x <= 3 and x >= -3 ? -x : x;
}`
