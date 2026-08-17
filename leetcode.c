#include <stdio.h>
#include <stdlib.h>
int reverse(int x){
char arr[10];
char str[10];
int i=0,j;
int len=0,y=0;


    sprintf(arr, "%d", x);
    for(j=0;arr[j]!='0';j++){
        len++;
    }
printf("%d",len);
    for(j=0;j<len;j++){
        if(arr[j]='-'){
            str[0]='-'; 
            int m = 1;
            int n = len - 2;

            while(m < n)
            {
           int temp = str[m];
           str[m] = str[n];
           str[n] = temp;
           m++;
           n--;
           } 
        }
       else{
        int m = 0;
        int n = len - 1;
        while(m < n){
           int temp = str[m];
           str[m] = str[n];
           str[n] = temp;
           m++;
           n--;
           } 
        }
        if(str[0]=='0'){
            int pos=0;
            for(int i = pos; i < len - 1; i++)
            {
               str[i] = str[i + 1];
            }

        }
    }
    int num = atoi(str);

    return num;
}

void main() {
    int x=123;
    reverse(x);
}
 



