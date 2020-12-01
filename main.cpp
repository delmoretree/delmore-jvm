#include <iostream>
#include "Config.h"

using namespace std;

int main(int argc, char **argv) {

    Config config = Config();
    config.createByParse(argc, argv);

    cout<<config.getJreOption()<<endl;

    return 0;
}