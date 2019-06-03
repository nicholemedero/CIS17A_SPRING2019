#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include "PersonInfo.h"

class CustomerInfo : public PersonInfo {
private:
    int customerNumber;
    bool mailingList;
public:
    void setcustomerNumber(int);
    void setmailingList(bool);
    int getcustomerNumber() const;
    bool getmailingList() const;
};

#endif /* CUSTOMERINFO_H */

