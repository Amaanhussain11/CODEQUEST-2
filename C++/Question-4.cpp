// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string &password)
{
    int count1 = 0, count2 = 0, count3 = 0;
    if (password.length() >= 8)
    {   
        for(int i =0;i<password.length();i++)
        {
        if (password[i] >= 'a' and password[i] <='z')
            count1++;
        if (password[i] >= 'A' and password[i]<= 'Z')
            count2++;
       if (password[i] == '!' or password[i] == '@' or password[i] == '#' or password[i] == '$' or password[i] == '%' or password[i] == '^' or password[i] == '&' or password[i] == '*')
            count3++;
        }
    }
    if (count1 > 0 and count2 > 0 and count3 > 0)
        return true;
    else 
    return false;
}

int main()
{
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);
     bool x = checkPassword(password);
    if ( x == true)
    {
        std::cout << "Password is valid." << std::endl;
    }
    else
    {
        std::cout << "Password is invalid." << std::endl;
    }

    return 0;
}
