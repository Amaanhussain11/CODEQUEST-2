// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

#include <iostream>
#include <string>

bool checkPassword(std::string password)
{
    int flag1 = 0, flag2 = 0, flag3 = 0;
    if (password.length() < 8)
    {
        std ::cout << "Password is too short.\n";
        return 0;
    }

    else if (password.length() >= 8)
    {
        for (int i = 0; i < password.length(); i++)
        {
            if (password[i] >= 65 && password[i] <= 90)
                flag1 = 1;
            if (password[i] >= 97 && password[i] <= 122)
                flag2 = 1;
            if (!(password[i] >= 97 && password[i] <= 122) && !(password[i] >= 65 && password[i] <= 90) && !(password[i] >= 48 && password[i] <= 57))
                flag3 = 1;
        }
        if (flag1 == 1 && flag2 == 1 && flag3 == 1)
            return true;
        else
            return false;
    }
    else
        return 0;
}

int main()
{
    std::string password;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

    if (checkPassword(password))
    {
        std::cout << "Password is valid." << std::endl;
    }
    else
    {
        std::cout << "Password is invalid" << std::endl;
    }
    return 0;
}
