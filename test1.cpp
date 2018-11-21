#include <iostream>

class tableau{
    private:

    public:
    void afficheA(int A[]){
        for(int i=0 ;i<10 ; i++){
            std::cout << "A[" << i << "] = " << A[i] << "\n" ;
        }
    };
    void remplitA(int A[]){
        for(int i=0 ;i<10; i++){
            std::cout << "donner A[" << i << "] : " ;
            std::cin >> A[i] ;
        }
    };
};

main() {
    int A[10];
    tableau t;
    t.remplitA(A);
    int & ref=A[5];
    int * point;
    point=A+7;
    (point)++;
    t.afficheA(A);
}
