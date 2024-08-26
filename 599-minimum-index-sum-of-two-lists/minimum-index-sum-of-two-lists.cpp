class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       map<string,int> mp;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]){
                    mp[list1[i]]=i+j;
                }
            }
        }
        int min=INT_MAX;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(min>it->second){
                min=it->second;
            }
        }
        vector<string>result;
for(auto it=mp.begin(); it!=mp.end(); it++) {
            if(it->second == min)
                result.push_back(it->first);
        }

        return result;

    }
};