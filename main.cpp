#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
// #include "shell.cpp"
using namespace std;

int main(int argc, char **argv){
    string cmd;
    // cin >> cmd;
    do{
        // if(cmd.empty()){
        //     exit(EXIT_SUCCESS);
        // }
        // if(cmd[0] == '\0' || !cmd.compare("\n") ){
        //     free(&cmd);
        //     continue;
        // }
        // if(!cmd.compare("exit\n")){
        //     free(&cmd);
        // }
        // cout << cmd;
        // free(&cmd);
        cout << ">";
        cin >> cmd;
        cout << ">>" + cmd + '\n';
        if(cout << cmd.compare("exit")){
            cout << "Exiting shell.\n";
            exit(EXIT_SUCCESS);
        }
    }
    while(1);
    exit(EXIT_SUCCESS);
}