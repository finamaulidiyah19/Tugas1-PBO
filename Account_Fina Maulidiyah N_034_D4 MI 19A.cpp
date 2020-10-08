#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Saldo awal tidak valid"<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(200000);
 Account Account2(900000);
 cout << "Saldo awal akun 1 : "<< Account1.getAccountBalance()<< "\nSaldo awal akun 2 : "<< Account2.getAccountBalance() << endl;
 Account1.credit(100000);
 Account2.credit(500000);
 cout << "\nSaldo Akun 1 : "<< Account1.getAccountBalance()<< "\nSaldo Akun 2 : "<< Account2.getAccountBalance() << endl;
 Account1.debit(50000);
 Account2.debit(200000);
 cout << "\nSaldo Akun 1 menjadi : "<< Account1.getAccountBalance()<< "\nSaldo Akun 2 menjadi : "<< Account2.getAccountBalance() << endl;
}

