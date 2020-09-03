#include <cassert>     
#include <array>
#include <string>

struct point {double x, y;};

enum struct red {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9};

enum struct green {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9}; 

enum struct blue {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9};      //utilizo los enums para limitar los valores de los colores a 10

const unsigned nVertices = 50;

struct rgb {enum red;enum green; enum blue;};

struct polygon {
    unsigned n;
    std::array<point, nVertices> polygonPoints; 
    rgb colour;
    };
