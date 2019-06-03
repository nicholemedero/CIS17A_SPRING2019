#include "Genus.h"

string Genus::getName() const {
    return name;
}

string Genus::getGenus() const{
    return genus;
}

string Genus::getSpecies() const {
    return species;
}

double Genus::getAvgWeight() const {
    return avgWeight;
}

string Genus::getOrigin() const {
    return origin;
}

void Genus::setGenus(string genus) {
    this->genus = genus;
}

void Genus::setSpecies(string species) {
    this->species = species;
}

void Genus::setAvgWeight(double avgWeight) {
    this->avgWeight = avgWeight;
}

void Genus::setOrigin(string origin) {
    this->origin = origin;
}