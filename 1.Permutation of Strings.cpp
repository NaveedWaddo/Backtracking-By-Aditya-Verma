// Optimale Approach : Backtracking
class Solution{
private:
    void permute(string ip , string op , vector<string>&ans){
        if(ip.size() == 0){
            ans.push_back(op);
            return;
        }
        
        unordered_set<char>st;
        for(int i=0; i<ip.size(); i++){
            if(st.find(ip[i]) == st.end()){
                string newIp = ip.substr(0,i) + ip.substr(i+1,ip.size());
                string newOp = op+ip[i];
                st.insert(ip[i]);
                
                permute(newIp , newOp , ans);
            }
        }
    }

public:
	vector<string>find_permutation(string S){
	    vector<string>ans;
	    permute(S , "" , ans);
	    return ans;
	}
};
