
bool isValid(char * s){
    int len=strlen(s), iSs=1;
    char ss[len]; ss[0]=*s;

    for(int i=1; i<len; i++){
        if(iSs > 0 && ((s[i] == ')' && ss[iSs-1] == '(')
                    || (s[i] == ']' && ss[iSs-1] == '[')
                    || (s[i] == '}' && ss[iSs-1] == '{'))
        ) { iSs--; continue; }
        ss[iSs] = s[i]; iSs++;
    }

    return iSs==0;
}