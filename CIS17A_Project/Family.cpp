#include "Family.h"

bool Family::getFruit() const {
    return fruit;
}

string Family::getCotyledon() const {
    return cotyledon;
}

string Family::getDichogamy() const {
    return dichogamy;
}

string Family::getOrigin() const {
    return origin;
}

void Family::setFruit(bool fruit_) {
    fruit = fruit_;
}

void Family::setCotyledon(string cotyledon_) {
    cotyledon = cotyledon_;
}

void Family::setDichogamy(string) {
    this->dichogamy = dichogamy;
}

void Family::setOrigin(string) {
    this->origin = origin;
}