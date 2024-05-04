#include <iostream>
#include <cstdlib>
#include <ctime>

void guessNumber() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    while (true) {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;

        if (guess < number) {//changed the greater than(>)to less than(<)
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > number) {  //changed the less than equal to(<=)to greater than(>)
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number." << std::endl;
            break;
        }
    }
}

int main() {
    guessNumber();
    return 0;
}
