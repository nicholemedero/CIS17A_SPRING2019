#ifndef FAMILY_H
#define FAMILY_H

#include "Angiosperms.h"
#include <string>
using namespace std;

class Family : public Angiosperms {
public:
    bool getFruit() const;
    string getCotyledon() const;
    string getDichogamy() const;
    string getOrigin() const;
    void setFruit(bool);
    void setCotyledon(string);
    void setDichogamy(string);
    void setOrigin(string);
private:
    bool fruit;
    string cotyledon;
    string dichogamy;
    string origin;
};

#endif /* FAMILY_H */

