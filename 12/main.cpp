#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include <string.h>
#include <iostream>

int main() {

    return 0;
}

void ntpdate() {
    char *hostname = (char *)"200.20.186.76";
    int portno = 123;
    int maxlen = 1024;
    int i;

    unsigned char msg[48] = {010, 0, 0, 0, 0, 0, 0, 0, 0,};
    unsigned long buf[maxlen];


}
