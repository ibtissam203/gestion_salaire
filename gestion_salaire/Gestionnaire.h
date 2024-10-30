#pragma once
#include "Employe.h"
class Gestionnaire :
    public Employe
{
private:
    static float salaire_hebdomadaire;
public:
    Gestionnaire(string n, string p);
    float calculer_salaire() override;
    void afficher() const;
    ~Gestionnaire();
};

