#include <iostream>
#include <unistd.h>
#include <string>
#include <stdio.h>

using namespace std;

int BUFFER_SIZE = 256;

void prompt();

int main() {

    // Print out the prompt.
    prompt();

    // C string to store the users input.
    char ui[BUFFER_SIZE];

    read(STDIN_FILENO, ui, BUFFER_SIZE);
    string temp = ui;
    write(STDOUT_FILENO, temp.c_str(), temp.length());


//    printf("%s is of length: %d \n", wd2.c_str(), int(wd2.length()));
}

void prompt() {
    // C string to store the current working directory
    char wd[BUFFER_SIZE];

    // Get the current working directory
    getcwd(wd, BUFFER_SIZE);

    // Store wd into a c++ string and get the length of the working directory.
    string prompt = wd;
    int promptLen = prompt.length();

    if (promptLen > 16) {
        // Find the position of the last occurrence of a / symbol.
        int pos = prompt.rfind('/');
        prompt = "/..." + prompt.substr(pos) + "/>";
//        printf("%s", prompt.c_str());
    }

    // Writing out the prompt to the screen.
    write(STDOUT_FILENO, prompt.c_str(), prompt.length());
}