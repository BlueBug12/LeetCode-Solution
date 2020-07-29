# [93. Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a string containing only digits, restore it by returning all possible valid IP address combinations.</p>

<p>A valid IP address consists of exactly four integers&nbsp;(each integer is between 0 and 255) separated by single points.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> "25525511135"
<strong>Output:</strong> <code>["255.255.11.135", "255.255.111.35"]
</code></pre>
</div></div>

## Solution
My solution is based on the idea if DFS. It picks a valid number as a digit in IP at each iteration. If it can find four numbers whose total length is equal to the input string, that is one of the valid IP.

_**Time complexity: O(3^n)**_ (not sure, maybe much lower)

## Summary
This problem can be solved in _**O(n^4)**_. That see the ingenious method provided by [mitbbs8080
](https://leetcode.com/problems/restore-ip-addresses/discuss/30972/WHO-CAN-BEAT-THIS-CODE):
```cpp
// c++  code
   vector<string> restoreIpAddresses(string s) {
       vector<string> ret;
       string ans;

       for (int a=1; a<=3; a++)
       for (int b=1; b<=3; b++)
       for (int c=1; c<=3; c++)
       for (int d=1; d<=3; d++)
           if (a+b+c+d == s.length()) {
               int A = stoi(s.substr(0, a));
               int B = stoi(s.substr(a, b));
               int C = stoi(s.substr(a+b, c));
               int D = stoi(s.substr(a+b+c, d));
               if (A<=255 && B<=255 && C<=255 && D<=255)
                   if ( (ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).length() == s.length()+3)
                       ret.push_back(ans);
           }    

       return ret;
   }
```
