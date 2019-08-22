#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc ,char*argv[])
{
    if (argc< 3 ){
        printf("%s"," Enter  Command ");
    }
    int mult=1,sumi=0;
int k=0;
char*muli="mul";
char*addi="add";
char* cmm=strlwr(argv[1]);
int z=strcmp(argv[1],muli);
int y=strcmp(argv[1],addi);
    if (z==0){

        for(int i=2;i<argc;i++){
             k=atoi(argv[i]);
            mult=mult * k;
        }
            printf(" Mul is %d",mult);
    }

    else if(y==0){

             for(int i=2;i<argc;i++){
                    k=atoi(argv[i]);
            sumi=sumi+k;
        }

        printf(" sum is : %d",sumi);

    }
        else
      printf("%s",  " available comands is : [Add,mul] ");

    return 0;
}
