/*
 * poly1.cpp
 *
 *  Created on: 09-May-2020
 *      Author: nitin
 */
#include<iostream>
using namespace std;
#include"poly1.h"
int main(void)
{
	Animal *a;
	Animal an;
	a=&an;
	a->display();

	Dog d;
	a=&d;
	a->display();
	Cat c;
	a=&c;
	a->display();
	d.display();
	c.display();
	//d.display();

	return 1;
}



