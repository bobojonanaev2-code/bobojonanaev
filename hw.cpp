#include <iostream>
#include <unistd.h>

extern char **environ;
int main() {
for(char **env=environ; *env != nullptr; env++) {
std::cout << *env << std::endl;
}
}