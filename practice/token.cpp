#include<stdio.h>
#include<string.h>
int main() 
{ 
    char str[] = "Geeks for Geeks"; 
    char ch='A';
    char* token; 
    char* rest = str; 
  
    while ((token = strtok_r(rest, " ", &rest))) 
        printf("%s\n", token); 
        
    printf("ascii value of %c is %d",ch,ch);
  
    return (0); 
} 
