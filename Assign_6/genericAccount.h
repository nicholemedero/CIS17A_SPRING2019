#ifndef GENERICACCOUNT_H
#define GENERICACCOUNT_H

class genericAccount {
public:
    genericAccount();
    genericAccount(const genericAccount& orig);
    virtual ~genericAccount();
    int accountBalance;
    int accountNumber;
    int totalMonthlyDeposits;
    int totalWithdrawals;
    int monthlyServiceCharges;
    virtual int deposit(int);
    virtual int withdrawal(int);
private:

};

#endif /* GENERICACCOUNT_H */

