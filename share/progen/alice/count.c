#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[256];
    int count = 0;
    char *result;

    fp = fopen("alice.txt", "r");
    if (fp == NULL) {
        printf("ファイルを開けませんでした。\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        char *ptr = line;
        while ((ptr = strstr(ptr, "alice")) != NULL) {
            count++;
            ptr++;
        }
        ptr = line;
        while ((ptr = strstr(ptr, "Alice")) != NULL) {
            count++;
            ptr++;
        }
    }

    fclose(fp);
    printf("\"alice\"または\"Alice\"の出現回数: %d\n", count);
    return 0;
}
