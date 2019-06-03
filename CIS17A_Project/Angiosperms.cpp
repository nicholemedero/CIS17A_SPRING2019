#include "Angiosperms.h"

string Angiosperms::getFamily() const {
    return family;
}

string Angiosperms::getSeed() const {
    return seed;
}

int Angiosperms::getSepals() const {
    return sepals;
}

int Angiosperms::getPetals() const {
    return petals;
}

void Angiosperms::setFamily(string family) {
    this->family = family;
}

void Angiosperms::setSeed(int seed) {
    this->seed = seed;
}

void Angiosperms::setSepals(int sepals) {
    this->sepals = sepals;
}

void Angiosperms::setPetals(int petals) {
    this->petals = petals;
}