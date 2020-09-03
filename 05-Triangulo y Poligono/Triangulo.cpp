#include <cassert>     
#include <array>
#include <string>

struct point {double x, y;};

enum struct red {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9};

enum struct green {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9}; 

enum struct blue {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9};      //utilizo los enums para limitar los valores de los colores a 10

struct rgb {enum red;enum green; enum blue;};

struct Triangle {std::array<point,3> trianglePoints; rgb colour;};
