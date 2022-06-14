#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int nr_napisu=0;

void obsluga_sig_int(int sig)
{
    printf(" Bye!\n");
}

void obsluga_sig_alrm(int sig)
{
    printf(" Good morning!\n");
}

void obsluga_sig_alrm(int sig)
{
    printf(" Good night!\n");
}

int main(int argc, char** argv) 
{
    signal(SIGINT,obsluga_sig_int);
    signal(SIGALRM,obsluga_sig_alrm);
    signal(SIGHUP,obsluga_sig_up);
    
    while (true)
    {
        printf("Cześć tu proces: %d\n",getpid());
        sleep(1);
    }
    
    return 0;
}
