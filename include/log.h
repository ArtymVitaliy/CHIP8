#ifndef __LOG_H
#define __LOG_H

#include "iostream"
#include "string"
#include "fstream"
#include <time.h>
using namespace std;

class Logger
{
private:
    static const string currentDateTime() {
        time_t     now = time(0);
        struct tm  tstruct;
        char       buf[80];
        tstruct = *localtime(&now);
        strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

        return buf;
    }

public:
    static void logPrint(ostream& out, string log)
    {
	out << currentDateTime() << ": " << log << endl;
    }
};

#endif
