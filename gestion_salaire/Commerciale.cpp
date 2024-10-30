#include "Commerciale.h"
#include "Employe.h"

float Commerciale::commission = 30;

Commerciale::Commerciale(string n, string p, int nbrH, int nbrV)
	:Employe(n,p,nbrH),totale_vente(nbrV)
{

}

float Commerciale::calculer_Indemnite() const
{
	return (this->commission * this->totale_vente);
}

float Commerciale::calculer_salaire()
{
	this->salaire= Employe::calculer_salaire() + calculer_Indemnite();
	return this->salaire;
}

void Commerciale::afficher() const
{
	Employe::afficher();
	cout << "commission : " << this->commission << " DH" << endl;
	cout << "totale_vente : " << this->totale_vente  << endl;
	
}

Commerciale::~Commerciale()
{
	cout << "dtor commerciale" << endl;
}
