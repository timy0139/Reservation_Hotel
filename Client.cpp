#include "Client.h"

Client::Client(std::string id, std::string nom, std::string prenom)
    :id_(id), nom_(nom), prenom_(prenom)
{
    std::cout<<"id:"<<id<<nom<<prenom;
}

std::string Client::getId() const
{
    return id_;
}

std::string Client::getNom() const
{
    return nom_;
}

std::string Client::getPrenom() const
{
    return prenom_;
}

std::ostream& operator<<(std::ostream& os, const Client& c)
{
    os << c.prenom_ << " "<< c.nom_ <<"id:"<< c.id_;
    return os;
}
