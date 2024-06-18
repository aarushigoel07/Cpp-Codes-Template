/*A CPP program, where you have 2 data items (int, float) and use public access specifier for data. Now under same public specifier, write a method f1() that initialises the variables and prints the same. In main(), create the object and do direct initialisation of data again and also invoke the method. Note down the observations.*/

#include<cstdio>

class A1
{
	public: int i;
		float j;
	
		void f1()
		{
			i=10;
			j=20.125;
			printf("from f1() : %d    %f \n",i,j);
		}
};

int main()
{
	class A1 a1;
	a1.i=5;
	a1.j=15;
	a1.f1();
	printf("from main : %d    %f\n",a1.i,a1.j);
	return(0);
}

/*works fine*/ 
