// Program to calculate the sum of the elements of an array

#include <stdio.h>

// Declare Functions
int arraySum (int, int[]);

int main(void) {
  // Get input from terminal
  int numElements;
  printf ("Enter the number of elements: ");
  scanf ("%d", &numElements);
  int inputArray[numElements];
  for (int i = 0; i < numElements; i++)
    scanf ("%d", &inputArray[i]);

  // Calculate sum of array
  int sumArray = arraySum (numElements, &inputArray[0]);

  // Print result
  printf ("The sum of the array is: %d\n", sumArray);
  
  return 0;
}

// Define Functions
int arraySum (int numElements, int array[]) {
  
  int sum = 0;
  for (int i = 0; i < numElements; i++) {
    sum += array[i];
  }

  return (sum);
}