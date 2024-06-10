#include <iostream>
#include <stack>
#include <string>
#include <unorder_map>
using namespace std;


bool is_Valid(string a){
    stack<char> stack;
    unorder_map<char, char> mapping;

    mapping(')')  ='(';
    mapping(']')  ='[';
    mapping('}')  ='{';

    for(char c:a){
        if(mapping.find(c) != mapping.end()){
            char top_element = stack.empty() ? "#" : stack.top();
            stack.pop();
            if(top_element != mapping[c]) return false;

        } else{
            stack.push(c);
        }
    }
    return stack.empty();
}

int main(){
    string input;
    cin >> int;
    cout << ( is_Valid(input) ? "true" : "false" ) << endl;
    
    return 0;
}