//
// Created by mac on 2020/11/30.
//

#include "Usage.h"
#include "version.h"
#include <string>

using std::string;

void Usage::printUsage() {

    string version = DELMORE_JVM_VERSION_H;
    fprintf(stderr,
            "delmore-jvm %s\n"
            "\n"
            "Usage: delmore-jvm [OPTIONS] class [args...]\n"
            "           (执行类)\n"
            "\n"
            "  或 java [-options] -jar jarfile [args...]\n"
            "           (执行 jar 文件)\n"
            "\n"
            "    -? -help      输出此帮助消息\n"
            "    -version      输出产品版本并退出\n"
            "\n"
            "    -cp <目录和 zip/jar 文件的类搜索路径>\n"
            "    -classpath/-cp <目录和 zip/jar 文件的类搜索路径>\n"
            "                  用 : 分隔的目录, JAR 档案\n"
            "                  和 ZIP 档案列表, 用于搜索类文件。\n"
            "\n"
            "    -X            输出非标准选项的帮助\n"
            "\n", version.c_str());
}

void Usage::printXUsage() {
    fprintf(stderr,
//            "    -Xms<size>        设置初始 Java 堆大小\n"
//            "    -Xmx<size>        设置最大 Java 堆大小\n"
//            "    -Xss<size>        设置 Java 线程堆栈大\n"
            "    -Xjre <jre目录>    JDK启动类目录\n"
            "\n"
            "-X 选项是非标准选项, 如有更改, 恕不另行通知。\n");
}
