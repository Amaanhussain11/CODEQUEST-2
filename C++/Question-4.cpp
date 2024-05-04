// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character


#include <iostream>
using namespace std;
int main()
{
  int low_case=0, up_case=0, digit=0, special=0;
  string pass;
  cout<<"Enter Password"<<endl;
  
  cin>>pass;
  int l=pass.length(),i;
  
  for(i=0;i<l;i++)
  {
    if(islower(pass[i]))
      low_case=1;
    if(isupper(pass[i]))
      up_case=1;
    if(isdigit(pass[i]))
      digit=1;
    if(!isalpha(pass[i]) && !isdigit(pass[i]))
      special=1;  
  }
  
  if(low_case && up_case && digit && special && l>=8)
    cout<<"strong password."<<endl;
  else if(!up_case)
    cout<<"please include upper case letter"<<endl;
else if(!low_case)
cout<<" please include lower case"<<endl;
else if(!digit)
cout<<"please include digits"<<endl;
else if(!special)
cout<<"please include special characters"<<endl;
else 
cout<<"too short password"<<endl;

  return 0;
}