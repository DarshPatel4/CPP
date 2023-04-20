#include <stdio.h>

// Define a structure called "rectangle"
struct rectangle {
    int height, width;
} var; // Declare a variable "var" of type "struct rectangle"

// Function to get values for height and width of a rectangle
void get_values(struct rectangle var) {
    int ans;
    printf("Enter height: ");
    scanf("%d", &var.height);
    printf("Enter width: ");
    scanf("%d", &var.width);
    area0(var); // Call the function area0() to calculate area and print it
    ans = area1(var); // Call the function area1() to calculate area and store it in ans
    printf("The area is: %d\n", ans); // Print the calculated area
}

// Function to calculate area and print it
int area0(struct rectangle var) {
    printf("The area is: %d\n", (var.height * var.width));
}

// Function to calculate area and return it
int area1(struct rectangle var) {
    return (var.height * var.width);
}

int main() {
    struct rectangle var; // Declare a variable "var" of type "struct rectangle"
    get_values(var); // Call the function get_values() to get input and calculate area
    printf("This program is performed by 22CS051_DARSH");
    return 0;
}
