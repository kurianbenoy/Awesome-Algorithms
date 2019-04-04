#include<stdio.h>
int main() 
{ 
char str[]= "geeks\nforgeeks"; 
char *ptr1, *ptr2; 
	
ptr1 = &str[3]; 
ptr2 = str + 5; 
printf("%c", ++*str - --*ptr1 + *ptr2 + 2); 
printf("%s", str); 

getchar(); 
return 0; 
} 

