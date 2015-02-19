#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include <string.h>
#include <iostream>

void ntpdate();

int main() {

    ntpdate();
    return 0;
}

void ntpdate() {
    char *hostname = (char *)"200.20.186.76";
    int portno = 123;
    int maxlen = 1024;
    int i;

    unsigned char msg[48] = {010, 0, 0, 0, 0, 0, 0, 0, 0,};
    unsigned long buf[maxlen];

    struct protoent *proto;
    struct sockaddr_in server_addr;
    int s;
    long tmit;

    proto = getprotobyname("udp");
    s = socket(PF_INET, SOCK_DGRAM, proto->p_proto);

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family=AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(hostname);
    server_addr.sin_port = htons(portno);

    i = sendto(s, msg, sizeof(msg), 0, (struct sockaddr *) &server_addr, sizeof (server_addr));
    struct sockaddr saddr;
    socklen_t saddr_l = sizeof (saddr);
    i = recvfrom(s, buf, 48, 0, &saddr, &saddr_l);

    tmit = ntohl((time_t)buf[4]);

    tmit -= 2208988800U;
    std::cout << "NTP time is " << ctime(&tmit) << std::endl;
    i = time(0);
    std::cout << "System time is " << (i - tmit) << " seconds off" << std::endl;
}
