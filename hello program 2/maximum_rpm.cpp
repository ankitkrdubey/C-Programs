#include <iostream>
int main() {
    int rpm = 5524;
    int maxRpm = rpm * 8;
    int years = 0;

    while (years < 10 && rpm <= maxRpm) {
        int sumOfSquares = 0;
        int tempRpm = rpm;

        // Calculate the sum of squares of the digits
        while (tempRpm != 0) {
            int digit = tempRpm % 10;
            sumOfSquares += digit * digit;
            tempRpm /= 10;
        }

        // Multiply by 323 and perform cyclic right shift
        rpm = sumOfSquares * 323;
        rpm = (rpm % 100) * 100 + (rpm / 100);

        // Calculate the new maximum RPM based on the original RPM
        maxRpm = rpm * 8;

        years++;
    }

    if (years >= 10)
        std::cout << "Hard disk will last for more than 10 years." << std::endl;
    else
        std::cout << "Hard disk will not last for more than 10 years." << std::endl;

    return 0;
}
