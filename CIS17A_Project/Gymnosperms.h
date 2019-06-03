#ifndef GYMNOSPERMS_H
#define GYMNOSPERMS_H

#include "Plants.h"
#include <string>
using namespace std;

class Gymnosperms : public Plants {
public:
    string getFamily() const;
    int getSeed() const;
    int getSepals() const;
    int getPetals() const;
    void setFamily(string);
    void setSeed(int);
    void setSepals(int);
    void setPetals(int);
    
private:
    string family;
    int seed;
    int sepals;
    int petals;

};

#endif /* GYMNOSPERMS_H */

