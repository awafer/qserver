//
// Created by wlk on 2019-07-30.
//

#ifndef QSERVER_QCLIENT_H
#define QSERVER_QCLIENT_H

#endif //QSERVER_QCLIENT_H

#define MAX_MESSAGE_SIZE       256

namespace queueserver {
    class qclient {
    public:

    private:

    };

    class message{
    public:
        long message_id;
        char buffer[MAX_MESSAGE_SIZE];
    private:
    };
}
