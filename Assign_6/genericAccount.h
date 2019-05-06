#ifndef GENERICACCOUNT_H
#define GENERICACCOUNT_H

class genericAccount {
public:
    genericAccount();
    genericAccount(const genericAccount& orig);
    virtual ~genericAccount();
private:
    int accountBalance;
    int accountNumber;
    int totalMonthlyDeposits;
    int totalWithdrawals;
    int monthlyServiceCharges;
    virtual void deposit(int,int);
    virtual void withdrawal(int,int);
    virtual int monthlyProc(int,int);
};

#endif /* GENERICACCOUNT_H */

