typedef unsigned long int uint64_t;

extern int write(int fd, char* buf, uint64_t count);

#define stdout 1

uint64_t strlen(char* ptr) {
    uint64_t i = 0;
    while (*(ptr + i) != 0) i++;
    return i;
}

int main(int argc, char** argv) {
    char* msg = "Hello World\n";
    write(stdout, msg, strlen(msg));

    // print all cli args
    for (uint64_t i = 0; i < argc; i++) {
        char* buf = argv[i];
        write(stdout, buf, strlen(buf));
        write(stdout, "\n", 1);
    }
    return 0;
}

