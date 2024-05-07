#include <iostream>
#include <Poco/Process.h>
#include <Poco/Util/Application.h>
using namespace std;
using namespace Poco;


int main(){
    obtainer();
}




// 定义一个任务类
class MyTask : public Task {
public:
    MyTask(const std::string& name) : Task(name) {}

    int perform() override {
        std::cout << "Task " << name() << " is running." << std::endl;
        // 执行一些后台任务...
        return 0; // 返回0表示任务成功完成
    }
};

int main(int argc, char** argv) {
    TaskManager taskManager;

    // 创建一个任务
    MyTask myTask("BackgroundTask");

    // 将任务添加到任务管理器并启动
    taskManager.start(myTask);

    // 等待任务完成，或者执行其他逻辑...
    // ...

    // 任务完成后，可以获取任务信息
    try {
        myTask.wait(); // 等待任务完成
        std::cout << "Task " << myTask.name() << " has completed." << std::endl;
    } catch (Exception& ex) {
        std::cerr << "Task failed: " << ex.displayText() << std::endl;
    }

    return 0;
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