#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class checkingAccount : public genericAccount {
public:
    checkingAccount();
    checkingAccount(const checkingAccount& orig);
    virtual ~checkingAccount();
private:
    using genericAccount::genericAccount;
};

#endif /* CHECKINGACCOUNT_H */

