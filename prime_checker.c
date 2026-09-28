#include <stdio.h>
#include <math.h>

//Function to check if the given positive integer is prime.
int isPrime(int n) {
  //Numbers that are less than or equal to one are not prime.
  if(n <= 1) {
return 0;
  }
  //Loop runs only upto the square of the given number.
  //If a number has a factor, it must exist below or equal to its square root.
for(int i=2; i<=sqrt(n); i++) {
  //If the number is divisible by i, then it is not a prime number.
if(n % i == 0) {
return 0;
}
}
  //If no factors were found, then the number is said to be prime number.
return 1;
}
int main() {
  int num;
  //taking input from the user.
printf("Enter a positive integer: ");
scanf("%d", &num);
if(isPrime(num)) {
printf("%d is a Prime Number.\n", num);
} else {
printf("%d is not a Prime Number.\n", num);
}
return 0;
}
}
