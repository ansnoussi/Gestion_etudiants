#include <iostream>
#include <cstdlib>
#include "Etudiant.h"
#include "Matiere.h"
#include "Filiere.h"
using namespace std;



int main() {
    // On a appliquer la consigne en testant avec 4 étudiants, 3 matières et 2 filières 
    Filiere GL,IIA;
    
    cout << "\n ** Initialisation de la filiere GL ** \n";
    GL.setIdFil();
    GL.setTabEtudiant();
    
    cout << "\n ** Initialisation de la filiere IIA ** \n";
    IIA.getIdFil();
    IIA.setTabEtudiant();
 
    cout << "Affichage de La filiere GL" << endl;
    system ("pause");
    GL.Afficher();
    system ("pause");
    
    cout << "Affichage de La filiere IIA" << endl;
    system ("pause");
    IIA.Afficher();
    system ("pause");
    
    //On va tester si l'etudiant appartient a la filière GL
    /*
    Etudiant E;
    E.setAll();
    
    if (GL.Appartenance(E))
        cout << "Fesfes";
    else
        cout << " Tnekna";
    */
    return 0;
};
