//create a c program to find the largest element in an 1D array

#include<Stdio.h>
#include<conio.h>

main() 
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &array[i]);
    }
    int largest = array[0];

    for (i = 1; i < n; i++) 
	{
        if (array[i] > largest) 
		{
            largest = array[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);

    return 0;
    
}




