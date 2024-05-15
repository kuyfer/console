#pragma once
#include <string>
#include <iostream>

class Client {
public:
    Client() {}
    Client(std::string aCin, std::string aNom, std::string aPrenom, std::string aAdresse, int aTelephone)
        : cin(aCin), nom(aNom), prenom(aPrenom), adresse(aAdresse), telephone(aTelephone)
    {}

    std::string getNom() const { return nom; }

    friend std::ostream& operator<<(std::ostream& os, const Client& Obj) {
        os << Obj.cin << " " << Obj.nom << " " << Obj.prenom << " " << Obj.adresse << " " << Obj.telephone << std::endl;
        return os;
    }

private:
    std::string cin, nom, prenom, adresse;
    int telephone;
};
