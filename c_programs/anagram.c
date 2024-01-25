#include<stdio.h>
#include<stdlib.h>

/*
int hash1[26] = {0};
int hash2[26] = {0};

int isAnagram(char* word, char* name){
    for (int i=0;word[i];i++){
        hash1[word[i]-97]++;
    }
    for (int i=0;name[i];i++){
        hash2[name[i]-97]++;
    }
    for (int i=0;i<26;i++){
        if (hash1[i]!=hash2[i]) return 0;
    }
    return 1;
}
int* stringAnagram(int dictionary_count, char** dictionary, int query_count, char** query, int* result_count) {
    int* count = (int*)malloc(sizeof(int)*query_count);
    for(int i=0;i<query_count;i++) count[i]=0;
    int q,d;
    for(q=0;q<query_count;q++){
        for(d=0;d<dictionary_count;d++){
            if(isAnagram(query[q],dictionary[d])){
                count[q]++;
            }
        }
    }
    *result_count=query_count;
    return(count);
}
*/
int hash1[26] = {0};
int hash2[26] = {0};

int isAnagram(char* word, char* name){
    for (int i=0;word[i];i++){
        hash1[word[i]-97]++;
    }
    for (int i=0;name[i];i++){
        hash2[name[i]-97]++;
    }
    for (int i=0;i<26;i++){
        if (hash1[i]!=hash2[i]) return 0;
    }
    return 1;
}
int* stringAnagram(int dictionary_count, char** dictionary, int query_count, char** query, int* result_count) {
    int* count = (int*)malloc(sizeof(int)*query_count);
    for(int i=0;i<query_count;i++) count[i]=0;
    int q,d;
    for(q=0;q<query_count;q++){
        for(d=0;d<dictionary_count;d++){
            if(isAnagram(query[q],dictionary[d])){
                count[q]++;
            }
        }
    }
    return(count);
}

int main(){
  char* oct[2] = {"abc","hello"};
  char* dct[3] = {"olleh","bca","cab"};
  //int* x = stringAnagram(3,dct,2,oct,3);
  printf("%d\n",isAnagram("codl","cold"));
}
