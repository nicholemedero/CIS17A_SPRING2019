#ifndef PERSONINFO_H
#define PERSONINFO_H

#include <string>
using namespace std;

class PersonInfo {
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;
public:
    void setlastName(string);
    void setfirstName(string);
    void setaddress(string);
    void setcity(string);
    void setstate(string);
    void setzip(string);
    void setphone(string);

    string getlastName() const;
    string getfirstName() const;
    string getaddress() const;
    string getcity() const;
    string getstate() const;
    string getzip() const;
    string getphone() const;
    
};



#endif /* PERSONINFO_H */

