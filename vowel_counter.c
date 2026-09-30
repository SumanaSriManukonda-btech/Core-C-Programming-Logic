#include <stdio.h>
int main() {
int i, count=0;
char str[1000];
  //taking input from user
printf("Enter a String (word/sentence): ");
  //to read and store the input that is given by the user..we can also use fgets like this: fgets(str, sizeof(str), stdin) to read(including whitespaces) till the end of a string
  //by using [^\n], we can able to read the whole string given by the user including whitespaces
scanf("%[^\n]", str);
  //loop to traverse the string
for(i=0; str[i]!='\0'; i++) {
  //condition to check whether the current element/character is vowel or not
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
count++; //increment the count if the element/character is a vowel
}
}
  //printing the final result
printf("The total number of vowels that are present in the given string are: %d\n", count);
return 0;
}
