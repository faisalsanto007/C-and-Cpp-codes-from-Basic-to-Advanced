#include<stdio.h>
int main()

{
    FILE * fPointer;// when we want to read a file we have to type 'r', for write 'w', for adding info 'a'....
    fPointer = fopen("beef.txt", "w");

    fprintf(fPointer, "i love biriani");

    fclose(fPointer);// whenever we open a file , we need to close that file...this is not mandatory but it is a good habit...

//when you run your prgrm more than once, it overwrites the old files, means it always creatig something new

    return 0;
}
