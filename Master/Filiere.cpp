#include <iostream>
#include "Etudiant.h"
#include "Filiere.h"
using namespace std;

Filiere::Filiere(int I){
    IdFil=I;
    for(int i=0;i<NbEtudiant;i++)
      TabEtudiant[i];
}


Filiere::~Filiere(){
    cout << "Object Filiere Deleted !" << endl;
}

void Filiere::Afficher(){
    cout << "IdFiliere : " << IdFil << endl;
    cout << "Liste d'etudiants : " << endl;
    for(int i=0;i<NbEtudiant;i++){
        cout << "\n** Etudiant N° " << i+1 << " **" <<endl;
        TabEtudiant[i].Afficher();
    }
}

void Filiere::setIdFil(int x) {
IdFil=x;
}

int Filiere::getIdFil() {
    return(IdFil);
}

Etudiant* Filiere::getTabEtudiant() {
    return (TabEtudiant);
}

void Filiere::setTabEtudiant() {
    for(int i=0;i<NbEtudiant;i++)
        TabEtudiant[i].setAll();
};





