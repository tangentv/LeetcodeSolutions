class Solution {
public:

bool matchSymbol(char a, char b)
{
    if(a == ')' && b == '(') return true;
    if(a == '}' && b == '{') return true;
    if(a == ']' && b == '[') return true;
    return false;
};

bool isValid(string s) {
std::stack<char> ip;

    int length = s.length();

    for(int i = 0; i < length; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            ip.push(s[i]);
        }
        else
        {
            if(ip.empty()) return false;

            char top = ip.top();
            if(!matchSymbol(s[i], top)){
                return false;
            }
            ip.pop();
        }
    }

    return ip.empty();
}
};

