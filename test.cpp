#include <iostream>


main() {

    int A =1, B=2, C=3;
    int *P1, *P2;
    P1=&A;
    P2=&C;
    *P1=(*P2)++;
    P1=P2;
    P2=&B;
    *P1-=*P2;
    ++*P2;
    *P1*=*P2;
    A=++*P2**P1;
    P1=&A;
    *P2=*P1/=*P2;
    std::cout << "A =" << A << '\n' ;
    std::cout << "B =" << B << '\n' ;
    std::cout << "C =" << C << '\n' ;
}

