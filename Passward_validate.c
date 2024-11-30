#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validatePassword(char password[]) {
    int length = strlen(password);
    
    // Check password length
    if (length < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }
    
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    
    // Loop through each character in the password
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        }
        if (islower(password[i])) {
            hasLower = 1;
        }
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
        if (strchr("!@#$%^&*()", password[i])) {
            hasSpecial = 1;
        }
    }
    
    // Check if all conditions are met
    if (!hasUpper) {
        printf("Password must contain at least one uppercase letter.\n");
        return 0;
    }
    if (!hasLower) {
        printf("Password must contain at least one lowercase letter.\n");
        return 0;
    }
    if (!hasDigit) {
        printf("Password must contain at least one digit.\n");
        return 0;
    }
    if (!hasSpecial) {
        printf("Password must contain at least one special character (e.g., !@#$%^&*()).\n");
        return 0;
    }
    
    // If all checks pass
    return 1;
}

int main() {
    char password[100];
    
    printf("Enter your password: ");
    scanf("%s", password);
    
    if (validatePassword(password)) {
        printf("Password is valid!\n");
    } else {
        printf("Password is invalid.\n");
    }
    
    return 0;
}
