/*
 * bank.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author:christin 
 */

#include <iostream>
#include <string>
using namespace std ;
class bank_acc{
private:
	string name;
	string accnum;
	double balance;
public:
	void deposit_balance(double x){
		balance=balance +x ;
	}
	double withdraw_balance(double x){
		if(x<0 || x>balance )
			return 0;
		else
			return balance-x ;
	}
	void show(){
	 cout<<"the name is "<<name;
	 cout<<"the account number is "<<accnum;
	 cout<<"the balance is "<<balance;

	bank_acc(){
	   accnum = 2000 ;
	   balance = 2000 ;
	}
         

	bank_acc(string client,string num,double bal){
		name=client;
		accnum=num;
		balance=bal;
	}
};
int main ()
{
   bank_acc a;
   cout<<"plz enter ur name and ur account number  "<<endl ;
   string client , num ;
   cin>> client >>num ;
   a.show();
   bank_acc (client , num , 220 );
   a.deposit_balance ( 1000 );
   cout<< " how much would you like to withdraw ? " ;
   double bal ;
   cin >> bal ;
   cout<<endl;
   double current ;
  current = a.withdraw_balance (bal ) ;
  cout<<"your current balance is "<<current ;
  system("pause");
}
