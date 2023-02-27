#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>

void log_message(char *message, char *filename, char *function_name, int line_number) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    int pid = getpid();
    time_t rawtime = tv.tv_sec;
    struct tm *timeinfo = localtime(&rawtime);
    char timestamp[20];
    strftime(timestamp, 20, "%H:%M:%S", timeinfo);
   printf("Time Stamp:%s.%06ld\n PID:%d\n File Name:%s\n Function Name:%s\n Linenumber:%d\n Message:%s\n", timestamp,tv.tv_usec, pid, filename, function_name, line_number, message);
}

int main() {
     char *message = "Log message";

    log_message(message, __FILE__, __func__, __LINE__);
    
    return 0;
}

