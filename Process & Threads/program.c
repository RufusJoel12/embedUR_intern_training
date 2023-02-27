#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_t read_thread, write_thread;
pthread_mutex_t mutex;
FILE* file;

void* read_file(void* arg) {
    char buffer[100];
    pthread_mutex_lock(&mutex);
    while(fgets(buffer,sizeof(buffer),file)) 
    {
        printf("%s",buffer);
    }
    pthread_mutex_unlock(&mutex);
    return NULL;
}

void* write_file(void* arg) {
    char* message ="Hello from the write thread!\n";
    pthread_mutex_lock(&mutex);
    fputs(message,file);
    pthread_mutex_unlock(&mutex);
    return NULL;
}

int main() {
   
    pthread_mutex_init(&mutex,NULL);

    file = fopen("test.txt","a+");
   
    pthread_create(&read_thread,NULL,read_file,NULL);
    pthread_create(&write_thread,NULL,write_file,NULL);
  
    pthread_join(read_thread,NULL);
    pthread_join(write_thread,NULL);
   
    pthread_mutex_destroy(&mutex);
    fclose(file);

    return 0;
}

