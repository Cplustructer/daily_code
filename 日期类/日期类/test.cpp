#include<iostream>
#include "Date1.h"

int main()
{
	Date d1(2019, 4, 30);
	d1.Print();
	Date d2(2018, 5, 13);
    d2.Print();
	Date d3(2020, 1, 31);
	d3.Print();
	Date d4(2019, 6, 6);
	d4.Print();
	cout<<d1.operator>(d2)<<endl;
	cout << d1.operator==(d2) << endl;
	cout << d1.operator!=(d2) << endl;
	cout << d1.operator<(d2) << endl;
	cout << d1.operator>=(d2) << endl;
	cout << d1.operator<=(d2) << endl;
	
	d1.operator+=(30);   //d1变了
	d1.Print();			//2019-5-30
	
	d2.operator++();     //d2变了
	d2.Print();			//2019-5-14
	
	Date d = d2.operator++(5);   //d2m没变
	d.Print();			//2019-5-14 
	
	d1.operator-=(30);   //d1变了
	d1.Print();			//2019-4-30
	
	d1.operator--();     //d1变了
	d1.Print();			//2019-4-29  
	
	Date s = d1.operator--(5); //d1没变
	s.Print();			//2019-4-29

	d3.operator-=(100);   //d3变了
	d3.Print();          //2019-10-23

	Date q = d4.operator+(100);  //d4没变
	q.Print();             //2019-9-14

	int n = d3.operator-(d4);   //此时d3：2019-10-23   d4：2019-6-6
	cout << "两天相距:" << n << "天" << endl;
	return 0;
}