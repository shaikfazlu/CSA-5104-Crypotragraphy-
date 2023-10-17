#include <stdio.h>
#include <string.h>
int main() {
    int i, key,n,encrypted_text;
    char s[1000], c;
    printf("Enter encrypted text:\n");
    scanf("%s",&s);
    printf("Enter key:\n");
    scanf("%d", &key);
    n = strlen(s);
    for (i = 0; i < n; i++) {
        c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = c - key;
            if (c < 'a') {
                c = c + 'z' - 'a' + 1;
            }
            s[i] = c;
        } else if (c >= 'A' && c <= 'Z') {
            c = c - key;
            if (c < 'A') {
                c = c + 'Z' - 'A' + 1;
            }
            s[i] = c;
        }
    }
printf("Decrypted message: %s\n", s);
return 0;
}
