#ifndef ANGIOSPERMS_H
#define ANGIOSPERMS_H

#include "Plants.h"
#include <string>
using namespace std;

class Angiosperms : public Plants {
public:
    string getFamily() const;
    string getSeed() const;
    int getSepals() const;
    int getPetals() const;
    void setFamily(string family);
    void setSeed(int seed);
    void setSepals(int sepals);
    void setPetals(int petals);
   
private:
    string family;
    string seed;
    int sepals;
    int petals;
};

#endif /* ANGIOSPERMS_H */

