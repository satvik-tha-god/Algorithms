int isPlaindrome(char S[])
{
    int n = strlen(S);
    char C[n];
    for(int i=0;i<n;i++){
        C[i]=S[i];
    }
    for(int i=0;i<n/2;i++){
        int a=S[i];
        S[i]=S[n-i-1];
        S[n-i-1]=a;
    }
    int x=1;
    for(int i=0;i<n;i++){
        if(S[i] != C[i]){
            x=0;
        }
    }
    return x;
}

//OR

class Solution {
Public:
    int isPalindrome(char str[]) {
      int l = 0;
      int h = strlen(str) - 1;
      while (h > l) {
        if(str[l++] != str[h--])
                  return 0;
        return 1;
      }
    }
};
