#include <stdio.h>

struct person{
   int age;
   float weight;
};


int main()
{


  int v = 5;
  printf("\n");
  printf("\n");

  printf(" v: %d\n", v);
  printf(" address of v: %p\n", &v);  


  int* pc;
  
  pc = &v;
  printf(" using pointer %d \n", *pc);
  printf(" using pointer address %d \n \n", pc);

  int** c = &pc;

   printf(" using double pointer %d \n", **c);
  printf(" using  double pointer address %d \n \n", c);



   int  var[] = {10, 100, 200};
   int i, *ptr[3];
 
   for ( i = 0; i < 3; i++) 
   {
      ptr[i] = &var[i];
   }
   
   for ( i = 0; i < 3; i++) 
   {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   printf("\n");
   

struct person *personPtr, person1;
   personPtr = &person1;


   person1.age = 7;
   person1.weight=8.9;
  

   printf("Age: %d \n", personPtr->age);
   printf("weight: %f \n", personPtr->weight);

   printf("\n");
   


   void show(int x)
   {
    printf("%d \n",x);
   }

   void (*p) (int);
   p=&show;
   (p) (100);

   printf("\n");
   printf("\n");


  return 0;
}