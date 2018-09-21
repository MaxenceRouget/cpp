#include <iostream>
#include "lib.h"
//#include <stdlib.h>



int main() {

    std::cout<<"HELLO"<<std::endl;
    int a = 1;
    int b = 3;

    lib lib1;
    
    std::cout<<"le resultat est : "<<lib1.somme(a,b)<<std::endl;

    return 0;
  }
