#include <iostream>

class PrimeChecker {
public:
    PrimeChecker(int num) : number(num) {}

    bool isPrime() {
        if (number <= 1)
            return false;
        if (number <= 3)
            return true;
        if (number % 2 == 0 || number % 3 == 0)
            return false;
        
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0)
                return false;
        }
        
        return true;
    }

private:
    int number;
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    PrimeChecker primeChecker(num);

    if (primeChecker.isPrime()) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
