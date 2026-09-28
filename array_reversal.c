#include <stdio.h>
int main() {
  int i, temp, size;
  //Getting the size of the array from the user.
printf("Enter the number of elements that you want in the array: ");
scanf("%d", &size);
int arr[size];
  //Getting the elements of the array from the user.
printf("Enter the elements into the array: ");
for(i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
  //Logic to reverse the array.
  //We only loop through half of the array and swap the first element with the last, second element with second last element, and so on.. till the half of the array
for(i = 0; i < (size/2); i++) {
temp = arr[i];
arr[i] = arr[size-1-i]; //Swapping process of elements i.e., first elements with the last ones.
arr[size-1-i] = temp;
}
  //Printing the result i.e., the REVERSED array.
printf("The reversed array is: ");
for(i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
