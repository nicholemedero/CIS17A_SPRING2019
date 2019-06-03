#include "Gymnosperms.h"

string Gymnosperms::getFamily() const {
    return family;
}

string Gymnosperms::getSeed() const {
    return seed;
}

int Gymnosperms::getSepals() const {
    return sepals;
}

int Gymnosperms::getPetals() const {
    return petals;
}

void Gymnosperms::setFamily(string family) {
    this->family = family;
}

void Gymnosperms::setSeed(int seed) {
    this->seed = seed;
}

void Gymnosperms::setSepals(int sepals) {
    this->sepals = sepals;
}

void Gymnosperms::setPetals(int petals) {
    this->petals = petals;
}