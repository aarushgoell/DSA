 void return_palindromes(int start,int len, vector<int>& countfreq,string ans,char odd,vector<string>& palindromes){
	            
	            
	            if(start > len){
	                
	                string revstring = "";
	                for(int i = ans.length() - 1;i>=0;i--){
	                    revstring += ans[i];
	                }
	                
	                if(odd != ' '){
	                    ans += odd;
	                }
	                
	                ans += revstring;
	                palindromes.push_back(ans);
	                return;
	                
	            }
	            
	            for(int i = 0;i<26;i++){
	                int freq = countfreq[i];
	                if(freq > 0){
	                        countfreq[i] = countfreq[i] - 1;
	                        char ch = 'a' + i;
	                        return_palindromes(start + 1,len,countfreq,ans + ch,odd,palindromes);
	                        countfreq[i] = freq;
	                        
	                }
	            }
	        
	    }
	
		vector<string> all_plaindromes(string s)
		{   
		    vector<string> palindromes;
		    int n = s.length();
		    
		    vector<int> countfreq(26,0);
		    for(int i = 0;i<n;i++){
		        countfreq[s[i] - 'a']++;
		    }
		    
		    char odd = ' ';
		    int countoddstrings = 0;
		    string unique = "";
		    int len = 0;
		    for(int i = 0;i<26;i++){
		        
		            if(countfreq[i] > 0){
		                
		           if(countfreq[i] % 2 == 1){
		               countoddstrings++;
		               odd = char('a' + i);
		           }
		            
		            countfreq[i] = countfreq[i]/2;
		            len += countfreq[i];
                 
		            }

		    }
		    
		    if(countoddstrings > 1)return palindromes;
		    
		    string ans= "";
		    return_palindromes(1,len,countfreq,ans,odd,palindromes);
		    
		    return palindromes;
		    
		    
		}