#include<iostream>
using namespace std;

//class A
//{
//public:
//	void PrintA() // void PrintA(this)
//	{
//		cout << this->_a << endl;
//	}
//	void Show() // void Show(A* this)
//	{
//		cout << this << endl;
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = NULL;
//	p->PrintA(); //p->PrintA(p);
//}
//
////int main()
////{
////	A* p = NULL;
////	p->Show(); // p->Show(p);
////}

class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}

	~A()
	{
		cout << "~A()" << endl;
	}
};


//class Date
//{
//public:
//	/*Date()
//	{
//		cout << "Date()" << endl;
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date(int year, int month, int day)
//	{
//		cout << "Date()" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	//Date(int year = 1900, int month = 1, int day = 1)
//	//{
//	//	cout << "Date()" << endl;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;  // 基本类型->不做处理
//
//	A _a;	// 自定义类型->初始化==调用A的构造函数
//};
//
//// 内置类型/基本类型
//// 自定义类型
//
//int main()
//{
//	Date d1;
//	Date d2;
//	/*Date d3(2019, 5, 12);
//	Date d4(2020);*/
//	//Date d5();
//	d1.Print();
//	d2.Print();
//	//d3.Print();
//	//d4.Print();
//	//d5.Print();
//}

//class Time
//{
//public:
//	Time(int hour)
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//	//Date(int year = 1900, int month = 1, int day = 1)
//	//{
//	//	cout << "Date()" << endl;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;  // 基本类型->不做处理
//
//	Time _t;
//};
//
//int main()
//{
//	Date d1;
//}

//class Date
//{
//public:
//	//Date(int year = 1900, int month = 1, int day = 1)
//	//{
//	//	cout << "Date()" << endl;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;  // 基本类型->不做处理
//
//	A _a;
//};
//
class SeqList
{
public:
	SeqList(size_t N = 10)
	{
		_array = (int*)malloc(N*sizeof(int));
		_capacity = N;
		_size = 0;
	}

	~SeqList()
	{
		free(_array);
		_array = nullptr;
		_size = _capacity = 0;
	}

private:
	int* _array;
	size_t _size;
	size_t _capacity;
};
//
//int main()
//{
//	SeqList s1;
//	SeqList s2;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		cout << "Date()" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// Date copy(d1);
//	//Date(const Date& d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;  // 基本类型->不做处理
//};
//
//int main()
//{
//	Date d1(2019, 5, 13);
//	Date copy(d1); // 拷贝构造函数
//	copy.Print();
//	d1.Print();
//
//	SeqList s1(10);
//	SeqList	s2(s1);
//}


class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		cout << "Date()" << endl;
		_year = year;
		_month = month;
		_day = day;
	}

	// d1.operator==(&d1, d2);
	bool operator==(const Date& d) // bool operator==(Date* this, const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

	bool operator<(const Date& d)
	{
		if (_year < d._year)
		{
			return true;
		}
		else if (_year == d._year)
		{
			if (_month < d._month)
			{
				return true;
			}
			else if (_month == d._month)
			{
				if (_day < d._day)
				{
					return true;
				}
			}
		}

		return false;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	~Date()
	{
		cout << "~Date()" << endl;
	}

private:
	int _year;
	int _month;
	int _day;  // 基本类型->不做处理
};

int main()
{
	Date d1(2019, 5, 12);
	Date d2(2019, 5, 13);

	d1 == d2;
	d1.operator==(d2);
	//d1.operator==(&d1, d2);
	
}

//bool DateIsEquel(const Date& d1, const Date& d2)
//{
//	//return true;
//}
//
//bool DateIsLess(const Date& d1, const Date& d2)
//{
//	//return true;
//}

//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//bool operator<(const Date& d1, const Date& d2)
//{
//	//
//
//	return true;
//}


////int main()
//{
//	Date d1(2019, 5, 12);
//	Date d2(2019, 5, 13);
//
//	d1 == d2; // operator==(d1, d2);
//	//operator==(d1, d2);
//	//d1 < d2;
//	//DateIsLess(d1, d2);
//	// ...
//}