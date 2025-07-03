#include <iostream>
#include <string>
using namespace std;


string ReadName() {
    string Ch1;
    cout << "Please Enter a Character?\n";
    getline(cin, Ch1);
    return Ch1;
}


char InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}


string InvertAllStringLettersCase(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = InvertLetterCase(name[i]);

    }

    return name;

}

int main()
{
    string name = ReadName();
    cout << "\nName after inverting case:\n";

    name = InvertAllStringLettersCase(name);
    cout << name << endl;

 

   


}
