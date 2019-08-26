#include<stdio.h>
int main(int argc,char * argv[]){
    char c;
    FILE *f;
    int cnt;
    cnt=argc;
    if(argc==0){
        printf("No file mentioned\n");
        return 0;
    }
    printf("\n-----------------------------------------------\n");
    for(int i=1;i<argc;i++){
        f=fopen(argv[i],"r");
        if(f == NULL) {
        printf("%s: No such file or directory\n",argv[i]);
        return 0;
        }
        while((c=fgetc(f))!=EOF){
            printf("%c",c);
        }
        printf("\n-----------------------------------------------\n");
    }
}