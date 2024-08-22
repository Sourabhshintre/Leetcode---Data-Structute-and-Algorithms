class Solution {
    public int findComplement(int num) {
        int m =0; int t=num;
        while(t!=0){
            t>>=1;
            m = (m<<1) | 1;
        }
        return ((~num)&m);
    }
}