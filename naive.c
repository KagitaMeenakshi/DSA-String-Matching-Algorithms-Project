#include <stdio.h>
#include <string.h>
#include <time.h>
void naiveMethod(char* p, char* t){
    int n = strlen(t);
    int m = strlen(p);
    int num=0;
    for (int s=0;s<n-m+1;s++){
        int count=0;
        for (int i=0;i<m;i++){
            if (t[s+i]==p[i]){count++;}
            else {break;}
        }
        if (count==m){num++;printf("Shift %d\n", s);}
    }
}
int main() {
    // clock_t start,end;
    // int n = 1000,m=10;
    // char text[1000000] = "", pattern[100000]="";
    // char a[1000] = "a";
    // char b[1000] = "b";
    // for (int i=0;i<n;i++){
    //     strcat(text,a);
    // }
    // for (int i=0;i<m;i++){
    //     strcat(pattern,a);
    // }
    // strcat(pattern,b);
    // printf("%d %d\n",strlen(text), strlen(pattern));

    // start = clock();
    char *p = "aab";
    char *t = "aababaab";
    naiveMethod(p, t);
    // end = clock();
    // double time = (end-start)/(CLOCKS_PER_SEC);
    // printf("Time required: %.20lf", time);
    return 0;
}