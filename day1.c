#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long long int lint;

void part1(){
    FILE* fp = fopen("d1.txt", "r");
    char line[1000];
    lint sum = 0;
    while(fgets(line, 1000, fp) != NULL){
        int length = strlen(line);
        lint begin = 0;
        lint end = 0;
        for(int i = 0; i < length; i++){
            if(line[i] >= '0' && line[i] <= '9'){
                begin = line[i] - '0';
                break;
            }
        }
        for(int i = length-1; i >= 0; i--){
            if(line[i] >= '0' && line[i] <= '9'){
                end = line[i] - '0';
                break;
            }
        }
        sum += (10*begin + end);
    }
    fclose(fp);
    printf("Part 1: %lld\n", sum);
}

void part2(){
    FILE* fp = fopen("d1.txt", "r");
    char line[1000];
    lint sum = 0;
    while(fgets(line, 1000, fp) != NULL){
        int length = strlen(line);
        lint begin = 0;
        lint end = 0;
        for(int i = 0; i < length; i++){
            if(line[i] == 'o' && line[i+1] == 'n' && line[i+2] == 'e'){
                begin = 1;
                break;
            }
            else if(line[i] == 't' && line[i+1] == 'w' && line[i+2] == 'o'){
                begin = 2;
                break;
            }
            else if(line[i] == 't' && line[i+1] == 'h' && line[i+2] == 'r' && line[i+3] == 'e' && line[i+4] == 'e'){
                begin = 3;
                break;
            }
            else if(line[i] == 'f' && line[i+1] == 'o' && line[i+2] == 'u' && line[i+3] == 'r'){
                begin = 4;
                break;
            }
            else if(line[i] == 'f' && line[i+1] == 'i' && line[i+2] == 'v' && line[i+3] == 'e'){
                begin = 5;
                break;
            }
            else if(line[i] == 's' && line[i+1] == 'i' && line[i+2] == 'x'){
                begin = 6;
                break;
            }
            else if(line[i] == 's' && line[i+1] == 'e' && line[i+2] == 'v' && line[i+3] == 'e' && line[i+4] == 'n'){
                begin = 7;
                break;
            }
            else if(line[i] == 'e' && line[i+1] == 'i' && line[i+2] == 'g' && line[i+3] == 'h' && line[i+4] == 't'){
                begin = 8;
                break;
            }
            else if(line[i] == 'n' && line[i+1] == 'i' && line[i+2] == 'n' && line[i+3] == 'e'){
                begin = 9;
                break;
            }
            else if(line[i] >= '0' && line[i] <= '9'){
                begin = line[i] - '0';
                break;
            }
        }
        for(int i = length-1; i >= 0; i--){
            if(line[i] == 'e' && line[i-1] == 'n' && line[i-2] == 'o'){
                end = 1;
                break;
            }
            else if(line[i] == 'o' && line[i-1] == 'w' && line[i-2] == 't'){
                end = 2;
                break;
            }
            else if(line[i] == 'e' && line[i-1] == 'e' && line[i-2] == 'r' && line[i-3] == 'h' && line[i-4] == 't'){
                end = 3;
                break;
            }
            else if(line[i] == 'r' && line[i-1] == 'u' && line[i-2] == 'o' && line[i-3] == 'f'){
                end = 4;
                break;
            }
            else if(line[i] == 'e' && line[i-1] == 'v' && line[i-2] == 'i' && line[i-3] == 'f'){
                end = 5;
                break;
            }
            else if(line[i] == 'x' && line[i-1] == 'i' && line[i-2] == 's'){
                end = 6;
                break;
            }
            else if(line[i] == 'n' && line[i-1] == 'e' && line[i-2] == 'v' && line[i-3] == 'e' && line[i-4] == 's'){
                end = 7;
                break;
            }
            else if(line[i] == 't' && line[i-1] == 'h' && line[i-2] == 'g' && line[i-3] == 'i' && line[i-4] == 'e'){
                end = 8;
                break;
            }
            else if(line[i] == 'e' && line[i-1] == 'n' && line[i-2] == 'i' && line[i-3] == 'n'){
                end = 9;
                break;
            }
            if(line[i] >= '0' && line[i] <= '9'){
                end = line[i] - '0';
                break;
            }
        }
        sum += (10*begin + end);
    }
    fclose(fp);
    printf("Part 2: %lld\n", sum);
}

int main(){
    part1();
    part2();
}