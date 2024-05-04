// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    if(password.length()<8) return false;
    int count1=0,count2=0,count3=0;
    for(int i=0;i<password.length();i++){
        if(password[i]>='a' and password[i]<='z') count1=1;
        else if(password[i]>='A' and password[i]<='Z') count2=1;
        else if(password[i]>='0' and password[i]<='9') continue;
        else count3=1;

    }
    int z=count1+count2+count3;
    if(z==3) return true;
    return false;
}

int main() {
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

    if (checkPassword(password)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "Password is invalid" << std::endl;
    }

    return 0;
}
