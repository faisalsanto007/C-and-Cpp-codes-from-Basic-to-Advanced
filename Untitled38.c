#include<stdio.h>
int main()

{
   float grade1;
   float grade2;
   float grade3;

   printf("enter your 3 test grades! \n");
   scanf(" %f", &grade1);
   scanf(" %f", &grade2);
   scanf(" %f", &grade3);

   float avg = (grade1 + grade2 + grade3) / 3;
   printf("average : %.2f \n", avg);

   if(avg >= 90){
    printf("grade : A.....you are the best!");
   }else if("avg >= 80"){
   printf("grade : B");
   }else if("avg >= 70"){
   printf("grade : C");
   }else if("avg = 60"){
   printf("grade : D");
   }else{
   printf("you are just a dump");
   }

return 0;
}
