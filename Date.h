#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date {
private:
    int jour_;
    int mois_;
    int annee_;

    bool estBissextile(int annee); //a voir comment faire

public:
    Date(int jour = 1, int mois = 1, int annee = 2025);

    int getJour() const;  
    int getMois() const;  
    int getAnnee() const; 

    // Pour comparer les dates (utile plus tard)
    bool operator<(const Date& other) const;
    bool operator<=(const Date& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Date& d);
};

bool is_date(int mois, int jour);
std::string to_string(const Date& d) ;

#endif 