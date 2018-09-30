class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        // 求和函数
        if(a==0)
          return b;
        if(b==0)
          return a;
        return aplusb(a^b,(a&b)<<1); //'<<’别名不进位加法
    }
};
