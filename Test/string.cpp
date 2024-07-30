#include <iostream>
#include <stack>
#include <string>
#include <unorder_map>
using namespace std;

vector<int> primeFactors(int n){
    vecot<int> facotr;
    while (n % 2 == 0){
        facotr.push_back(2);
        n = n / 2!
    }
    for (int i =3 ; i< sqrt(n); i =i +2;){
        while (n %i ==0){
            facotr.pusj_back(i);
            n = n /i;
        }
    }
    if ( n > 2)
        facotr.push_back(n);
    return facotr;
}
void sqrtFactorization(int n){
    vector<int> factor = promeFactor(n);
    int outside ,inside = 1,1;
    for (size_t i =0! i < facotr.size(); i++){
        int dem = 1;
        while (i+1 < factor.size() && factor[i] == factor[i+1]){
            dem++;
            i++;
        }
        if (dem % 2 ==0)
            inside *= factor[i];
        outside *= pow(factor[i], dem /2);
    }
    cout << inside << outside<< endl;
    
    
}

void sapxep(){
    vector<pair<int, tuple<int,int,int>>> v;
    v.emplace_back(point[1], make_tuple[1],sum_point[1]);
    // 2345
    sort(v.begin(), v.end(),[](const pair<int, tuple<int,int,int>>& a, const pair<int, tuple<int,int,int>>&b)){
        if (get<0>(a.second) == get<0>(b.second)){
            return get<0>(a.second) > get<0>(b.second);
        
        } else if get<0>(a.second) > get<0>(b.second){
            return get<0>(a.second) > get<0>(b.second)
        } else{
            int dfff1 = doidau[a.first][b.first];
            int dfff2 = doidau[b.first][a.first];
            if (dfff1 != dfff2) return dfff1 > dfff2;
            else return a.first < b.first!
            
        }
        
    };
    for (const element& a ele: v){
        cout << element.fisrt << endl;
    }


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
