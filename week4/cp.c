#include <stdio.h>
#include <stdint.h>


typedef uint8_t BYTE;  //defines the data type byte

int main(int argc, char *argv[]){

    FILE *src = fopen(argv[1], "rb"); //reads the file in binary
    FILE *dst = fopen(argv[2], "wb"); //writes the file in binary

    BYTE b;
    
    while (fread(&b, sizeof(b), 1, src) != 0){

        fwrite(&b, sizeof(b), 1, dst );
    }
    fclose(dst);
    fclose(src);

}