#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class savingsAccount : public genericAccount {
public:
    savingsAccount();
    savingsAccount(const savingsAccount& orig);
    virtual ~savingsAccount();
private:
    using genericAccount::genericAccount;
};

#endif /* SAVINGSACCOUNT_H */

