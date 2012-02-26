/******************************************************

        bubble_sort_driver.c
        
    Driver to test out the bubble sort algorithm    

@author - Michael Davidson
    
******************************************************/

#include <stdio.h>

#include "GLOBAL_pub_utl.h"
#include "SORT_bubble_sort.h"

void print_list
    (
    int *list,
    int len
    );
    
int main( int argc, char *argv[] )
    {
    int list1[] = { 5,9,7,4,1,2,5,8,6,3,5,7,4 };
    printf( "Pre-sort list :\n" );
    print_list( list1, len_of_array(list1) );
    
    printf( "After ascending sort :\n" );
    SORT_bubble_sort( list1, len_of_array( list1 ), BUBBLE_SORT_ASCEND );
    print_list( list1, len_of_array(list1) );
    
    printf( "After descending sort :\n" );
    SORT_bubble_sort( list1, len_of_array( list1 ), BUBBLE_SORT_DESCEND );
    print_list( list1, len_of_array(list1) );
    
    return 0;
    }
    
void print_list
    (
    int *list,
    int len
    )
{
int i;

for( i=0; i<len; i++ )
    {
    printf( "%d\n", list[i] );
    }
    
}