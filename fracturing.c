//********************************************************
// fracturing.c
// Author: Reese Doornbos
// Class: COP 3223, Professor Parra
// Purpose: This program prints a specific message to the
// command line. 
// Input: None
//
// Output: (to the command line) A breif Message
// //********************************************************

#include <stdio.h>
#include <math.h>
;
#define PI 3.14159265358979323846;
;
// Function prototypes;
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(const char *prompt);

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Helper function to ask for user input
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    while (scanf("%lf", &value) != 1) {
        printf("Invalid input. Please enter a valid number: ");
        while (getchar() != 1); // Clear invalid input
    }
    return value;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter the coordinates for Point #1:\\n");
    x1 = askForUserInput("x1 = ");
    y1 = askForUserInput("y1 = ");
    
    printf("Enter the coordinates for Point #2:\\n");
    x2 = askForUserInput("x2 = ");
    y2 = askForUserInput("y2 = ");
    
    double distance = (x2 - x1, 2) + (y2 - y1, 2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\\n", x2, y2);
    printf("The distance between the two points is %.2lf\\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of the rectangle defined by the points
double calculatePerimeter() {
    double x1, y1, x2, y2;
    printf("Enter the coordinates for Point #1:\\n");
    x1 = askForUserInput("x1 = ");
    y1 = askForUserInput("y1 = ");
    
    printf("Enter the coordinates for Point #2:\\n");
    x2 = askForUserInput("x2 = ");
    y2 = askForUserInput("y2 = ");
    
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double perimeter = 2 * (width + height);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\\n", perimeter);
    
    return 3.0; // Difficulty rating (example rating)
}

// Function to calculate the area of the rectangle defined by the points
double calculateArea() {
    double x1, y1, x2, y2;
    printf("Enter the coordinates for Point #1:\\n");
    x1 = askForUserInput("x1 = ");
    y1 = askForUserInput("y1 = ");
    
    printf("Enter the coordinates for Point #2:\\n");
    x2 = askForUserInput("x2 = ");
    y2 = askForUserInput("y2 = ");
    
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area = width * height;
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\\n", area);
    
    return 2.0; // Difficulty rating (example rating)
}

// Function to calculate the width of the rectangle defined by the points
double calculateWidth() {
    double x1, x2;
    printf("Enter the coordinates for Point #1:\\n");
    x1 = askForUserInput("x1 = ");
    
    printf("Enter the coordinates for Point #2:\\n");
    x2 = askForUserInput("x2 = ");
    
    double width = fabs(x2 - x1);
    
    printf("Point #1 entered: x1 = %.2lf\\n", x1);
    printf("Point #2 entered: x2 = %.2lf\\n", x2);
    printf("The width of the city encompassed by your request is %.2lf\\n", width);
    
    return 1.0; // Difficulty rating (example rating)
}

// Function to calculate the height of the rectangle defined by the points
double calculateHeight() {
    double y1, y2;
    printf("Enter the coordinates for Point #1:\\n");
    y1 = askForUserInput("y1 = ");
    
    printf("Enter the coordinates for Point #2:\\n");
    y2 = askForUserInput("y2 = ");
    
    double height = fabs(y2 - y1);
    
    printf("Point #1 entered: y1 = %.2lf\\n", y1);
    printf("Point #2 entered: y2 = %.2lf\\n", y2);
    printf("The height of the city encompassed by your request is %.2lf\\n", height);
    
    return 1.0; // Difficulty rating (example rating)
}