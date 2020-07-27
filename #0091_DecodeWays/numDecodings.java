public class Solution {
    public int numDecodings(String s) {
        int n = s.length();
        if (n == 0) return 0;

        int[] record = new int[n+1];
        record[n]  = 1;
        record[n-1] = s.charAt(n-1) != '0' ? 1 : 0;

        for (int i = n - 2; i >= 0; i--)
            if (s.charAt(i) == '0') continue;
            else record[i] = (Integer.parseInt(s.substring(i,i+2))<=26) ? record[i+1]+record[i+2] : record[i+1];

        return record[0];
    }
}
