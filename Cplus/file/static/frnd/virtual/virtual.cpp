/*
 * virtual.cpp
 *
 *  Created on: 27-Apr-2020
 *      Author: nitin
 */
#include<iostream>
using namespace std;

class Base{
public:
	Base(){
		cout<<"Base class"<<endl;
	}
};
class Dev1:virtual public Base{
public:
	Dev1(){
		cout<<"Derive1 class"<<endl;
	}
};
class Dev2:virtual public Base{
public:
	Dev2(){
		cout<<"Derv2 class"<<endl;
	}
};
class Dev3:public Dev1,public Dev2{
public:
	Dev3(){
		cout<<"Derv3 class"<<endl;
	}
};

int main(void)
{
	Dev3 d;
	return 1;
}




