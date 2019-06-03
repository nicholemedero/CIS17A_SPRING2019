#ifndef GENUS_H
#define GENUS_H

#include "Gymnosperms.h"
#include "Plants.h"
#include <string>
using namespace std;

class Genus : public Gymnosperms {
public:
    string getName() const; //virtual function from base class
    string getGenus() const;
    string getSpecies() const;
    double getAvgWeight() const;
    string getOrigin() const;
    void setGenus(string genus);
    void setSpecies(string species);
    void setAvgWeight(double avgWeight);
    void setOrigin(string origin);
    
private:
    string genus;
    string species;
    double avgWeight;
    string origin;

};

#endif /* GENUS_H */

