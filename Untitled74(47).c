#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    //heap is like a extra memory
    int * points;

    points = (int *) malloc(5 * sizeof(int)); //malloc means get memory from HEAP.......size of means how much space will that integer take....
    // 2nd line means how to get extra memory
    free(points);
    // 3rd line means how to give extra memory back

    return 0;
}
