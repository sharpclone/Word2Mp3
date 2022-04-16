#include <fstream>
#include "functions.hpp"
using namespace std;

int main()
{
    string word;
    ifstream fin("input.txt");

    while (!fin.eof())
    {
        fin >> word;
        getmp3(word);
    }
}