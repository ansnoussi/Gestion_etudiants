#ifndef MATIERE_H
#define MATIERE_H

class Matiere{
private:
    char Intitule[20];
    double Coefficient;
    double Note;
public:
    // Constructeur 
    Matiere();
    // Destructeur
    ~Matiere();
    // getters
   double getCoefficient();
   double getNote();
   char* getIntitule();
   // setters
   void  setCoefficient();
   void  setNote();
   void  setIntitule();
   void  setAll();
};


#endif /* MATIERE_H */