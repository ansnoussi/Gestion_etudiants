#include <iostream>
#include "Etudiant.h"
#include "Filiere.h"
using namespace std;

Filiere::Filiere(){
IdFil=0;
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
    cout << endl;
}

void Filiere::setIdFil() {
    cout << "Saisir l'ID de Filiere" << endl;
    cin >> IdFil;
}

int Filiere::getIdFil() {
    return(IdFil);
}

Etudiant* Filiere::getTabEtudiant() {
    return (TabEtudiant);
}

void Filiere::setTabEtudiant() {
    cout << "\nSetTabEtudiant activated ! " << endl;
    for(int i=0;i<NbEtudiant;i++){
        cout << "\nEtudiant "<< i+1 <<endl;
        TabEtudiant[i].setAll();
    }
};

int Filiere::getNbEtudiant() {
    return NbEtudiant;
}








