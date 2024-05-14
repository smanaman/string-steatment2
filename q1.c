#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int lenth;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
printf("Enter your pass word you have must requir 6 digit\n ");
printf("Enter your pass word:=");
gets(str);
lenth=strlen(str);
// &&  &&  && 

for(int x=0; str[x] != '\0'; x++){
 
    if(str[x] >= 'A' && str[x] <= 'Z'){
       a++;
    }else if(str[x] >= 'a' && str[x] <= 'z'){
        b++;
    }else if(str[x] >= 48 && str[x] <= 57){
        c++;
    }else if(str[x] >= 33 && str[x] <= 47 || str[x] >= 48 && str[x] <= 64 || str[x] >= 123 && str[x] <= 126){
        d++;
    }


}

if(lenth>=6 && a && b && c && d){
    printf("your password is strong\n");
}else{
    printf("your password is not strong\n");
}
}
