#define _CRT_SECURE_NO_WARNINGS 1
#ifndef TIME00_
#define TIME00_

#include<iostream>
class Time
{
public:


	Time();
	Time(int h, int m = 0);
	void AddH(int h);
	void AddM(int m);
	void reset(int h = 0, int m = 0);
	Time operator+(const Time &tt)const;
	Time operator-(const Time &tt)const;
	Time operator*(double mult)const;
	friend Time operator*(double mult, const Time &tt)
	{
		return mult * tt;
	}
	friend std::ostream& operator<<(std::ostream &os, const Time &tt);
	~Time();

private:
	int hours;
	int minute;
};


#endif // !TIME00_
