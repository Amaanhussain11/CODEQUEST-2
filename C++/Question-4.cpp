// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password){

    if(password.size() <8) return false;
    int len=password.size();
    int lower=0,upper=0,special=0;
    for(int i=0; i<len; i++){
        if(int(password[i])>=97 && int(password[i])<=122){
            lower++;
        }
        if(int(password[i])>=65 && int(password[i])<=90){
            upper++;
        }
        else{
            special++;
        }
    }
    if(lower>=1 && upper>=1 && special>=1) return true;
    else return false;
}

int main() {
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

    if (checkPassword(password)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "Password is Invalid" << std::endl;
    }

    return 0;
}
