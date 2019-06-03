#include <iostream>
#include "PersonInfo.h"
#include "CustomerInfo.h"

using namespace std;

int main(int argc, char** argv) {

    CustomerInfo a;
    string temp;
    int ctemp;
    char choice;
    
    cout<<"Last name:";
    cin>>temp;
    a.setlastName(temp);
    
    cout<<"First name:";
    cin>>temp;
    a.setfirstName(temp);
           
    cout<<"Address:";
    cin>>temp;
    a.setaddress(temp);
    
    cout<<"City:";
    cin>>temp;
    a.setcity(temp);
    
    cout<<"State:";
    cin>>temp;
    a.setstate(temp);
    
    cout<<"Zip:";
    cin>>temp;
    a.setzip(temp);
    
    cout<<"Phone:";
    cin>>temp;
    a.setphone(temp);
    
    cout<<"Customer Number:";
    cin>>ctemp;
    a.setcustomerNumber(ctemp);
    
    cout<<"Mailing List? (Y/N):";
    cin>>choice;
    
    if (choice == 'Y') {
        a.setmailingList(true);
    } else {
        a.setmailingList(false);
    }
    
    // Output
    
    cout<<"Last name:"<<a.getlastName()<<endl;
    cout<<"First name:"<<a.getfirstName()<<endl;
    cout<<"Address:"<<a.getaddress()<<endl;
    cout<<"City:"<<a.getcity()<<endl;
    cout<<"State:"<<a.getstate()<<endl;
    cout<<"Zip:"<<a.getzip()<<endl;
    cout<<"Phone:"<<a.getphone()<<endl;
    cout<<"Customer Number:"<<a.getcustomerNumber()<<endl;
    cout<<"Mailing List:"<<a.getmailingList();
    
    return 0;
}

