// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    if(password.size() < 8)
        return false;
    bool lower = false, upper = false, special = false;
    for (int i = 0; i < password.size(); i++) {
        if (password[i] >= 'a' and password[i] <= 'z') {
            lower = true;
        } else if (password[i] >= 'A' and password[i] <= 'Z') {
            upper = true;
        } else {
            special = true;
        }
    }
    return password.length() >= 8 and lower and upper and special;
}

int main() {
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

    if (checkPassword(password)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "Password is too short." << std::endl;
    }

    return 0;
}
