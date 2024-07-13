void returnPermutations(int index,vector<int>& freq,vector<string>& allpermutations,int n,string ans){
	        
	        
	    if(index == n){
	        allpermutations.push_back(ans);
	        return;
	    }
	    
	    for(int i = 0;i<26;i++){
	        if(freq[i]>0){
	            char ch = 'a' + i;
	            freq[i]-= 1;
	            returnPermutations(index+1,freq,allpermutations,n,ans+ch);
	            freq[i]+= 1;
	        }
	    }
	    
	    
	    }
	
	
	
		vector<string>find_permutation(string S)
		{   
		    vector<string> allpermutations;
		    int n = S.length();
		    vector<int> freq(26,0);
		    for(char ch: S){
		        freq[ch - 'a']++;
		    }
		    returnPermutations(0,freq,allpermutations,n," ");
		    
		    return allpermutations;
		    
		    
		    
		    
		    
		    
		}
};