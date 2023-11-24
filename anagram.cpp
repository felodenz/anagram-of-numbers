#include<iostream>
#include<conio.h>
using namespace std;
int jam,a,b;
int jamfunc(int a,int b)
{
	jam=a+b;
	return jam;
}
int main(){
	int c=jamfunc(3,4);
	cout<<c;
}
