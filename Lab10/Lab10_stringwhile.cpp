#include <stdio.h>
#include <string.h>

int main(){
    char name[ 100 ] ;
   
    int count, i ;
    printf( "Input : " ) ;
    gets( name ) ;
    count = strlen( name ) ;
    i = count ;
    while ( i >= 0 ) {
        printf( "%c", name[i] ) ;
        i-- ;
    } 
    return 0 ;
} 
