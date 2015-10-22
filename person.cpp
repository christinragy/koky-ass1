/*
 * class.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: christin
 */


#include<iostream>
using namespace std;
class person{
private :
     static const int limit = 7;
	string last_name; // Person’s last name
	char first_name[limit];

public:
	person();
	person(string ln, char fn[limit]);

void Show(){   //firstname ,lastname
  cout<<"the form is "<<first_name[limit]<<last_name;
  cout<<endl;
}
void FormalShow(){    // lastname, firstname format

	  cout<<"the new form is "<<last_name<<first_name[limit];
	  cout<<endl;
}

};
person::person(){
   last_name=" ";
   for(int i=0;i<limit;i++)
    first_name[i]='\0';
}
person::person(string ln, char fn[limit]){
	last_name=ln;
	for(int i=0;i<limit;i++)
	first_name[i]=fn[i];
}
int main(){
	person a;
	string ln;
	char fn[7];
    cout<<"please enter the first name";
    cin>>fn;
    cout<<"please enter the last name";
    cin>>ln;
    person(fn,ln);
    a.Show();
    cout<<endl;
    a.FormalShow();
    cout<<endl;
    system("pause");
    return 0;
}
