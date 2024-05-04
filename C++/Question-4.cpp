// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    int l=0,u=0,s=0;
    for(int i=0;i<password.size();++i){
        int c=password[i];
        if(c>=65&&c<=90){
            ++u;
        }
        else if(c>=97&&c<=122){
            ++l;
        }
        else{
            ++s;
        }
    }
    return (password.length() >= 8)&&(u>0)&&(l>0)&&(s>0);
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
