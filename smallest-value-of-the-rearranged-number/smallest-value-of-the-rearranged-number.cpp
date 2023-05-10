class Solution {
public:
    long long smallestNumber(long long num) {
        if(num<0)
        {
         num=-num;
         string s=to_string(num);
         sort(s.begin(),s.end(),greater<char>());
         num=0;
         for(int i=0;i<s.size();i++){
             num=num*10+s[i]-'0';
         }
         num=-num;
        }
        else if(num==0){
          return 0;
        }
        else{
            char secondgreat='9';
            string s=to_string(num);
            for(int i=0;i<s.size();i++){
                if(s[i]>'0'&&s[i]<secondgreat){
                    secondgreat=s[i];
                }
            }
            size_t f=s.find(secondgreat);
            s.erase(s.begin()+f);
            sort(s.begin(),s.end());
            cout<<s;
            s=secondgreat+s;
            cout<<" "<<s;
             num=0;
         for(int i=0;i<s.size();i++){
             num=num*10+s[i]-'0';
         }

        }
        return num;
    }
};