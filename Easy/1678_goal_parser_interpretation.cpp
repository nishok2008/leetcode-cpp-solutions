class Solution {
public:
    string interpret(string command) {
        string answer="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='(' && command[i+1]== ')'){
                answer+='o';
                i++;
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==  ')'){
                answer+="al";
                i+=3;
            }
            else{
            answer+='G';
            }

        }
        return answer;
        
    }
};