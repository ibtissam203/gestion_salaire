#include "Gestionnaire_commerce.h"
#include "Gestionnaire.h"
#include "Commerciale.h"

Gestionnaire_commerce::Gestionnaire_commerce(string n, string p, int nbrh, int nbrv)
    :Commerciale(n,p,nbrh,nbrv),Gestionnaire(n,p)
{
    cout << "ctor Gestionnaire_commerce" << endl;
}

void Gestionnaire_commerce::afficher() const
{
    cout << "afficher Gestionnaire_commerce" << endl;

}

float Gestionnaire_commerce::calculer_salaire()
{
    return Gestionnaire::calculer_salaire() + Commerciale::calculer_salaire();
}

Gestionnaire_commerce::~Gestionnaire_commerce()
{
    cout << "dtor Gestionnaire_commerce" << endl;

}
