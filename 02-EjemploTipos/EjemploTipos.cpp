/*Tp2 Tipos de Datos
Higa, Iván Ezequiel
20200518*/

#include <iostream>
int main () {
    int i = 15;
    double d = 2.55;
    unsigned u = 7;
    char c = 77;
    bool b = 0;
    std::string s1 = "En ASCII el 77 representa el caracter: ";
    std::string s2 = "En ASCII el 84 representa el caracter: ";
    std::string s3 = "En ASCII el 86 representa el caracter: ";
    if (b==false); {
        std::cout << s1 << c << "\n";
        if (i%8 == u) {
            c = c + u;
            std :: cout << s2 << c << "\n";
            if (2<d<3) {
                int entd = int (d);
                c = c + entd; 
                std::cout << s3 << c << "\n";
            }
        }
    }
    

}
