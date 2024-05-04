// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    bool lc= false;
    bool uc= false;
    for(int i =0;i<password.length();i++){
        if(password[i]<='Z'&&password[i]>='!'){
            lc=true;
            break;
        }
        if(password[i]<='a'&&password[i]>='z'){
            lc=true;
            break;
        }
    }
    if(password.length() >= 8 &&lc==true&uc==true) return true;
    return false;
}

int main() {
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

    if (checkPassword(password)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "Password is invalid." << std::endl;
    }

    return 0;
}
