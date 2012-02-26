/*****************************************************************************

        SORT_bubble_sort.c
        
    Implements the bubble sort algorithm    

@author - Michael Davidson
    
*****************************************************************************/

#include "GLOBAL_pub_utl.h"
#include "SORT_bubble_sort.h"

#define _val1_greater_val2( val1, val2 ) ( (val1 > val2)? TRUE : FALSE )


static void sort_ascending
    (
    int *list,
    int len
    );
    

static void sort_descending
    (
    int *list,
    int len
    );
    
/*****************************************************************************

    SORT_bubble_sort - Performs the bubble sort routine
    
*****************************************************************************/
void SORT_bubble_sort
    (
    int                *list,       /* list to sort                         */
    int                 length,     /* length of array                      */
    bubble_sort_opt_t8  option      /* bubblesort option                    */
    )
{   

switch( option )
    {
    case BUBBLE_SORT_ASCEND:
        sort_ascending( list, length );
        break;
    
    default:
        sort_descending( list, length );
        break;
    }

}

/*****************************************************************************

    sort_ascending - Performs the bubble sort routine in the ascending order
    
*****************************************************************************/
static void sort_ascending
    (
    int *list,
    int len
    )
{
int         i,j;                    /* loop counters                        */
int         swap_val;               /* temp swap value                      */

for( i = 0; i< len-1 ; i++ )
    {
    for( j = i+1 ; j < len; j++ )
        {
        if( _val1_greater_val2( list[i],list[j] ) )
            {
            swap_val  = list[i];
            list[i]   = list[j];
            list[j]   = swap_val;
            }
        }
    }
}    


/*****************************************************************************

    sort_descending - Performs the bubble sort routine in the descending order
    
*****************************************************************************/
static void sort_descending
    (
    int *list,
    int len
    )
{ 
int         i,j;                    /* loop counters                        */
int         swap_val;               /* temp swap value                      */

for( i = 0; i< len-1 ; i++ )
    {
    for( j = i+1 ; j < len; j++ )
        {
        if( !_val1_greater_val2( list[i],list[j] ) )
            {
            swap_val = list[i];
            list[i]   = list[j];
            list[j]   = swap_val;
            }
        }
    }
}