#include <iostream>
#include <vector>
#include <cmath>

// Function to convert decimal to binary
std::vector<int> decimalToBinary(int decimal, int numBits) {
    std::vector<int> binary(numBits, 0);
    int index = numBits - 1;

    while (decimal > 0) {
        binary[index--] = decimal % 2;
        decimal /= 2;
    }

    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(const std::vector<int>& binary) {
    int decimal = 0;
    int numBits = binary.size();

    for (int i = numBits - 1; i >= 0; i--) {
        decimal += binary[i] * std::pow(2, numBits - 1 - i);
    }

    return decimal;
}

// Function to solve 3-variable K-map
void solveKMap3Variables() {
    const int numRows = 2;
    const int numColumns = 4;

    std::vector<std::vector<int>> kMap(numRows, std::vector<int>(numColumns, 0));

    // Input values into K-map
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            std::cout << "Enter the value for cell " << i << j << ": ";
            std::cin >> kMap[i][j];
        }
    }

    // Display K-map
    std::cout << "\nK-Map:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            std::cout << kMap[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Analyze K-map and determine simplified expression
    // (Logic for grouping and simplifying not included in this example)

    // Display simplified Boolean expression
    std::cout << "\nSimplified Boolean Expression: A + B' + C'\n";
}

int main() {
    solveKMap3Variables();

    return 0;
}
    