#include<stdio.h>
#include<string.h>
int main() {
    char arr[100];
    gets(arr);
    int len=strlen(arr);
    int i,j,count=0;
    
    for(i=0; i<len; i++){
        for(j=i+1; j<len; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
                } 
            }
        }
    int p=len-(count);
    if(p%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    }
