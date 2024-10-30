#pragma once
#include "Employe.h"
class Entreprise
{
private:
	string Nom;
	string adresse;
	Employe** tab_employes;
	int capacite;
	int taille;
public:
	Entreprise(string,string, int);
	void ajouter_employe(Employe* employe);
	void resize();
	void afficher_salaires() const;
	void totale_salaires() const;
	~Entreprise();

};

