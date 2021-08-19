#include <bits/stdc++.h>
using namespace std;

bool check(string& s){
    string t = "@gmail.com";
    if (s.size() < t.size()) 
    return false;
    for (int i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0; i--, j--) {
        if (s[i] != t[j]) 
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
     vector<string> mail;
    for(int i = 0; i < n; i++){
        string ID,gmail;
        cin >> ID>>gmail;
        if(check(gmail)){         
        mail.push_back(ID);
        }
    }
    sort(mail.begin(), mail.end());
    for (int i = 0; i < mail.size(); ++i)
        cout << mail[i] << endl;
    return 0;
}

