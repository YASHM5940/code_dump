#include <stdio.h>

// Define a struct to represent a rational number
typedef struct {
    int numerator;
    int denominator;
} Rational;

// Function to calculate the greatest common divisor (GCD)
//using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to reduce a rational number to its lowest terms
Rational reduce(Rational r) {
    int common_divisor = gcd(r.numerator, r.denominator);
    r.numerator /= common_divisor;
    r.denominator /= common_divisor;
    return r;
}

// Function to print a rational number
void printRational(Rational r) {
    printf("%d/%d\n", r.numerator, r.denominator);
}

int main() {
    // Create a rational number
    Rational r = {90, 12};
    
    // Reduce the rational number to its lowest terms
    Rational reduced_r = reduce(r);
    
    // Print the reduced rational number
    printRational(reduced_r);
    
    return 0;
}
