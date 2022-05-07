// HASHMAP IMPORTANT QUESTIONS

// TWO SUM

vector<int> twoSum(vector<int>& array, int target) {
        unordered_map<int, int>indices ;
        for (int i = 0; i < array.size(); i++) {
            if (indices.find(target - array[i]) != indices.end()) {
                return {indices[target - array[i]], i};
            }
            indices[array[i]] = i;
        }
        return {};
    }


// SUM OF UNIQUE ELEMENTS

 int sumOfUnique(vector<int>& arr) {
        int sum = 0;
        unordered_map<int, int> hashmap;
        
        for (int number: arr) {
            hashmap[number]++;
        }
       for(auto element : hashmap){
           if(element.second==1)
            sum=sum+element.first;
       }
        return sum;
    }
    
// repeated characters

vector<char>repeated_char(string str){
    unordered_map<char,int>char_present;
    vector<char>answer;
    for(int i=0;i<str.length();i++){
        if(char_present[str[i]]==1)
            answer.push_back(str[i]);
        char_present[str[i]]++;
    }
    return answer;
}
    
// K repeated words in a string

vector<string>k_repeated_words(string str,int k){
    string curr_str="";
    vector<string>answer;
    unordered_map<string,int>string_freq;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1] && str[i]==' ')
            continue;
            
        if(str[i]==' ' || str[i]=='\0')
            {
                string_freq[curr_str]++;
                 cout<<curr_str<<" "<<string_freq[curr_str]<<endl;
                curr_str="";
                i++;
            }
            curr_str=curr_str+str[i];         
    }
    string_freq[curr_str]++;
    for(auto element: string_freq)
        {
            if(element.second==k)
                answer.push_back(element.first);
        }
        return answer;
}
