#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
* Peak Detection Function Using the Straight Forward Method for 1D array
* Parameters - Integer array storing the values, Length of the array
*/
int PeakDetect(int arr[], int n){
  // Initially set the peak as the first element of the array
  int peak = arr[0];
  // Iterate through the array. If the array element is greater than the peak value assign peak as the array element
  for(int i = 0; i < n; i++){
    if(arr[i] >= peak){
      peak = arr[i];
    }
  }
  return peak;
}

int main(void){
  // Uses system time to seed a proper random number
  srand(time(NULL));
  // Getting the integer size using rand()
  int n = 0;
  while(n < 10){
    n = rand()%20;
  }
  printf("Number of Array Elements: %d \n", n);
  printf("\n");
  // Pointer to the array
  int *arr;
  // Allocating memory and initializing to 0
  arr = (int*)calloc(n,sizeof(int));
  int i = 0;
  while (i < n){
    arr[i] = rand()%100;
    i++;
  }
  // Getting the peak using the PeakDetect Function
  int peak = PeakDetect(arr,n);
  // Printing the random number array
  printf("Random Number Array: \n");
  for(int i = 0; i < n; i++){
    printf("%d \n",arr[i]);
  }
  printf("\n");
  printf("Peak Value: %d \n",peak);
  free(arr);
}
