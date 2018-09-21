#include <iostream>
#include "ecole.h"
//#include <stdlib.h>



int main() {

    std::cout<<"Le constructeur est en marche"<<std::endl;
    int date = 1900;

    ecole ecole1;

    std::cout<<"la date est : "<<ecole1.mult(date)<<std::endl;

    return 0;
  }
