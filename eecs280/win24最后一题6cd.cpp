#include <iostream>
using namespace std;

class CreditCard{
private:
    double balance;
    string owner;
public:
    CreditCard(const string owner_in):balance(0),owner(owner_in){};

    double get_balance() const{
        return balance;
    }

    const string &get_owner() const{
        return owner;
    }

    virtual void purchase(double val){
        balance += val;
    }
    void make_payment(double val){
        balance -= val;
    }

    friend ostream& operator<<(ostream &os,const CreditCard& cc);
};

ostream& operator<<(ostream &os,const CreditCard& cc){
    os << cc.get_owner() << ": $" << cc.get_balance() << endl;
    return os;
}

class RewardCard : public CreditCard{
private:
    int points;
public:
    RewardCard(const string &owner_in) : CreditCard(owner_in),points(0){};

    void purchase(double val) override {
        CreditCard::purchase(val);
        points += static_cast<int>(val / 100.0); // 每 $100 增加 1 积分
    }

    int get_points() const{
        return points;
    }
};

int main(){
    CreditCard cc("Eddie");
    CreditCard *p1 = &cc;
    p1->purchase(100);
    p1->purchase(50);
    cout << *p1 << endl;
    p1->make_payment(75);
    cout << *p1 << endl;

    RewardCard rc("Sadie");
    CreditCard *p2 = &rc;
    p2->purchase(4500);
    cout << *p2 << endl;
    p2->make_payment(1000);
    cout << *p2 << endl;

    int x = rc.get_points();
    cout << x << endl;
    return 0;
}