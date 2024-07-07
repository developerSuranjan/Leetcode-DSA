class Solution {
public:
    int passThePillow(int n, int time) {
        int currentpos=0, pass=1, curtime=0;
        while(curtime<=time){
            if(currentpos+pass>0 && currentpos+pass<=n){
                currentpos+=pass;
                curtime++;
            }else{
                pass*=-1;
            }
        }
        return currentpos;
    }
};
