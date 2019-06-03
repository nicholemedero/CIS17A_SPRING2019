#ifndef PLANTS_H
#define PLANTS_H

#include <string>
using namespace std;

class Plants {
public:
    virtual string getName() const;
    string getPlantType() const;
    void setName(string);
    void setPlantType(string);
private:
    string name;
    string plantType;

};

#endif /* PLANTS_H */

