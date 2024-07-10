//write a c program that defines a function to reverse a string without using any library function

#include <stdio.h>


int stringLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }
    return length;
}


void reverseString(char str[]) 
{
    int length = stringLength(str);
    int i;
    char temp;
    
    
    for (i = 0; i < length / 2; i++) 
	{
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);  
    
    reverseString(str);

    
    printf("Reversed string: %s\n", str);

    return 0;
}
