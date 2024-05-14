#include <stdio.h>
#include <string.h>

int main() {
    char input_email[] = "admin@gmail.com";
    char input_password[] = "123456";
    
    char email[50];
    char password[50];
    
    printf("Enter your email: ");
    scanf("%s", email);
    
    printf("Enter your password: ");
    scanf("%s", password);
    
    if (strcmp(input_email, input_email) == 0 && strcmp(password,input_password) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }
    
    return 0;
}
