
char flip(char ch){
    return (ch == '0') ? '1' : '0';
}
int abc(string S, char expected){
    int count=0;
    int n = S.size();
    for(int i=0;i<n;i++){
        if(S[i] != expected)
            count++;
        expected = flip(expected);
    }
    return count;
}
int minFlips (string S){
    int a = abc(S, '0');
    int b = abc(S, '1');
    return min(a,b);
}
