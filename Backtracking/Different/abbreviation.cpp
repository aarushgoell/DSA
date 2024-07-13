#include <bits/stdc++.h> 


    void giveAbbr(int index,vector<string>& allAbbr,string ans,int count,string & str){

        if(index == str.length()){
            if(count>0){
                allAbbr.push_back(ans + to_string(count));
            }
            else{
                allAbbr.push_back(ans);
            }
            return;
        }




        if(count > 0){
            giveAbbr(index+1,allAbbr,ans+to_string(count)+str[index],0,str);
        }
        else{
        giveAbbr(index+1,allAbbr,ans + str[index],0,str);
        }


        giveAbbr(index + 1, allAbbr, ans, count + 1, str);

    }


                                          




vector < string > findAbbr(string & str) {


    vector<string> allAbbr;

    giveAbbr(0,allAbbr,"",0,str);
    sort(allAbbr.begin(),allAbbr.end());

    return allAbbr;





}