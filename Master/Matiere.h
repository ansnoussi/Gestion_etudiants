#ifndef MATIERE_H
#define MATIERE_H

class Matiere{
private:
    char Intitule[20];
    double Coefficient;
    double Note;
public:
    Matiere();
    ~Matiere();
   double getCoefficient();
   double getNote();
   char* getIntitule();
   void  setCoefficient(double C);
   void  setNote(double N);
   void  setIntitule(char I[]);
};


#endif /* MATIERE_H */