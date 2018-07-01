/*
@auther: pkusp
@filename: hot.cpp

*/

#include<iostream>
using namespace std;
int main(int argc, char * argv[]){
    return 0;
}

/* single number 2n+1 */
vector<int> SingleNumber(vector<int> &A){
    if(A.size() == 0){
        return 0;
    }
    vector<int> temp = A[0];
    for(int i = 1; i < A.length; i++){
        temp = temp^A[i];
    }
    return temp;
}

/* single number 2n+2 */
int SingleNumber_2(int num_arr[]){
    return 0;
}

vector<>

