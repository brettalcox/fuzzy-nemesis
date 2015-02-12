#define CURL_STATICLIB
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <curl/curl.h>
#include <string>
using namespace std;

size_t writeToFile(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
    size_t writtenToFile;
    writtenToFile = fwrite(ptr, size, nmemb, stream);
    return writtenToFile;
}

int main() {

    CURL *curl;
    CURLcode res;
    FILE *file; // = fopen("/home/brettalcox/4chan.jpg", "wb");

    string chanBoard;
    string chanImage;
    string path = "/home/brettalcox/Pictures/4chan/";
    string outputName;

    cout << "What /b/oard?: ";
    getline(cin, chanBoard);
    cout << "What is the image name (including .jpg)?: " << endl;
    getline(cin, chanImage);
    cout << "Save As (including .jpg): ";
    getline(cin, outputName);

    string completeUrl = "https://i.4cdn.org" + chanBoard + chanImage;
    path += outputName;

    char *chanUrl = new char[completeUrl.length() + 1];
    strcpy(chanUrl, completeUrl.c_str());

    char *outputFile = new char[path.length() + 1];
    strcpy(outputFile, path.c_str());
    file = fopen(outputFile, "wb");

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, chanUrl);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeToFile);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, file);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(file);

    }
    delete [] chanUrl;
    delete [] outputFile;


    return 0;
}
