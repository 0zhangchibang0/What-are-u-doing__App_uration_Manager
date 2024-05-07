#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool judger() {
    string command = "uname -a";    //定义uname命令
    int result = system(command.c_str());   //获取运行结果

    // if (result == 0) {  //判断是否成功执行 result成功为0，失败为1
    //     cout << "Unix-like system detected." << endl; 
    // } else {    //
    //     cout << "Non-Unix-like system or command failed." << endl;
    // }

    return result == 0;
}

int main() {
    bool SYSTEM_TYPE;

    if (judger()) {
         SYSTEM_TYPE = 1;
        cout << "The system is likely Unix-like." << endl;
    } else {
         SYSTEM_TYPE = 0;
        cout << "The system is likely not Unix-like." << endl;
    }

    return 0;
}