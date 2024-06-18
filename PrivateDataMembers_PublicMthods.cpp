/*A CPP program, where you have 3 data items (int, float, char) and use private access specifier for data. Then use public access specifier and define 2 methods f1() and f2(). f1() initialised int,float vals and adds them and prints the result. f2() initialises the character value and prints the same. Now create object and invoke f1() and f2(). Note down the observations.*/

#include<cstdio>

class A1
{
	private:
		int i;
		float j;
		char c;
	public:
		void f1()
		{
			i=10;
			j=20.125;
			printf("%f \n",(i+j));
		}

		void f2()
		{
			c='S';
			printf("%c\n",c);
		}
};

int main()
{
	class A1 a1;
	a1.f1();
	a1.f2();
	return(0);
}

/*works fine*/ 
