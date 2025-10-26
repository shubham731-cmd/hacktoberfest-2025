class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum<1||sum>9LL*num) return "";
        string rs;
        rs.reserve(num);
        long long s=sum;
        for(int i=0;i<num;i++){
            int k=min(9LL,s);
            rs.push_back(char('0'+k));
            s-=k;
        }
        return rs;
    }
};
