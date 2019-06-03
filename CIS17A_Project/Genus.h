#ifndef GENUS_H
#define GENUS_H

#include "Gymnosperms.h"
#include "Plants.h"
#include <string>
using namespace std;

template <class T>
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

template <class T>
string Genus<T>::getName() const {
    return name;
}

template <class T>
string Genus<T>::getGenus() const{
    return genus;
}

template <class T>
string Genus<T>::getSpecies() const {
    return species;
}

template <class T>
double Genus<T>::getAvgWeight() const {
    return avgWeight;
}

template <class T>
string Genus<T>::getOrigin() const {
    return origin;
}

template <class T>
void Genus<T>::setGenus(string genus) {
    this->genus = genus;
}

template <class T>
void Genus<T>::setSpecies(string species) {
    this->species = species;
}

template <class T>
void Genus<T>::setAvgWeight(double avgWeight) {
    this->avgWeight = avgWeight;
}

template <class T>
void Genus<T>::setOrigin(string origin) {
    this->origin = origin;
}

#endif /* GENUS_H */

