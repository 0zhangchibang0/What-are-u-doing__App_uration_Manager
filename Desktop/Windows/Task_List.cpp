#include <cstdlib>
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    string command = "tasklist";
    int TASKLIST = system(command.c_str());

    cout << TASKLIST <<endl;
}