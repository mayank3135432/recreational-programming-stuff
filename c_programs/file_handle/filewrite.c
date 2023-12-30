#include<stdio.h>
#include<stdlib.h>
// read(r) write(w) appened(a)

/*
HOW TO WRITE INTO A FILE IN C
1) open file using fopen("filename","w");
fopen creats file if file not exist
2) to write a single charecter to file, use
fputc(ch,fp); 
3) to write a string ,use fputc(string,fp);
or loop fputs
4)fprintf() for formatted output
fprintf(fp,"%d%s",a,string)
5)fscanf
*/
int main(){
    FILE* fp;
    char str[50];
    int a=32;
    char ch='q';
    fp=fopen("abc.txt","w");
    if(fp==NULL){//check for error
        printf("error");
        exit(1);
    }
    
    printf("enter the string ");
    fgets(str,50,stdin);

    fprintf(fp,"%d %s %c",a,str,ch);
    //fputs(str,fp);
    //new inputs will overwrite old ones already presesnt in file
        
    fclose(fp);

    return 0;
}
