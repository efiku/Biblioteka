//
// Created by efik on 15.01.16.
//

#ifndef BIBLIOTEKA_APPLICATION_H
#define BIBLIOTEKA_APPLICATION_H


class Application {

private:
    bool isRun;


public:

    bool isIsRun() const {
        return isRun;
    }

    void run() {
        isRun = true;
    }

    void stop() {
        isRun = false;
    }
};


#endif //BIBLIOTEKA_APPLICATION_H
