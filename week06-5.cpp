class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; //放答案
        stringstream ss(text); //把string轉成cin cout
        string word1,word2,word3;
        ss>>word1; //像cin>>word1的方法 讀資料
        ss>>word2;
        while(ss>>word3){
            if(word1==first && word2==second) ans.push_back(word3); //放答案
            word1=word2;
            word2=word3;
        }
        return ans;
    }
};
