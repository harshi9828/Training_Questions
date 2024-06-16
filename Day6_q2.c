#include <stdio.h>
#include <string.h>

void remove_last_occurrence(char *str, char *word) {
    int str_len = strlen(str);
    int word_len = strlen(word);
    
  
    for (int i = str_len - word_len; i >= 0; --i) {
        if (strncmp(str + i, word, word_len) == 0) {
          
            memmove(str + i, str + i + word_len, str_len - i - word_len + 1);
            return;
        }
    }
}

int main() {
    char str[1000];
    char word[100];
    

    printf("Enter input string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    printf("Enter word to remove: ");
    scanf("%s", word);
    
    remove_last_occurrence(str, word);

    printf("Output string after removal: %s\n", str);
    
    return 0;
}


