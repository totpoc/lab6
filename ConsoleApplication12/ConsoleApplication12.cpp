#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int spacePosition = 0;
    bool consistsOfNumbers = false, charactersEnded = false;
    string inputString;
    cout << "Введите строку: ";
    getline(cin, inputString);
    cout << "Итоговая строка:";
    for (int i = 0; i < inputString.length(); i++)
    {
        if (inputString[i] == ' ' || i == inputString.length() - 1)
        {
            cout << " ";
            consistsOfNumbers = false;
            for (int j = spacePosition; j < i; j++)
            {
                if (inputString[j] == ' ')
                    j++;
                if (inputString[j] <= 57 && inputString[j] >= 48)
                    consistsOfNumbers = true;
                else
                {
                    consistsOfNumbers = false;
                    break;
                }
            }
            for (int j = spacePosition; j <= i; j++)
            {
                charactersEnded = false;
                
                if (!consistsOfNumbers) {
                    if (((inputString[j] >= 122 || inputString[j] <= 65) || ((inputString[j] <= 96 && inputString[j] >= 90) && inputString[j] != 95)) && !charactersEnded)
                    {
                        inputString[j] = ' ';
                    }
                    else {
                        charactersEnded = true;
                        cout << inputString[j];
                    }
                }
            }
            spacePosition = i;
            
        }
    }
   

}

