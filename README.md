# Car Information Program

This C program allows you to create and manage information about cars. You can view details of different cars and repeatedly select which car details to view until you choose to exit.

## Program Overview

The program defines a structure for a car, fills an array of car objects with sample data, and lets the user select and view the details of each car. The user can continue to view different car details until they decide to exit.

## Features

- Defines a structure `Car` with fields for make, model, year, and price.
- Fills an array of 10 cars with predefined details using the `fillCar` function.
- Displays a list of cars for the user to choose from.
- Uses a switch statement to display the details of the selected car.
- Allows the user to continue viewing different car details until they choose to exit.

## Code With Description
### Include Necessary Libraries
```
#include <stdio.h>
#include <string.h>
```
- `#include <stdio.h>`: This library is included to enable input and output operations such as printf and scanf.
- `#include <string.h>`: This library is included to use string handling functions such as `strcpy`.
### Define the Car Structure
```
struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
};
```
A structure named Car is defined with four fields:
- `make`: a string (character array) to store the car manufacturer.
- `model`: a string to store the car model.
- `year`: an integer to store the manufacturing year of the car.
- `price`: a float to store the price of the car.
### Function to Fill Car Details
```
void fillCar(struct Car *car, const char *make, const char *model, int year, float price) {
    strcpy(car->make, make);
    strcpy(car->model, model);
    car->year = year;
    car->price = price;
}
```
- `fillCar`: A function that takes a pointer to a Car structure and other parameters to fill the details of a car.
- `strcpy`: This function copies the strings make and model into the respective fields of the Car structure.
### Function to Display Car Details
```
void displayCarDetails(struct Car car, int carNumber) {
    printf("Car %d: %s %s, Year: %d, Price: $%.2f\n", carNumber, car.make, car.model, car.year, car.price);
}
```
- `displayCarDetails`: A function that takes a Car structure and an integer carNumber to print the car details.
### Main Function
```
int main() {
    struct Car cars[10];

    // Fill the car structures
    fillCar(&cars[0], "Toyota", "Camry", 2020, 24000.50);
    fillCar(&cars[1], "Honda", "Civic", 2019, 22000.00);
    fillCar(&cars[2], "Ford", "Mustang", 2021, 30000.00);
    fillCar(&cars[3], "Chevrolet", "Malibu", 2018, 18000.75);
    fillCar(&cars[4], "Nissan", "Altima", 2022, 25000.00);
    fillCar(&cars[5], "BMW", "3 Series", 2020, 40000.00);
    fillCar(&cars[6], "Audi", "A4", 2021, 42000.50);
    fillCar(&cars[7], "Mercedes-Benz", "C-Class", 2019, 45000.00);
    fillCar(&cars[8], "Hyundai", "Elantra", 2020, 20000.00);
    fillCar(&cars[9], "Kia", "Optima", 2021, 23000.00);

    int choice;
    char continueChoice;

    do {
        // Display the list of cars
        printf("Select a car by entering the corresponding number:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d. %s %s\n", i + 1, cars[i].make, cars[i].model);
        }

        // Get the user's choice
        printf("Enter the number of the car you want to see details of: ");
        scanf("%d", &choice);

        // Display the details of the selected car using a switch statement
        switch (choice) {
            case 1:
                displayCarDetails(cars[0], 1);
                break;
            case 2:
                displayCarDetails(cars[1], 2);
                break;
            case 3:
                displayCarDetails(cars[2], 3);
                break;
            case 4:
                displayCarDetails(cars[3], 4);
                break;
            case 5:
                displayCarDetails(cars[4], 5);
                break;
            case 6:
                displayCarDetails(cars[5], 6);
                break;
            case 7:
                displayCarDetails(cars[6], 7);
                break;
            case 8:
                displayCarDetails(cars[7], 8);
                break;
            case 9:
                displayCarDetails(cars[8], 9);
                break;
            case 10:
                displayCarDetails(cars[9], 10);
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 10.\n");
                break;
        }

        // Ask the user if they want to see another car
        printf("Do you want to see details of another car? (y/n): ");
        scanf(" %c", &continueChoice);  // Notice the space before %c to consume any leftover newline character

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}
```
- The `main` function creates an array of 10 `Car` structures and fills them with details using the `fillCar` function.
- An integer variable `choice` is used to store the user's selection, and a character variable `continueChoice` is used to check if the user wants to continue.
- A `do-while` loop is used to repeatedly display the list of cars and prompt the user for a selection.
- The `switch` statement matches the user's input with the corresponding case and displays the details of the selected car using the `displayCarDetails` function.
- After displaying the car details, the program asks the user if they want to see details of another car.
- If the user enters 'y' or 'Y', the loop continues; otherwise, the program exits.

# Author
Rana Muhammad Zaham
