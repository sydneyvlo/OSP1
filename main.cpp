#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

int main() {
    // ssize_t write(int fd, const void *buf, size_t count);
    const char *buf = "osh>";
    // Check to see if the return value of write which tells us if the function succeeded or not.
    size_t nr;
    // should_run intially set to 1, so our program will at least iterate once.
    int should_run = 1;

    string userInput="";


    do {
        write(1, buf, 4);
        read(0, &userInput, 80);
    } while(should_run);
}