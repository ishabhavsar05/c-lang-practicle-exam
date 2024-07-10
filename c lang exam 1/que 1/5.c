//develop a c program that defines a structure representing a car (with attributes like modal,year and price).
//list N number of cars' details using array of object

#include<stdio.h>
#include<conio.h>

	
// Define a structure to represent a car
struct Car {
    char model[50];
    int year;
    float price;
};

int main() 
{
	int i;
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car cars[n];

    
    for(i = 0; i < n; i++) 
	{
        printf("Enter details of car %d:\n\n", i+1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    
    printf("\nCar Details:\n");
    
    for (i = 0; i < n; i++) 
	{
        printf("Car %d:\n", i+1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n\n", cars[i].price);
    }

    return 0;
}


