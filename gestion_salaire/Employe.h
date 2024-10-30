#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employe
{
private:
	
	string Nom;
	string Prenom;
	int nbr_heur;
	static float taux_horaire;
protected:
	float salaire;
public:
	Employe(string, string,int);
	virtual float calculer_salaire();
	void afficher() const;
	~Employe();

};

