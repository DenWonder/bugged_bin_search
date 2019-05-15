#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int array[10], n=1;	//fixed
size_t first, i, last;

srand( time( NULL ) );	//filling array with random numbers in non-decsending order
printf( "%s", "Initial array: " );	//fixed
for ( i=0; i<10; i++ )
	{
	n += rand() % 2; 
	array[i] = n;
	printf( "%d ", array[i] );
	}

n = rand() % n;		//picking random number to find. No guarantee it will exist in array
printf( "\nSearching for %d\n", n );
first = 0;	//fixed
last = 9;	//fixed
i=( first + last ) / 2;
while ( (array[i]!=n) && (first<last))	//searching algorithm
	{
	printf( "Left border %lu, checked %lu (value %d), right border %lu\n", first, i, array[i], last );
	if ( array[i] < n )
		{
		first = i;
		}
		else
		{
		last = i;
		}
	i=( first + last ) / 2;		//fixed
	}

if (array[i] == n)	//result output
	{
	printf( "Found on %lu place\n", i+1 );	//fixed
	}
	else
	{
	printf( "%s", "Number not found" );
	}

return 0;
}
