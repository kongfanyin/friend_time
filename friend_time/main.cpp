#define _CRT_SECURE_NO_WARNINGS 1
#include"time00.h"

#include<string>
#include<fstream>
#include<iostream>

int main(char argc, char** argv)
{
	using std::cout;
	using std::endl;
	Time aida(3,55);
	Time tosca(2,48);
	Time temp;
	cout << "aida and tosca:\n";
	cout << aida << ";" << tosca << endl;
	temp = aida + tosca;
	cout << "aida+tosca:" << temp << endl;
	temp = aida * 1.17;
	cout << "alida*1.17 :" << temp << endl;
	cout << "10.0*tosca:" << 10.0*tosca << endl;
	return 0;
}