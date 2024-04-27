#include <iostream>
#include <Poco/Process.h>
#include <Poco/Util/Application.h>
using namespace std;



int main(){
    obtainer();
}


while (1)
{

int obtainer()
    {
                Poco::Util::Application app(argc, argv);
            Poco::Process::PID pid = Poco::Process::id();
            std::string name = Poco::Process::args(argc, argv);
    // 可以添加更多获取进程信息的代码

          std::cout << "Process ID: " << pid << ", Command line: " << name << std::endl;

    return Poco::Util::Application::EXIT_OK;
    }
}