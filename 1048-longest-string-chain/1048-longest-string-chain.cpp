class Solution {
public:
    int n;
    int t[1001][1001];
    
    bool precedessor(string& prev, string& curr){
        int M = prev.size();
        int N = curr.size();
        
        int i=0,j=0;
        
        if(M >= N || N-M != 1)
            return false;
        
        while(i<M && j<N){
            if(prev[i]==curr[j]){
                i++;
            }
            j++;
        }
        return i==M;
    }
    
    int lis(vector<string>& words, int prev, int curr){
        
        if(curr == n) return 0;
        
        if(prev!=-1 && t[prev][curr]!=-1){
            return t[prev][curr];
        }
        
        int taken = 0;
        
        if(prev==-1 || precedessor(words[prev], words[curr])){
            taken = 1 + lis(words, curr, curr+1);
        }
        int not_taken = lis(words, prev, curr+1);
        
        if(prev!=-1){
            t[prev][curr] = max(taken, not_taken);
        }
        
        return max(taken, not_taken);
            
    }
    
    static bool myFunction(string& s1, string& s2){
        return s1.length() < s2.length();
    }
        
    int longestStrChain(vector<string>& words) 
    {
        n = words.size();
        memset(t,-1,sizeof(t));
        sort(begin(words),end(words), myFunction);
        return lis(words, -1, 0);
    }
};