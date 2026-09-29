#include <stdio.h>
#include <limits.h> //Needed for INT_MIN
int main() {
int i, largest, second_largest, size;
  //Taking the size from the user
printf("Enter the size of the array: ");
scanf("%d", &size);
  //Array must have at least 2 elements to find 2nd largest in that array
if(size < 2) {
  printf("The array size must be at least 2 to find the second largest in an array\n");
  return 0;
}
int arr[size];
  //Taking the array elements from the user
printf("Enter the elements into array: ");
for(i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
  //Set both the variables with the lowest possible number
largest = INT_MIN;
second_largest = INT_MIN;
  //Using loop to find the largest and second-largest numbers of the array
for(i = 0; i < size; i++) {
if(arr[i]>largest) { //If the current element is greater than the largest
  second_largest = largest; //The largest now becomes the second-largest
  largest = arr[i]; //And update the largest 
}
else if(arr[i]>second_largest && arr[i]!=largest) {//If current element is greater than second-largest and not equal to the largest
  second_largest = arr[i];
}
}
  //Displying the final result
if(second_largest == INT_MIN) {
  printf("The largest element of the array is %d\n", largest);
  printf("There is no distinct second largest element (all elements might be identical).\n");
} else {
  printf("The largest element of the array is %d\n", largest);
  printf("The second largest element of the array is %d\n", second_largest);
}
}
