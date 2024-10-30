#pragma once
#include "Gestionnaire.h"
#include "Commerciale.h"
class Gestionnaire_commerce : public Gestionnaire,public Commerciale
{
public:
	Gestionnaire_commerce(string,string,int nbrh,int nbrv);
	void afficher() const;
	float calculer_salaire() override;
	~Gestionnaire_commerce();
};

