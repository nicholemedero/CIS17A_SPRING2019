#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class savingsAccount : public genericAccount {
public:
    savingsAccount();
    savingsAccount(const savingsAccount& orig);
    virtual ~savingsAccount();
    bool status;
private:

};

#endif /* SAVINGSACCOUNT_H */

