#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Matiere.h"

class Etudiant{
private:
    int NumCarte;
    int Telephone;
    double Moyenne;
    Matiere Matieres[2];
public:
     Etudiant();
    ~Etudiant();
    void Afficher();
    double CalculMoyenne();
    bool Reussi();
    int getNumCarte();
    int getTelephone();
    double getMoyenne();
    Matiere* getMatieres();
    void setNumCarte(int N);
    void setTelephone(int T);
    void setMoyenne(double M);
    void setMatieres();
    void setAll();
    
};




#endif /* ETUDIANT_H */

