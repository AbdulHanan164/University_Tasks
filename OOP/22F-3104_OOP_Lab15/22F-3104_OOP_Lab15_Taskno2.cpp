//#include <iostream>
//using namespace std;
//class Account {
//protected:
//    double balance;
//public:
//    Account() {}
//    Account(double b = 10000) : balance(b) {} //  intialze account with the value of 10000
//    virtual void calculateAnnualIncome() = 0;
//    virtual void calculateZakatDeduction() = 0;
//};
//
//class SavingsAccount : public Account {//Inherete the base class Account  
//public:
//    SavingsAccount(double b = 10000) : Account(b) {}//consructor intialize the value of amount
//    void calculateAnnualIncome() {
//        balance = balance * 0.05;//caluculate the saving account income
//        cout << "Annual Balance for savings account = " << balance - 10000 << endl;
//    }
//    void calculateZakatDeduction() {
//        double zakat = balance * 0.025;//caculate the deduction amount from account
//        cout << "Zakat deduction for savings account = " << zakat << endl;
//    }
//};
//class CurrentAccount : public Account {//Inherete the base class Account
//public:
//    CurrentAccount(double b = 10000) : Account(b) {}
//    void calculateAnnualIncome() {
//        cout << "No annual income for current account." << endl;
//    }
//    void calculateZakatDeduction() {
//        cout << "No Zakat deduction for current account." << endl;
//    }
//};
//int main()
//{
//    Account* account1 = new SavingsAccount();
//    account1->calculateAnnualIncome();
//    account1->calculateZakatDeduction();
//    Account* account2 = new CurrentAccount();
//    account2->calculateAnnualIncome();
//    account2->calculateZakatDeduction();
//    return 0;
//}
