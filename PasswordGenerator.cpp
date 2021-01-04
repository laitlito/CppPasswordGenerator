#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
const char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char num[] = "0123456789";
const char alphanum[] = "0123456789!@#$%&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int string_length1 = sizeof(alpha)-1;
int string_length2 = sizeof(Alpha)-1;
int string_length3 = sizeof(num)-1;
int string_length4 = sizeof(alphanum)-1;

int main()
{
    int n;
    int mode;
    cout << "Enter the password length : ";
    cin >> n;
    cout << "What mode do you want to use ? \n";
    cout << "\n 1. Lowercases only \n 2. Uppercases only \n 3. Numbers only \n 4. All of them including special characters \n";
    cin >> mode;
    srand(time(0));
    cout << "The generated password is : ";
    if(mode == 1)
    {
      for(int i = 0; i < n ; i++)
      {
        cout <<alpha[rand() % string_length1];
      }
    }
    if(mode == 2)
    {
      for(int i = 0; i < n ; i++)
      {
        cout << Alpha[rand() % string_length2];
      }
    }
    if(mode == 3)
    {
      for(int i=0 ; i < n ; i++)
      {
        cout << num[rand() % string_length3];
      }
    }
    if(mode == 4)
    {
      for(int i = 0; i < n ; i++)
      {
        cout << alphanum[rand() % string_length4];
      }
    }
    cout << "\n";
}
