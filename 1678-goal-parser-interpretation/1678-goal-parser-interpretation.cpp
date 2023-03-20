class Solution {
public:
    string interpret(string command) {
       string str;
        int i=0;
        while(i<command.size())
        {
            if(command[i]=='('&&command[i+1]==')')
            {
                str=str+"o";
                i=i+2;
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')')
            {
                str=str+"al";
                i=i+4;
            }
            else
            {
                str=str+command[i];
                i++;
            }
        }
        return str;
        
    }
};