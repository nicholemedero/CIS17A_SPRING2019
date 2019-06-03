#include "PersonInfo.h"

void PersonInfo::setlastName(string lastName_) {
    lastName = lastName_;
}

void PersonInfo::setfirstName(string firstName_) {
    firstName = firstName_;
}

void PersonInfo::setaddress(string address_) {
    address = address_;
}

void PersonInfo::setcity(string city_) {
    city = city_;
}

void PersonInfo::setstate(string state_) {
    state = state_;
}

void PersonInfo::setzip(string zip_) {
    zip = zip_;
}

void PersonInfo::setphone(string phone_) {
    phone = phone_;
}

string PersonInfo::getlastName() const {
    return lastName;
}

string PersonInfo::getfirstName() const {
    return firstName;
}

string PersonInfo::getaddress() const {
    return address;
}

string PersonInfo::getcity() const {
    return city;
}

string PersonInfo::getstate() const {
    return state;
}

string PersonInfo::getzip() const {
    return zip;
}

string PersonInfo::getphone() const {
    return phone;
}
