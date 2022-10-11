#include<stdio.h>

int main()
{	
	int Array[50],size,i,j,n;
	
	printf("Input Array Size : ");
	scanf("%d",&size);

	while (  i < size  )
	{
		printf( "Array[%d] : ", i ) ;
    	scanf( "%d",&Array[i]) ; 
  		  i++ ;
    } //end while

	i = 0 ;
    while (  i < n )
{
            n = 0 ;
            j = 0 ;
            while( j < n ){
            if( i != j ){
                if("array[i] == array[j]" )
				{
                	
                    n = 1 ;
                } // end if
            } // end if
             j++ ;
        } // end while
        if( n == 0 ){
            printf( "%d ",Array[i] ) ;
        } // end if
        i++ ;
    } // end while
    return 0 ;
} // end function main() 
