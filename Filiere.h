#ifndef FILIERE_H
#define FILIERE_H
#include "Etudiant.h"

class Filiere{
private:
    int IdFil;
    const int NbEtudiant=4;
    Etudiant TabEtudiant[4];
public:
    // Constructeur
     Filiere();
     // Destructeur
    ~Filiere();
    
    void Afficher();
    // setters
    void setIdFil();
    void setTabEtudiant();
    // getters
    int getIdFil();
    Etudiant* getTabEtudiant();
    int getNbEtudiant();
};


#endif /* FILIERE_H */

