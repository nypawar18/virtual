/*
 * poly1.h
 *
 *  Created on: 09-May-2020
 *      Author: nitin
 */

#ifndef POLY1_H_
#define POLY1_H_

class Animal{
public:
	virtual void display(void){
		cout<<"Animal Class"<<endl;
	}
};

class Dog:public Animal{
public:

	void display(void){
		//Animal::display();
		cout<<"Dog Class"<<endl;
	}
};

class Cat:public Animal{
public:
	void display(void){
		//Animal::display();
		cout<<"Cat class"<<endl;
	}
};


#endif /* POLY1_H_ */
