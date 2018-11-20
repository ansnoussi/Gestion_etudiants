#include <iostream>
#include "Matiere.h"
#include <cstring>
using namespace std;

    Matiere::Matiere(){
        cout << "Saisir Intitulé" << endl;
        cin >> Intitule;
        cout << "Saisir Coefficient" << endl;
        cin >> Coefficient;
        cout << "Saisir Note" << endl;
        cin >> Note;          
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
   
   void Matiere::setCoefficient(double C){
       Coefficient=C;
   }
   void Matiere::setNote(double N){
       Note=N;
   }
   
   void Matiere::setIntitule(char I[]){
       strcpy(Intitule,I);
   }
   
   
   
   

