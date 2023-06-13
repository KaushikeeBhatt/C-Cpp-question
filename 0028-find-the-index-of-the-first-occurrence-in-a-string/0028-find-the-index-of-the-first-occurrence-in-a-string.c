int strStr(char * haystack, char * needle) {
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);

    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j;
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break; 
            }
        }
        if (j == needleLen) {
            return i; 
        }
    }
    return -1; 
}

 