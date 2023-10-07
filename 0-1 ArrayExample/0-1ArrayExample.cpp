#include <iostream>

using std::cout;
using std::endl;

// Function: AddDifferent
// Add in destination[i] the elements of source that are different from destination.
// The number of elements in both arrays is supposed to be equal.
// Return in added the number of elements added.
//--- BEGIN GAP ---
// Define the function header for AddDiffernt taking into account the parameters used
// to call it in the main function and that the parameter added has to be modified
// outside of the function

//--- END GAP ---
int AddDifferent(int source[], int destination[], unsigned int arrayLength) {

  int added = 0;
  for (int i = 0; i < arrayLength; i++) {
    if (source[i] != destination[i]) {
      destination[i] = source[i] + destination[i];
      added++;
    }
  }
  return added;
}

// Prints in one line the name and the elements of the array
void PrintArray(char name[], int array[], unsigned int length) {

  cout << name << ": ";

  for (int i = 0; i < length; i++) {
      cout << array[i] << " ";
    //--- BEGIN GAP ---
    // Print element i in the array followed by a blank space

    //--- END GAP ---
  }
  cout << endl;
}

int main() {
  const unsigned int arrayLength = 5;
  int array1[arrayLength] = {34, 12, 56, 17, 99};
  int array2[arrayLength] = {-8, 9, 56, 38, 99};
 
  //--- BEGIN GAP ---
  // Define two variables called "identArray1" and "identArray2" for the identifiers
  // of the arrays. They must be character arrays and must be initialized to "array1"
  // and "array2" respectively

  //--- END GAP ---
  char identArray1[] = "array1";
  char identArray2[] = "array2";

  PrintArray(identArray1, array1, arrayLength);
  PrintArray(identArray2, array2, arrayLength);

  int added=AddDifferent(array1, array2, arrayLength);
  cout << "After adding different elements:" << endl;
  PrintArray(identArray2, array2, arrayLength);
  cout << "Elements added " << added << endl;

  return 0;
}