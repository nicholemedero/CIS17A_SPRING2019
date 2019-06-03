#include "Plants.h"

string Plants::getName() const {
    return name;
}

string Plants::getPlantType() const{
    return plantType;
}

void Plants::setName(string name) {
    this->name = name;
}

void Plants::setPlantType(string plantType) {
    this->plantType = plantType;
}