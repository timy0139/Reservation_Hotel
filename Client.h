#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>

class Client {
private:
    std::string id_;
    std::string nom_;
    std::string prenom_;

public:
    Client(std::string id, std::string nom, std::string prenom);

    std::string getId() const;
    std::string getNom() const;
    std::string getPrenom() const; 

    friend std::ostream& operator<<(std::ostream& os, const Client& c);

};



#endif