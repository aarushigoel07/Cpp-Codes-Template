/*A CPP program that has a class which is equipped with a constructor. The class consists two integer and one float numbers. Initialise all these numbers and print the values inside the constructor itself. Create an object and note down the observations.*/

#include<iostream>
using namespace std;

class A1
{
	private:
		int i,j;
		float f;
	public:
		A1()
		{
			i=10;
			j=20;
			f=75.7575;

			cout << "i = " << i << endl;
			cout << "j = " << j << endl;
			cout << "f = " << f << endl;
		}
};

int main()
{
	class A1 a1;
	return(0);
}
