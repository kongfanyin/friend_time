#define _CRT_SECURE_NO_WARNINGS 1
#include"time00.h"




Time::Time()//无参构造
{
	hours = minute = 0;
}
Time::Time(int h, int m)
{
	hours = h;
	minute = m;
}
void Time::AddH(int h)
{
	hours += h;
}
void Time::AddM(int m)
{
	minute += m;
	hours += minute / 60;
	minute %= 60;
}
void Time::reset(int h, int m)
{
	hours = h;
	minute = m;
}
Time Time::operator+(const Time &tt)const
{
	Time sum;
	sum.minute = minute + tt.minute;
	sum.hours = hours + tt.hours+tt.minute/60;
	sum.minute %= 60;
	return sum;
}
Time Time::operator-(const Time &tt)const
{
	Time diff;
	diff.minute = hours * 60 + minute - tt.hours * 60 - tt.minute;
	diff.hours = diff.minute / 60;
	diff.minute %= 60;
	return diff;
}
Time Time::operator*(double mult)const
{
	Time result;



}
Time::~Time()
{


}

