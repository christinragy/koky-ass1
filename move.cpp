/*
 * move.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: christin
 */

#include<iostream>
using namespace std;
class move{
private:
	double x;
	double y;
public:
    move();
    double move_add(double a){
  	   x=x+a;
  	   return x;

     }
    double move_add2(double b){
    	y=y+b;
    	return y;
    }
    void show_move(double x,double y){
		cout<<"the new point is"<<x<<","<<y;
	}

   void reset(double a=0,double b=0){
	  x=a;
	  y=b;
  }
};
move::move(){
	x=0;
	y=0;
}
int main(){
	move obj;
	double a,b;
	cout<<"please enter 2 numbers";
	cin>>a>>b;
    double z=obj.move_add(a);
    double k=obj.move_add2(b);
    obj.show_move(z,k);
    return 0;
}
