/*
Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.
Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.
 

Example 1:

Input: 
N = 5, K = 4
dict = {"baa","abcd","abca","cab","cad"}
Output:
1
Explanation:
Here order of characters is 
'b', 'd', 'a', 'c' Note that words are sorted 
and in the given language "baa" comes before 
"abcd", therefore 'b' is before 'a' in output.
Similarly we can find other orders.
*/
class Solution{
    public:
    vector<int>topsort(set<int>graph[],int n){
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it : graph[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int>ans;
        while(q.size()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it : graph[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return ans;
    }
    string findOrder(string dict[], int N, int K) {
        set<int>graph[K];
        for(int i=0;i<N-1;i++){
            string val1 = dict[i];
            string val2 = dict[i+1];
            
            for(int j=0;j<min(val1.length(),val2.length());j++){
                if(val1[j]!=val2[j]){
                	
                    graph[val1[j]-'a'].insert(val2[j]-'a');
                    break;
                }
            }
        }
        vector<int>ans = topsort(graph,K);
        string str="";
        for(auto it : ans)
        str+=((char)(it+'a'));
        return str;
    }
};