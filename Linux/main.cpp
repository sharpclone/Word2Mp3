#include <fstream>
#include <iostream>
#include "functions.hpp"
using std::cout;
using std::ifstream;
using std::string;
int main()
{
    string word;
    cout << "MAKE SURE TO HAVE INPUT.TXT IN THE SAME FOLDER WITH THE EXECUTABLE!!!"
         << "\n";
    ifstream fin("input.txt");
    fin >> word;
    while (!fin.eof())
    {
        getmp3(word);
        fin >> word;
    }
    return 0;
}