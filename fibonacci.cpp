#include <iostream>
#include <string>
using namespace std;


int main()
{

	long double f[100]; 

	for ( int i =0; i < 100; i++ )
	{
		if ( i == 0 ) f[i] = 0;
		else if ( i == 1 ) f[i] = 1;
		else f[i] = f[i -1] + f[i -2];
	}

	for ( int i = 0; i < 100; i++)
		cout<< "Fib (" << i << ") = " << f[i] << "\n";

	return ( 0 );
}