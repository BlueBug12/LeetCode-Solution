class Solution {
    public int myAtoi(String str) {
        str = str.trim();
        int res = 0;
        int n = str.length();
        if(n == 0) {
            return res;
        }
        char first = str.charAt(0);
        if(first != '+' && first != '-' && (first < '0' || first > '9')){
            return res;
        }
        boolean isNeg = first == '-';
        for(int i=0;i<n;i++){
            char c = str.charAt(i);
            if(c < '0' || c > '9'){
                if(i == 0){
                    continue;
                }
                return isNeg ? -1*res : res;
            }
            int val = c - '0';
            if(res > (Integer.MAX_VALUE-val)/10){
                return isNeg ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            }
            res = res*10 + val;
        }
        return isNeg ? -1*res : res;
    }
}
