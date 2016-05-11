#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 pid_t pid;
 pid_t main_pid;
 int status;
 main_pid = getpid();
 pid = fork();
 if (pid == 0) { // child
	printf("Soy el hijo\n");
 } else { // parent
	printf("Soy el padre\n");
 }
}
