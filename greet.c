 #include <stdio.h>


 int main (int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: ./greet name\n");
        return 1;
    }else{
    printf("hello, %s\n", argv[1]);
    return 0;
 }
}