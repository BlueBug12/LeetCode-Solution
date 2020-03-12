class Solution {
public:
    std::string getPermutation(int n, int k) {

        // Options is all the numbers we havn't used yet
        std::vector<char> options(n);
        std::string retval(n, 'x');

        // Storage of all the factorialks
        int *facts = new int[n + 1];
        facts[0] = 1;
        //Build the factorials, and build the topns
        for (int i = 1; i <= n; i++) {
            facts[i] = facts[i - 1] * i;
            options[i - 1] = '0' + i;
        }

        int idx;
        // k is 1 indexed, so reduce it to be 0 indx
        k--;

        // When listing out all the permutations of numbers n, the first number
        // is made up of n cycles of (n-1)! permutations, for a total of n! permutations
        // First, find which cycle your number is on
        // then subtract the size of all previous cycles to find your new k
        for (int i = 1; i <= n; i++) {
            idx = k / facts[n - i];
            retval[i - 1] = options[idx];
            //printf("k is %d idx is %d options[idx] is %c\n", k, idx, options[idx]);
            options.erase(options.begin() + idx);
            k -= idx * facts[n - i];
        }
        return retval;
    }
};
/*My original code
class Solution {
public:
    string getPermutation(int n, int k) {
        string v;
        for(int i=1;i<=n;++i){
            v.push_back(i+'0');
        }
        for(int i=1;i<k;++i){
            next_permutation(v.begin(),v.end());
            //cout<<v<<endl;
        }
        return v;
    }
};
*/
