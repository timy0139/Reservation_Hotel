#include "Chambre.h"

Chambre::Chambre(int numero, std::string type, int prix)
    : numero_(numero), type_(type), prix_(prix)
{
    std::cout<<changePrix(50);
}

int Chambre::getNumero() const
{
    return numero_;
}

std::string Chambre::getType() const
{
    return type_;
}

int Chambre::getPrix() const
{
    return prix_;
}

int Chambre::changePrix(int prix)
{
    prix = prix+prix_;
    return prix;
}
