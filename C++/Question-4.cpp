// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    if(password.length() >= 8){
        int x=0;
        int y=0;
        for(int i=0;i<password.length();i++){
            if((int(password[i])>=65 && int(password[i])<=90) || (int(password[i])>=97 && int(password[i])<=122) ){
                x=1;
            }
            else{
                y=1;
            }
        }
        if(x==1 && y==1) return true;
    }
    return false;
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

 