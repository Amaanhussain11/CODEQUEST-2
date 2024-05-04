// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password) {
    int count1=0,count2 = 0,count3 =0;
    for(int i=0;i<password.size();i++){
        if(password[i]>=65&&password[i]<=90){  //check condtion for upper case 
count1++;
        }
        if(password[i]>=97&&password[i]<=122){//check for lower case character
            count2++;
        }if(password[i]>=32&&password[i]<=47||password[i]>=58&&password[i]<=64||password[i]>=91&&password[i]<=96||password[i]>=123&&password[i]<=126){
            count3++;
        }//check for special character
        
    }
    return password.length() >= 8&&count1>=1&&count2>=1&&count3>=1;
}

int main() {
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);
    if (password.size() < 8)
    {
        std::cout<< "Password is too short.";    //check password length condition  when password is short
    }
    
    if (checkPassword(password)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "invalid password" << std::endl;  //check for  uppercase,lowercase as well as special characters
    }

    return 0;
}
