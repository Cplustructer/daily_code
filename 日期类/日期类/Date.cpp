#include "Date.h"

//bool Date::operator>(const Date& d) const
//bool Date::operator>=(const Date& d) const
//bool Date::operator<(const Date& d) const
//bool Date::operator<=(const Date& d) const
//bool Date::operator==(const Date& d) const
//bool Date::operator!=(const Date& d) const

// ++d
Date& Date::operator++()	// 前置++
{
	*this += 1;
	return *this;
}

// d++
Date Date::operator++(int) // 后置++
{
	Date ret(*this);
	*this += 1;
	return ret;
}

//
//Date Date::operator--();		// 前置--
//Date Date::operator--(int);	// 后置--

Date Date::operator+(int day) const
{
	Date ret = *this;
	ret += day;
	return ret;
}

Date& Date::operator+=(int day)
{
	//if (day < 0)
	//	return *this -= -day;

	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}

	return *this;
}

//Date Date::operator-(int day) const;
//Date Date::operator-=(int day);
//
//int Date::operator-(const Date&d);