#pragma once
#include <string>
#include "Compte.h"
#include "Client.h"

class Agence
{
public:
	Agence() {};
	Agence(std::string aNom, std::string aAdresse)
		: nom(aNom), adresse(aAdresse)
	{

	}
	virtual ~Agence() {}

	Compte CreeCompte(Client, Compte);
	Compte ModifierCompte(Client, Compte, Compte);
	void ResilierCompte();
	void AfficherCompte(Compte) const;
	void AfficherCompte(Client) const;
	//void AfficherCompte(Compte) const;

private:
	std::string nom, adresse;

};

