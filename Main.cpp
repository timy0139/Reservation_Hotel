#include<iostream>
#include "date.h"
#include "client.h"
#include "Chambre.h"
int main(){
    Date another_day(31,10,2015);
    Client nathan = Client ("timy01", "faure", "Valentin");
    std::cout<<nathan<<std::endl;
    Chambre thomas = Chambre(8, "double", 500000);
}