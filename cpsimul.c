#include<stdio.h>
int main(int argc,char * argv[]){
    char c;
    FILE *fsource ,*fdest;
    if(argc==0){
        printf("No file mentioned\n");
        return 0;
    }
    fsource=fopen(argv[1],"r");
    if(fsource == NULL) {
       printf("%s: No such file or directory\n",argv[1]);
       return 0;
    }
    fdest=fopen(argv[2],"w");
    if(fdest == NULL) {
       printf("%s: No such file or directory\n",argv[2]);
       return 0;
    }
    while((c=fgetc(fsource))!=EOF){
        fputc(c,fdest);
    }
    printf("Copy completed from %s to %s",argv[1],argv[2]);
}