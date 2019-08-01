//
// Created by wlk on 2019-07-30.
//

#include "qclient.h"
using namespace std;
using namespace queueserver;
int main(int argc, char ** argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: client hostname\n");
        exit(1);
    }

    struct addrinfo hints;
    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    
    return 0;
}

int qclient::getOption()
{
    int option;

    while (1) {
        cout << "Get a Quote" <<endl;
        cout << "\tNew Quote\t1" <<endl;
        cout << "\tQuit\t\t0" <<endl;
        cout << "Your option: ";
        cin >> option;
        if (option == 0 || option == 1)
            return option;
        else
            cout << "Illegal option, try again" << endl;
    }
}

void qclient::printError(char * msg)
{
    perror(msg);
    exit(1);
}

