#include <stdio.h>

int main() {
	 int num ;
 	int i ;
	int n = 0 ;
 	printf ( " Enter number : ") ;
 	scanf (" %d", &num ) ;
 	while ( i >= 1 )
 
{
	 i  = num ;
	 
	 while ( i >= 1 )
{
	if( n > 1 ) 
            {continue; }
	
	 if ( num%n == 0 )
  
 	 n++  ;
 {
   }
            i-- ;
        }
        if ( n <= 1 )
        {
            printf( "%d ", num ) ;
        }
        n = 0 ;
        num-- ;
    }
}
