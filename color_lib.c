#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int color(){
    printf("%sI'm red\n", KRED);
    printf("%sI'm green\n", KGRN);
    printf("%sI'm yellow\n", KYEL);
    printf("%sI'm blue\n", KBLU);
    printf("%sI'm magenta\n", KMAG);
    printf("%sI'm cyan\n", KCYN);
    printf("%sI'm white\n", KWHT);
    printf("%sI'm normal\n", KNRM);
    return 0;
}
