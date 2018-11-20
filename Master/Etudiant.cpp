#include <iostream>
#include "Etudiant.h"
#include "Matiere.h"

using namespace std;

Etudiant::Etudiant(){ 
    int N,T;
    cout << "Saisir Numero Carte" << endl;
        cin >> N;
    cout << "Saisir Telephone" << endl;
        cin >> T;
   NumCarte = N;
   Telephone = T;
   for(int i=0;i<2;i++)
        Matieres[i];
    Moyenne = CalculMoyenne();
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

void Etudiant::setMoyenne(double M){
    Moyenne=M;
}

void Etudiant::setNumCarte(int N){
    NumCarte=N;
}

void Etudiant::setTelephone(int T){
    Telephone=T;
}
void Etudiant::setMatieres(){
        cout << "\nSetMatieres activated ! " << endl;
        char I[20];
        double C,N;
    for(int i=0;i<2;i++){
        cout << "\n** Matiere N° " << i+1 <<" ** \n";
        cout << "Saisir Intitulé" << endl;
        cin >> I;
        cout << "Saisir Coefficient" << endl;
        cin >> C;
        cout << "Saisir Note" << endl;
        cin >> N;
        Matieres[i].setIntitule(I);
        Matieres[i].setCoefficient(C);
        Matieres[i].setNote(N);
    }
     // On doit mettre à a jour la Moyenne en fonction de table de Matieres 
        Moyenne = CalculMoyenne();
}

void Etudiant::setAll() {
    cout << "\nSetEtudiant activated ! " << endl;
    int N,T;
    cout << "Saisir Numero Carte" << endl;
        cin >> N;
    cout << "Saisir Telephone" << endl;
        cin >> T;
    setNumCarte(N);
    setTelephone(T);
    setMatieres();
}


