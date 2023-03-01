#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << "Valid" << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

int sumEvenDigits(const std::string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}

int sumOddDigits(const std::string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }
    return sum;
}
