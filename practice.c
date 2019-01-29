
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char* argv[]){
    int firstnum,secondnum,result;
    char opr[10];

    if(argc<4){
        printf("Some parameters are missing\n");
        printf("use prg_name opr value1 value2\n");
        return -1;
    }
printf("operator is %c \n",opr[0]);
    //getting operator
    strcpy(opr,argv[1]);
    //getting values from arguments
    firstnum=atoi(argv[2]);
    secondnum=atoi(argv[3]);


    switch(opr[0]){
        case '+':
            result=firstnum+secondnum;
            break;
        case '-':
            result=firstnum-secondnum;
            break;
        case '*':
            result=firstnum*secondnum;
            break;
        case '/':
            result=firstnum/secondnum;
            break;

        default:
            printf("Invalid Operator!!!\n");
            return -1;
}
    printf("Result is: %d %c %d = %d\n",firstnum,opr[0],secondnum,result);
    return 0;
}
