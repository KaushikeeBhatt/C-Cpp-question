int romanToInt(char * s){
    int result=0,n=1;
    for(int i= strlen(s)-1;i>=0;i--){ 
        char k;
        k=s[i];  
        switch(k){
            case 'I': n=1;break;
            case 'V':n=5;break;
            case 'X': n=10;break;
            case 'L':n=50;break;
            case 'C':n=100;break;
            case 'D':n=500;break;
            case 'M':n=1000;break;
            default: printf("enter number correctly"); return -1;
        }
        if (s[i]==s[i+1]){
            result=result+n;
        }
        else if(s[i] != s[i+1]){
            if (n>=result){
                result=result+n;
            }
            else if (n<result){
                result = result-n;
            }
        }

    }
    return result;
}    