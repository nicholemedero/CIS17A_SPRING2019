#include "CustomerInfo.h"

void CustomerInfo::setcustomerNumber(int customerNumber_) {
    customerNumber = customerNumber_;
}

void CustomerInfo::setmailingList(bool mailingList_) {
    mailingList = mailingList_;
}

int CustomerInfo::getcustomerNumber() const {
    return customerNumber;
}

bool CustomerInfo::getmailingList() const {
    return mailingList;
}