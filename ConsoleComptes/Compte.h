#pragma once
#include "Client.h"
#include <fstream>

class Compte {
public:
    Compte(int num, double aSolde, const std::string& aCin, const std::string& aNom, const std::string& aPrenom, const std::string& aAdresse, int aTelephone)
        : solde(aSolde), titulaire(aCin, aNom, aPrenom, aAdresse, aTelephone)
    {
        numero++;
        writeToFile("filename.txt");
    }

    virtual ~Compte() {}

    void writeToFile(const std::string& filename) {
        std::ofstream file(filename); // Open file
        if (file.is_open()) {
            file << solde << " " << numero << std::endl; // Write data to file
            file << titulaire; // Write titulaire to file
            file.close(); // Close the file
            std::cout << "Data written to file '" << filename << "' successfully." << std::endl;
        }
        else {
            std::cout << "Unable to open file '" << filename << "'." << std::endl;
        }
    }

private:
    double solde;
    static int numero;
    Client titulaire;
};
