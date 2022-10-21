class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set <string> st;
        for(int i=0;i<emails.size();i++){
             size_t found = emails[i].find("@");
            string z;
            for(int j=0;j<found;j++){
                if(emails[i][j] == '.' ){
                    continue;
                }
                else if(emails[i][j] == '+'){
                    break;
                }
                else{
                    z+=emails[i][j];
                }
            }
            for(int j=found;j<emails[i].size();j++){
                 z+=emails[i][j];
            }
            st.insert(z);
        }
        return st.size();
    }
};

//
For each email address in emails, clean up the local name, append the domain name, and add the cleaned up email to a set.

Return the size of the set.

int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> st;
    for(string &email : emails) {
        string cleanEmail;
        for(char c : email) {
            if(c == '+' || c == '@') break;
            if(c == '.') continue;
            cleanEmail += c;
        }
        cleanEmail += email.substr(email.find('@'));
        st.insert(cleanEmail);
    }
    return st.size();
}