#include <stdio.h>
#include <stdlib.h>

void reverse(char* bufferFile, int bufferLen) {
    for (int i = bufferLen; i > 0; i--) {
        printf("%c", bufferFile[i]);
    }
}

int main(int argc, char *argv[])
{
    FILE *fileptr;
    long fileLen;
    char *buffer;
    if (!argc) {
        printf("arg is not");
        exit(1);
    }
    // コマンドラインからファイル名を取得
    fileptr = fopen(argv[1], "r");
    if (fileptr  == NULL) {
        printf("file not found");
        exit(1);
    }
    fseek(fileptr, 0, SEEK_END);
    fileLen = ftell(fileptr);
    rewind(fileptr);
    buffer = (char *)malloc(fileLen * sizeof(char));
    fread(buffer, fileLen, 1, fileptr);
    fclose(fileptr);
    reverse(buffer, fileLen);
    exit(0);
}
