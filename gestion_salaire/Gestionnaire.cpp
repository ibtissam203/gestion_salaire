#include "Gestionnaire.h"
#include "Employe.h"

float Gestionnaire::salaire_hebdomadaire = 2000;

Gestionnaire::Gestionnaire(string n, string p)
	:Employe(n,p,0)
{
}

float Gestionnaire::calculer_salaire()
{
    salaire = (salaire_hebdomadaire * 4);
    return salaire;
}

void Gestionnaire::afficher() const
{
	Employe::afficher();
	cout << "salaire_hebdomadaire : " << this->salaire_hebdomadaire << " DH" << endl;
	
}

Gestionnaire::~Gestionnaire()
{
	cout << "dtor gestionnaire" << endl;
}
