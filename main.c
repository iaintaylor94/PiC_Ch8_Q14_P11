// Program to calculate the sum of the elements of an array using global variables

#include <stdio.h>
#include <stdlib.h>

// Declare global variables
int gNumElements;
int gSumArray;
int *gArrayPtr;

// Declare Functions
void arraySum ();

int main(void) {
  // Get input from terminal
  printf ("Enter the number of elements: ");
  scanf ("%d", &gNumElements);

  // Create array
  gArrayPtr = malloc (gNumElements * sizeof (int));
  
  printf ("Enter the elements of the array: ");
  for (int i = 0; i < gNumElements; i++)
    scanf ("%d", &gArrayPtr[i]);

  // Calculate sum of array
  arraySum ();

  // Print result
  printf ("The sum of the array is: %d\n", gSumArray);
  
  return 0;
}

// Define Functions
void arraySum () {
  
  gSumArray = 0;
  for (int i = 0; i < gNumElements; i++) {
    gSumArray += *gArrayPtr + i;
  }
}