#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    scanf("%d", &T);
    char S[T][10001];
    
    int i;
    for(i=0; i<T; i++) {
        scanf(" %[^\n]", S[i]);
    }
    
    for(i=0; i<T; i++) {
        char evenTxt[10000];
        char oddTxt[10000];
        int oddCnt = 0, evenCnt = 0;
        
        for(int y=0; y<strlen(S[i]); y++) {
            if(y%2) {
                //odd
                oddTxt[oddCnt] = S[i][y];
                oddCnt++;
            } else {
                //even
                evenTxt[evenCnt] = S[i][y];
                evenCnt++;
            }
        }
        oddTxt[oddCnt] = '\0';
        evenTxt[evenCnt] = '\0';
        
        printf("%s %s\n", evenTxt, oddTxt);
    }
    return 0;  
}
