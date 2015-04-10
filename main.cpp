#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

#define BUFFER_LEN 80;

int main() {
    // ssize_t write(int fd, const void *buf, size_t count);
    const char *buf = "osh>";
    // A c string of the path from the home directory to the working directory.
    char wd[80];
    getcwd(wd, 80);

    string wds = wd;

    cout << "size of: " << wds.length() << endl;
    // Check to see if the return value of write which tells us if the function succeeded or not.
    size_t nr;
    // should_run intially set to 1, so our program will at least iterate once.
    int should_run = 1;

    do {
//        write(1, wd, 80);
//        read(0, wd, 80);
    } while(should_run);
}