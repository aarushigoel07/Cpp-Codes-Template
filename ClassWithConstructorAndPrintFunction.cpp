/*A CPP program with a class that includes a constructor. The class should have two integer members and one float member. Initialize these members in the constructor. Then, create another function inside the same class to print the values. Finally, create an object of this class and use the function to print the values.*/

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
		}
		void printing()
		{
			cout << "i = " << i << endl;
			cout << "j = " << j << endl;
			cout << "f = " << f << endl;
		}
};

int main()
{
	class A1 a1;
	a1.printing();
	return(0);
}
