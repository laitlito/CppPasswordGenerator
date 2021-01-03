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
    cout << "Entrez la longeur du mot de passe : ";
    cin >> n;
    cout << "Quel mode voulez-vous utiliser ? \n";
    cout << "\n 1. Seulement des minuscules \n 2. Seulement des majuscules \n 3. Seulement des nombres \n 4. Tout \n";
    cin >> mode;
    srand(time(0));
    cout << "Le mot de passe généré est : ";
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
