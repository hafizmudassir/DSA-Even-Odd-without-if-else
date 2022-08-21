#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number :\n";
	cin>>num;
	int mod=num%2;
	char array[2]={'E','O'};
	cout<<"Number is :"<<array[mod];
}
