#include <iostream> //mihai
#include <windows.h>
#include <shellapi.h>
#pragma comment(lib, "Urlmon.lib")
#include <cstdio>
#include <fstream>
using namespace std;
void StartWeb()
{    
	ifstream fin("input.txt");
	string word="dummy";
	Redo:	fin >> word;
	if (word != "stop"){
    string base_URL = "https://translate.google.com/translate_tts?api_key=bijhr0r2gnuby95kkrt5ukoq5rpexr12k2wrpby0r39sg339fhlbs7v&q=";
    string search_URL;
    string after_URl= "&ie=UTF-8&tl=en&client=tw-ob";
    search_URL = base_URL + word + after_URl;			//final link is search_URL.c_str()

    // cout << "Searching for: \"" << word << "\"\n";

    //ShellExecuteA(NULL, "open", search_URL.c_str(), NULL, NULL, SW_SHOWNORMAL);
    word+=".mp3";
 if (S_OK == URLDownloadToFile(NULL, search_URL.c_str(), word.c_str(), 0, NULL)) cout << "The file is saved to " <<word<< endl;
   
goto Redo;
	}
    
}

int main(){
 StartWeb();

return 0;
}

