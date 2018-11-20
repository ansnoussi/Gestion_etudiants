#ifndef FILIERE_H
#define FILIERE_H
#include "Etudiant.h"

class Filiere{
private:
    int IdFil;
    Etudiant TabEtudiant[10];
public:
    int NbEtudiant;
     Filiere(int I);
    ~Filiere();
    void Afficher();
    void setIdFil(int x);
    void setTabEtudiant();
    int getIdFil();
    Etudiant* getTabEtudiant();
};


#endif /* FILIERE_H */

