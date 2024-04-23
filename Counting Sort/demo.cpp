#include <iostream>
#include<bits/stdc++.h>

vector<int> countSort(vector<int>& inputArray)
{
    int N =  inputArray.size();
    int M=0;
    
    for(int i=0; i< N, i++){
        M = max(M, inputArray[i]);
    }
    
    vector<int> countArray(M+1, 0);
    
    for(int i=0; i< N, i++){
        countArray[inputArray[i]]++;
    }
    
    for(int i=1; i< N, i++){
        countArray[i]+= countArray[i-1];
    }
    
    vector<int> outputArray(N)
    
    for(int i=N-1; i>=0, i--){
        outputArray[countArray[inputArray[i]]  -1] =  inputArray[i];
    }
    return outputArray;
}

int main()
{
    vector<int> inputArray = {13,4,6,7,8,9,34,6,7,9,1}
    vector<int> outputArray =  countSort(inputArray);
    for(int i = 0; i< inputArray.size(); i++)
    {
        std:: cout << outputArray[i] << " ";
    }

    return 0;
}
