#include <stdio.h>
#include <stdio.h>
// By using loops method print arrays value
int main()
{
    int array_one[] = { 0, 1, 2, 3 ,4};
    int a=1,b=1,d=1;

     while ( a<=5 )
    {
    printf("By using --While --Elemnet of an array[%d] is %d\n", a, array_one[a]);
    a++;
    }

	for ( b = 1; b < 5; ++b )
	{
		printf ("By using ---for loop--- array values[%i] = %i\n", b, array_one[b]);
	}

	 do {
            printf ("By using ---do while--- array values[%i] = %i\n", d, array_one[d]);
            d=d+1;
	 }
     while( d <= 5 );


	return (0);
}

