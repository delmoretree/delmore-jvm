//
// Created by mac on 2020/11/30.
//

#include "Config.h"
#include "version.h"
#include "Usage.h"
#include <iostream>

using namespace std;

string Config::getClassName() {
    return className;
}

string Config::getClassPath() {
    return classPath;
}

vector<string> Config::getArgs() {
    return this->args;
}

string Config::getJreOption() {
    return xJreOption;
}


void Config::createByParse(int argc, char **argv) {
    int i;
    int j = 0;

    for (i = 1; i < argc; i++) {
        int lastarg = i==argc-1;

        if (!strcmp(argv[i],"-h") && !lastarg) {

        } else if ((!strcmp(argv[i],"-h") && lastarg) || !strcmp(argv[i],"-help")) {
            Usage::printUsage();
        } else if (!strcmp(argv[i],"-version")) {
            string version = DELMORE_JVM_VERSION_H;
            std::cout << "delmore-jvm " << version.c_str() << endl;
            return;
        } else if (!strcmp(argv[i],"-classpath") || !strcmp(argv[i],"-cp")) {
            classPath = argv[++i];
        } else if (!strcmp(argv[i],"-X")) {
            Usage::printXUsage();
            return;
        } else if (!strcmp(argv[i],"-Xjre")) {
            xJreOption = argv[++i];
        } else {
            if (argv[i][0] == '-') {
                fprintf(stderr,
                        "Unrecognized option or bad number of args for: '%s'\n",
                        argv[i]);
                exit(1);
            } else {
                if (j > 2) {
                    fprintf(stderr,
                            "Unrecognized option or bad number of args for: '%s'\n",
                            argv[i]);
                    exit(1);
                }
                if (j++ == 0) {
                    className = argv[i];
                } else {
                    args.emplace_back(argv[i]);
                }
            }
        }
    }
}