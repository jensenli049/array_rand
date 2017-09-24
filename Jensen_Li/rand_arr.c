#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[10];
  int arr2[10];
  int i;
  int * p = arr;
  int * q = arr2;
  
  for(i = 0; i < 10; i++)
    arr[i] = rand();
  arr[9] = 0;
  int counter = 9; //since we're starting at the first index
  for(i = 0; i < 10; i++,counter--)
    *(q+i) = *(p+counter);

  //printf("&p:%p \n", &p);
  //printf("&q:%p \n", &q);
  
  printf("The original array:\n");
  for(i = 0; i < 10; i++) 
    printf("arr[%d]: %d\n",i,arr[i]);
  printf("The second array:\n");
  for(i = 0; i < 10; i++)
    printf("arr[%d]: %d\n",i,arr2[i]);
}
  
