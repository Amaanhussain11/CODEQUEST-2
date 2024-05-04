// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    char arr_up[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    bool x = 0;
    char arr_lo[26];
    for(int i=0;i<26;i++){
arr_lo[i]=arr_up[i]+32;
    }
    char arr_sp[] = {'!','@','#','$','%',' ','&','*','^',':',';','_','-','?','+','<','>','~',',','.'};
    for(int i=0;i<password.size();i++){
        for(int j=0;j<26;j++){
if(password[i]==arr_up[j] && password[i]==arr_lo[j] ){
    if(password[i]==arr_sp[j] ){
        x=1;
    }
}
        }
    }
    if(x==1){
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
