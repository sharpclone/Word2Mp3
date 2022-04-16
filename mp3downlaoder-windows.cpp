#include <iostream> //mihai
#include <windows.h>
#include <shellapi.h>
#pragma comment(lib, "Urlmon.lib")
#include <cstdio>
#include <fstream>
using namespace std;

string base_URL = "https://translate.google.com/translate_tts?api_key=bijhr0r2gnuby95kkrt5ukoq5rpexr12k2wrpby0r39sg339fhlbs7v&q=";
string after_URl = "&ie=UTF-8&tl=en&client=tw-ob";
string final_URL;
string word;
int main()
{
    ifstream fin("input.txt");

    while (!fin.eof())
    {
        fin >> word;
        final_URL = base_URL + word + after_URl; // final link is search_URL.c_str()
        word += ".mp3";
         if (S_OK == URLDownloadToFile(NULL, search_URL.c_str(), word.c_str(), 0, NULL))
            cout << "The file is saved to " << word << endl;
    }

    return 0;
}
