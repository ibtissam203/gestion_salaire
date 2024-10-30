#pragma once
class Salarie
{
protected:
	static int id_salarie;
public:
	Salarie();
	virtual double calculer_salaire() const = 0;
	~Salarie();


};

