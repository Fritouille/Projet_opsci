#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {    
        printf("Usage : ./opsci [up / down]\n");
        printf("Pour [up / down] led docker compose\n");
        return 1;
    }
    else{
        if(strcmp(argv[1],"up") == 0){
            system("docker compose up --build");
            return 0;
        }

        if(strcmp(argv[1],"down") == 0){
            system("docker compose down");
            return 0;
        }
        printf("Usage : ./opsci [up / down]\n");
        printf("Pour [up / down] le docker compose\n");
    }
    return 1;
}
