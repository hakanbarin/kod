#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hakan.h"
#include "hello.h"
#include <pthread.h>
#include <unistd.h>

int main(){

    pid_t ID = fork();
    if(ID){
        printf("child\n");
    }
    else{
        printf("parent\n");
    }

}
//  process haberleşmesi



























/*
pthread_mutex_t mutexcik;

char asd[6] = {0};
void* threadfunc(void* input){
    while(1){
        sleep(1);
        printf("inside func: %s \n ",asd);
        pthread_mutex_lock(&mutexcik);

        strcpy(asd,"firat");
        pthread_mutex_unlock(&mutexcik);
    }
} 

int main(){
strcpy(asd,"hakan");
pthread_t thread_2;
pthread_mutex_init (&mutexcik,NULL);
pthread_create(&thread_2, NULL, threadfunc, NULL);

    while(1){
        sleep(1);
        printf("inside main: %s\n",asd);
        pthread_mutex_lock(&mutexcik);
        strcpy(asd,"hakan");
        pthread_mutex_unlock(&mutexcik);
        }
}

*/