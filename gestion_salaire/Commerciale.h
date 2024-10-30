#pragma once
#include "Employe.h"
class Commerciale :
    public Employe
{
private:
    static float commission;
    int totale_vente;
public:
    Commerciale(string, string,int ,int);
    float calculer_Indemnite() const;
    float calculer_salaire() override;
    void afficher() const;
    ~Commerciale();
};

