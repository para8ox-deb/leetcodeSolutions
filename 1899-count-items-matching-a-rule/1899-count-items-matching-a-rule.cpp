class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        // 0 - type
        // 1 - color
        // 2 - name
        int rule;

        if(ruleKey=="color")
            rule=1;
        else if(ruleKey=="type")
            rule=0;
        else
            rule=2;

        
        int counter=0;

        for(int i=0;i<items.size();i++){
            for(int j=0;j<items[i].size();j++){
                if(rule==1){
                    if(ruleValue==items[i][rule]){
                        counter++;
                        break;
                    }
                }
                else if(rule==0){
                    if(ruleValue==items[i][rule]){
                        counter++;
                        break;
                    }
                }
                else{
                    if(ruleValue==items[i][rule]){
                        counter++;
                        break;
                    }
                }
            }
        }

        return counter;
    }
};