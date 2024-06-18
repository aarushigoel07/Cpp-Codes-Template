/*1. A CPP program, where you have 2 data items (both int) and one method in a class. Do not give any access specifier for both data and method. Now write main() and create an object and try to initialise the data directly and also try to invoke the method directly. Analyse this and note down findings.*/

#include<cstdio>

class A1
{
	int i,j;
	
	void f1()
	{
		i=10;
		j=20;
		printf("%d %d \n",i,j);
	}
};

int main()
{
	class A1 a1;
	a1.i=5;
	a1.j=15;
	a1.f1();
	return(0);
}

/*shows error that i,j and f1() are declared private*/ 
