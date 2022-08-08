#include <stdio.h>

int main() {
    int n ;
    int i ;
    int j ;
    int x ;
    int y ;
    printf( "Input your line :" ) ;
    scanf( "%d", &n ) ;
    if( n % 2 == 0 ) {
        for ( i = 1 ; i <= n ; i++ ) {
            for ( j = n ; j > i ; j-- ) {
                printf( " " );
            }
            for (int x = 1 ; x < i ; x++ ) {
            printf( "*" );
            }
            for (int z = 1 ; z <= i ; z++ ) {
            printf( "*" );
            }
        printf( "\n" );
        }
    } else ( n % 2 == 1 ) {
        for ( i = 1 ; i <= num ; i++ ) {
            for ( j = 1 ; j < i ; j++ ) {
                printf( " " ); 
            }
            for (int x = num ; x > i ; x-- ) {
                printf( "*");
            }
            for (int z = num ; z >= i ; z-- ) {
                printf( "*" );
            }
        printf( "\n" );
        }
    } else {
        printf( "error" );
    }
    return 0 ;
}
