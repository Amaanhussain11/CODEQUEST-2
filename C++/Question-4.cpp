// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {  
    if(password.size()>=8)
    {

    
        int c=0;
        for(int i=0;i<=password.length();i++)
        {
            char ch=password[i];
            if(ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'||ch=='!' && int(ch)>64 &&int(ch)<91 && int(ch)>96 &&int(ch)<123)
             c=1; 
              

        }
        
        return password.length() >= 8;
    }

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
