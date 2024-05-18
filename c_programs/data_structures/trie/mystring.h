struct mystring{
    char* name;
    int size;
    int MAX;
};typedef struct mystring mystring ;
void push(mystring* S, char x);
struct mywords{
    mystring** words;
    int size;
    int MAX;
};typedef struct mywords mywords;
void pushwords(mywords* W, mystring S);
void printstr(mywords);