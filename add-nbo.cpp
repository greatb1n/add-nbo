#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>
//#include "WinSock2.h" 
//#pragma comment( lib, "Ws2_32.lib" )  //윈도우 visual에서 실행시 필요

int main(int argc, char* argv[]) {

    uint32_t a1;
    uint32_t a2;
    uint32_t ntohl1;
    uint32_t ntohl2;
    uint32_t plus;

    FILE* f1;
    FILE* f2;

    f1 = fopen(argv[1], "rb");
    f2 = fopen(argv[2], "rb");

    fread(&a1, sizeof(uint32_t), 1, f1);
    fread(&a2, sizeof(uint32_t), 1, f2);

    ntohl1 = ntohl(a1);
    ntohl2 = ntohl(a2);

    plus = ntohl1+ ntohl2;

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", ntohl1, ntohl1, ntohl2, ntohl2, plus, plus);

    fclose(f1);
    fclose(f2);
}
