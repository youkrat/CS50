#include <stdio.h>


int main(void){
    char s[10] = "Hi";
    char t[10] = "Bye";

    for (int i = 0; i < 10; i++){
        printf(
            "S: %d Address: %p T: %d Address: %p\n",
             s[i], &s[i], t[i], &t[i]);
    }
    
}