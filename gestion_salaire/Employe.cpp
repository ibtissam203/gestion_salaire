#include "Employe.h"

float Employe::taux_horaire = 40;



Employe::Employe(string n, string p, int nbrH)
	:Nom(n) ,Prenom(p),nbr_heur(nbrH)
{
}

float Employe::calculer_salaire()
{

	salaire= (taux_horaire * nbr_heur);
	return salaire;
}

void Employe::afficher() const
{
	cout << "Nom : " << this->Nom << endl;
	cout << "Prenom : " << this->Prenom << endl;
	cout << "nbr_heur : " << this->nbr_heur << " h" << endl;
	cout << "salaire de base: " << this->salaire << " DH" << endl;

}

Employe::~Employe()
{
	cout << "dstor Employe" << endl;
}
