#include <iostream>
#include "Etudiant.h"
#include "Matiere.h"

using namespace std;

Etudiant::Etudiant(){ 
NumCarte=0;
Telephone=0;
Moyenne=-1;
for (int i=0;i<NbMatieres;i++)
    Matieres[i];
}


Etudiant::~Etudiant(){
    cout << "Object Etudiant Deleted !" << endl;
}

void Etudiant::Afficher(){
    cout << "Num Carte : " << NumCarte << endl;
    cout << "Telephone : " << Telephone << endl;
    cout << "Moyenne : " << Moyenne << endl;
    cout << "Liste des Matieres : " << endl;
    for(int i=0;i<2;i++){
        cout << Matieres[i].getIntitule() << "\t";
        cout << "Note: " << Matieres[i].getNote() << endl;
    }
    if(Reussi())
        cout << "Etudiant " << NumCarte << " a réussi !" << endl;
    else 
         cout << "Etudiant " << NumCarte << " n'a pas réussi !" << endl;
}


double Etudiant::CalculMoyenne(){
    double SN=0,SC=0;
    for(int i=0;i<2;i++){
        SN+= Matieres[i].getNote()*Matieres[i].getCoefficient();
    SC+=Matieres[i].getCoefficient();
}
    Moyenne=SN/SC;
    return(Moyenne);
}

bool Etudiant::Reussi(){
    if(Moyenne>=10)
        return(true);
    return(false);
}

int Etudiant::getNumCarte(){
    return NumCarte;
}

int Etudiant::getTelephone(){
    return Telephone;
}

double Etudiant::getMoyenne(){
    return Moyenne;
}

Matiere* Etudiant::getMatieres(){
    return(Matieres);
}

int Etudiant::getNbMatieres() {
    return NbMatieres;
}

void Etudiant::setNumCarte(){
    cout << "Saisir Num Carte" << endl;
    cin >> NumCarte;
}

void Etudiant::setTelephone(){
    cout << "Saisir Telephone" << endl;
    cin >> Telephone;
}
void Etudiant::setMatieres(){
        cout << "\nSetMatieres activated ! " << endl;
        for(int i=0;i<NbMatieres;i++)
            Matieres[i].setAll();
     // On doit mettre à a jour la Moyenne en fonction de table de Matieres 
        Moyenne = CalculMoyenne();
}   

void Etudiant::setAll(){
    setNumCarte();
    setTelephone();
    setMatieres();
}



