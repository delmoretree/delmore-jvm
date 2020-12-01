//
// Created by mac on 2020/11/30.
//

#ifndef DELMORE_JVM_CONFIG_H
#define DELMORE_JVM_CONFIG_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class Config {
private:
    string className;
    string classPath;
    string xJreOption;
    vector<string> args;

public:
    string getClassName();
    string getClassPath();
    vector<string> getArgs();
    string getJreOption();
    void createByParse(int argc, char **argv);
};


#endif //DELMORE_JVM_CONFIG_H
