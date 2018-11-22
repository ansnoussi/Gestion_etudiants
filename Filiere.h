#ifndef FILIERE_H
#define FILIERE_H
#include "Etudiant.h"
#define NBR_ETUDIANT 4

class Filiere{
private:
    int IdFil;
    const int NbEtudiant=NBR_ETUDIANT;
    Etudiant TabEtudiant[NBR_ETUDIANT];
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
    
    // Appartenance (question 4)
    bool Appartenance(Etudiant E);
    bool Appartenance(Etudiant *E);
   // bool Appartenance(Etudiant &E);
};


#endif /* FILIERE_H */

