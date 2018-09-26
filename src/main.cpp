#include <iostream>



int main() {

    std::cout<<"HELLO"<<std::endl;
    int a = 1;
    int b = 3;

    lib lib1;

    parole parole1;

    std::cout<<"le resultat est : "<<lib1.somme(a,b)<<std::endl;

    std::cout<<"le resultat est : "<<lib1.bi(a,b)<<std::endl;

    std::cout<<"le resultat est : "<<lib1.div(a,b)<<std::endl;

      std::cout<<parole1.hello()<<std::endl;

    return 0;
  }
