/*****************************************************************************

        SORT_bubble_sort.h
        
    Header for the bubble sort algorithm    

@author - Michael Davidson
    
*****************************************************************************/

typedef unsigned char bubble_sort_opt_t8;
enum
    {
    BUBBLE_SORT_ASCEND,
    BUBBLE_SORT_DESCEND,
    
    BUBBLE_SORT_OPTION_CNT
    };

/***************************************************************************** 
SORT_bubble_sort.c functions
*****************************************************************************/
void SORT_bubble_sort
    (
    int                *list,       /* list to sort                         */
    int                 length,     /* length of array                      */
    bubble_sort_opt_t8  option      /* bubblesort option                    */
    );