#include "Date1.h"

bool Date::operator>(const Date& d) const
{
	if (_year > d._year){
		return true;
	}
	else if (_year == d._year){
		if (_month > d._month){
			return true;
		}
		else if (_month == d._month){
			if (_day > d._day){
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<(const Date& d) const
{
	if ((!(*this>d) && !(*this == d))){
		return true;
	}
	return false;
}

bool Date::operator!=(const Date& d) const
{
	if (!(*this == d)){
		return true;
	}
	return false;
}

bool Date::operator==(const Date& d) const
{
	if (_year == d._year
		&&_month == d._month&&_day == d._day){
		return true;
	}
	return false;
}

bool Date::operator>=(const Date& d) const
{
	if ((*this == d) || (*this > d)){
		return true;
	}
	return false;
}

bool Date::operator<=(const Date& d) const
{
	if ((*this == d) || (*this < d)){
		return true;
	}
	return false;
}

Date& Date::operator+=(int day)
{
	_day += day;
	while(_day>GetMonthDay(_year, _month)){
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13){
			_year++;
			_month = 1;
		}
	}
	return *this;
}

Date& Date::operator++() //前置++
{
	*this += 1;
	return *this;
}

Date Date::operator++(int) //后置++
{
	Date res(*this);
	*this += 1;
	return res;
}

Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0 ){
		_month--;
		if (_month == 0){
			_year--;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator--(int) // 后置--
{
	Date res(*this);
	*this-=1;
	return res;
}	

Date Date::operator--() // 前置--
{
	*this -= 1;
	return *this;
}

Date Date::operator+(int day) const
{
	Date res(*this);
	res += day;
	return res;
}
Date Date::operator-(int day) const
{
	Date res(*this);
	res -= day;
	return res;
}

int Date::operator-(const Date&d)
{
	if (*this < d){
		int cnt = 0;
		Date res(*this);
		while (1){
			res += 1;
			cnt++;
			if (res == d){
				return cnt;
			}
		}
	}
	else if(*this > d){
		int cnt = 0;
		Date ret(d);
		while (1){
			ret += 1;
			cnt++;
			if (ret == *this){
				return cnt;
			}
		}
	}
	return 0;
}