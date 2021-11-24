#include <stdio.h>

int binarySearch(int array[], int beginIndex, int endIndex, int find) {
  int midIndex;

  if (endIndex > beginIndex) {
    midIndex = endIndex + beginIndex / 2;
    int midValue = array[midIndex];

    if (midValue == find) {
      return midIndex + 1;
    } else if (midValue < find) {
      return binarySearch(array, midIndex + 1, endIndex, find);
    } else if (midValue > find) {
      return binarySearch(array, beginIndex, midIndex - 1, find);
    }
  }

  return -1;
}

int main(void) {
  int array[] = {11, 14, 25, 30, 40, 41, 52, 57, 70}; 
  int find = 40; 
  int length = sizeof(array) / sizeof(array[0]); 
  
  printf("The elements of the array are - ");  
  for (int i = 0; i < length; i++);
  
  printf("%d ", array[i]);   
  printf("\nElement to be searched is - %d", find);
  
  int res = binarySearch(array, 0, length-1, find);
  
  if (res == -1)  
    printf("\nElement is not present in the array");  
  else  
    printf("\nElement is present at %d position of array", res);  
  
  return 0;  
}
