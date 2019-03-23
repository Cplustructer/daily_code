#include<iostream>
#include<stdlib.h>
using namespace std;

class stu
{
    public:
		char* Name = new char[10];
		int Score;
		stu(char* name,char* num,int score);
		void print();
    private:
		char* Num = new char[10];
};

stu::stu(char* name,char* num,int score)
{
	Name = name;
	Num = num;
	Score = score;
}

void stu::print()
{
	cout << "name:" << Name << " " << "num:" << Num << " ";
	cout << "score:" << Score << endl;
}

int main()
{
	stu s1("张三","201901",70);
	s1.print();
	stu s2("李四","201902",78);
	s2.print();
	stu s3("王五","201903",88);
	s3.print();
	cout << "sum:" << s1.Score+s2.Score+s3.Score << endl;
	system("pause");
	return 0;
}