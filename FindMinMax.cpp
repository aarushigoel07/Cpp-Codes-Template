/*A CPP program that takes 3 integer numbers and prints which is the smallest number and the largest number.*/

#include<iostream>
using namespace std;

int main()
{
	int a,b,c,small,big;

	cout << "Enter 3 numbers :- " << endl;
	cin >> a >> b >> c;

	if(a>b && a>c)
	{
		big=a;
	}
	else if(b>c)
		{
			big=b;
		}
	     else
		{
			big=c;
		}
	if(a<b && a<c)
	{
		small=a;
	}
	else if(b<c)
		{
			small=b;
		}
	     else
		{
			small=c;
		}

	cout << "Smallest number is :- " << small << endl;
	cout << "Largest number is :- " << big << endl;
	return(0);
}
