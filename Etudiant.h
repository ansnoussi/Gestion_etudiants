#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Matiere.h"
#define NBR_MATIERE 3

class Etudiant{
private:
    int NumCarte;
    int Telephone;
    double Moyenne;
    const int NbMatieres = NBR_MATIERE;
    Matiere Matieres[NBR_MATIERE];

public:
    // Constructeur
     Etudiant();
     // Destructeur
    ~Etudiant();
    
    void Afficher();
    double CalculMoyenne();
    bool Reussi();
    // getters
    int getNumCarte();
    int getTelephone();
    double getMoyenne();
    Matiere* getMatieres();
    int getNbMatieres();
    // setters
    void setNumCarte();
    void setTelephone();
    void setMatieres();  // "setMoyenne" est automatique avec setMatieres car la Moyenne dépend de notes de Matieres
    void setAll();
 
    
};




#endif /* ETUDIANT_H */

