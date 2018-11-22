#include <iostream>
#include "Matiere.h"
#include <cstring>
using namespace std;

    Matiere::Matiere(){
    Coefficient=0;
    Note=-1;
    }
    Matiere::Matiere(char I[],double C,double N){
    	strcpy(Intitule,I);
    	Coefficient= C;
    	Note= N;
	}
    
    Matiere::~Matiere(){
        cout << "Object Matiere deleted !" << endl;
    }
    
    double Matiere::getCoefficient(){
       return Coefficient;
   }
    
   double Matiere::getNote(){
       return Note;
   }
   
   char* Matiere::getIntitule(){
       return Intitule;
   }
   
   void Matiere::setCoefficient(){
       cout << "Saisir Coefficient" << endl;
       cin >> Coefficient;
   }
   
   void Matiere::setNote(){
       cout << "Saisir Note" << endl;
       cin >> Note;
   }
   
   void Matiere::setIntitule(){
       cout << "Saisir Intitule" << endl;
       cin >> Intitule;
   }
   
   void Matiere::setAll() {
       setIntitule();
       setCoefficient();
       setNote();
   }
