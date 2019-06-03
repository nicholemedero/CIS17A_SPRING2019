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
    string plantType;
protected:
    string name;

};

#endif /* PLANTS_H */

