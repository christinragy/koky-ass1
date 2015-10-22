                 *Assignment 1*

1)Class is oop (object oriented programming).it is a combination of both structures (containing data)and functions 
..it is easy way to simplify the code.

2)Abstraction: is the operations performed on the object with public interface of class functions.
 Data Hiding: means that data in the private section not to be edited by the user and can be accessed through
              member functions only.
 Encapsulation: means data representation and method code are hidden.

3)An object is an instance of a class .A class defines a type while object is a variable.

4)The difference between data members and methods is that data members are private while methods are public.
if we create several objects of a given class,each object comes with storage for its own set of data ,but all
the objects use the one set of member functions.

5)class bank_account {
   private:
      string name;
      string accnum;
      double balance;
   
   public:
     void show(){
        cout<<"the name is"<<name<<endl;
        cout<<"the account number is"<<accnum<<endl;
        cout<<"the balance  is"<<balance<<endl;
  }
  
    void deposit(double x){
        balance+=x;       //As default i considered the balnace has 2000 l.E
   }
    double withdraw(double x){
       if(x<0 || x> balance )
         return 0;
      else 
         return balance-x;
}
};

6)Class constructor is done to initialize an object of that class .A class destructor when the object expires.

7)class constructor for the class bank_account is either :
     bank_account(){
         name="ali";
         accnum="90";
         balance =2000;
}

or 
     bank_account(string client_name ,string number ,double bal){
            name=client_name;
            accnum=number;
            balance=bal;
}

8)A default constructor has 2 possibilities either has no arguments or has defaults for all arguments .
Having a default constructor enables to declare objects without initializing them.

9) class Stock
{
private:
 char company[30];
 int shares;
 double share_val;
 double total_val;
 void set_tot() { total_val = shares * share_val; }

public:
 void acquire(const char * co, int n, double pr);
 void buy(int num, double price);
 void sell(int num, double price);
 void update(double price);
 double share_value(){
   return share_val;
}
 double total_value(){
   return total_val;
}
char company_name(){
   return company[30];
}
 void show();

10)this is a variable that could be of any type while *this is a pointer (pointer is a variable its value is the 
 address of another variable)
