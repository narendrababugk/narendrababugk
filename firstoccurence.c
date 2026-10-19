#include<stdio.h>
#include<string.h>

int strStr(char* haystack, char* needle) {
    int s=-1;
    int len1=strlen(haystack);
    int len2=strlen(needle);
    if(len2==0){
        return 0;
    }
    int i=0;
        while (i <= len1 - len2) {
        int j;

        for (j = 0; j < len2; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }

        if (j == len2) {
            return i;
        }

        i++;
    }

    return -1;
}
void main(){

char a1[100];

printf("Enter the  haystack array :\n");
scanf("%s",a1);

char a2[100];

printf("Enter the needle array elements :\n");
scanf("%s",a2);

int res=strStr(a1,a2);
printf("The first string occurence at:%d",res);
}
