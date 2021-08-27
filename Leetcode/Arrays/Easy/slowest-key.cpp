class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ch = keysPressed[0];
        int time = releaseTimes[0];

        for(int i=1;i<releaseTimes.size();i++){
            if(releaseTimes[i]-releaseTimes[i-1]>=time){
                if(releaseTimes[i]-releaseTimes[i-1]==time){
                    ch = max(ch, keysPressed[i]);
                }
                else{
                    time = releaseTimes[i]-releaseTimes[i-1];
                    ch = keysPressed[i];
                }
            }
        }
        return ch;
    }
};
