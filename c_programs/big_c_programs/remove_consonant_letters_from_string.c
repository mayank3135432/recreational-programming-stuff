#include<stdio.h>
#pragma warning(disable : 4996)
void conc(char*, char*);
int len(char*);

void main() {
	int i;
	char name[100];
	char empty[100] = "";
	printf("enter a string\t");
	scanf("%[^\n]s", name);
	for (i = 0; name[i] != '\0'; i++) {
		if (!(((name[i] <= 90 && name[i] >= 65) || (name[i] <= 122 && name[i] >= 97)) &&
			(name[i] != 97 && name[i] != 101 && name[i] != 105 && name[i] != 111 && name[i] != 117 &&
				name[i] != 65 && name[i] != 69 && name[i] != 73 && name[i] != 79 && name[i] != 85)))
			/*if name[i] is not a consonant letter*/
		{
			conc(empty, &name[i]);
		}
	}
	printf("removing consonants...\n");
	printf("%s", empty);
}


int len(char* p) {
	int i;
	for (i = 0; *(p + i) != '\0'; i++) {}
	return(i);
}
void conc(char* p, char* q) {
	int L = len(p);
	*(p + len(p)) = *q;
}