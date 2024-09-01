#include <iostream>
using namespace std;

// Function to convert CGPA to Percentage
double convertCGPAToPercentage(double cgpa) {
    return cgpa * 9.5; // Standard conversion formula
}

int main() {
    double cgpa;
    
    // Input: User enters their CGPA
    cout << "Enter your CGPA: ";
    cin >> cgpa;

    // Validating CGPA range
    if (cgpa < 0 || cgpa > 10) {
        cout << "Invalid CGPA! Please enter a value between 0 and 10." << endl;
        return 1; // Exit with an error code
    }
    
    // Calculate percentage
    double percentage = convertCGPAToPercentage(cgpa);

    // Output: Display the converted percentage
    cout << "Your percentage is: " << percentage << "%" << endl;

    return 0;
}
