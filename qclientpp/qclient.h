//
// Created by wlk on 2019-07-30.
//

#ifndef QSERVER_QCLIENT_H
#define QSERVER_QCLIENT_H

#endif //QSERVER_QCLIENT_H

#define MAX_MESSAGE_SIZE       256

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <unistd.h>

namespace queueserver {
    class qclient {
    public:
        void printError(char * msg);
        int getOption();
    private:

    };

    class message{
    public:
        long message_id;
        char buffer[MAX_MESSAGE_SIZE];
    private:

    };
}
