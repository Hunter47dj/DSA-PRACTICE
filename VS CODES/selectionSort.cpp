#include <stdio.h>
#include <string.h>

int isPowerOfTwo(char binary[]) {
    int countOnes = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            countOnes++;
            if (countOnes > 1) {
                return 0;
            }
        }
        else if (binary[i] != '0') {
            return 0;
        }
    }
    
    return countOnes == 1;
}

int main() {
    char binary[101];
    scanf("%s", binary);
    
    if (isPowerOfTwo(binary)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}