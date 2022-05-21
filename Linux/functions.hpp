#include <string>
#include "curl/curl.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

string base_URL = "https://translate.google.com/translate_tts?api_key=bijhr0r2gnuby95kkrt5ukoq5rpexr12k2wrpby0r39sg339fhlbs7v&q=";
string word2;
string after_URl = "&ie=UTF-8&tl=en&client=tw-ob";

void getmp3(string word2)
{
    int result;
    string final_URL;
    final_URL = base_URL + word2 + after_URl;

    word2 += ".mp3";

    FILE *fp;
    fp = fopen(word2.c_str(), "wb");

    CURL *curl;
    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, final_URL.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
    curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);

    result = curl_easy_perform(curl);

    if (result == CURLE_OK)
        cout << "Download Succesful of " << word2 << "\n";
    else
        cout << "ERROR: " << curl_easy_strerror(CURLcode(result));

    fclose(fp);

    curl_easy_cleanup(curl);
}