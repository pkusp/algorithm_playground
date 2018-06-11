/*
@auther: pkusp
@filename: hot.cpp

*/

#include<iostream>
using namespace std;
int main(int argc, char * argv[]){
    return 0
}

/* single number 2n+1 */
int SingleNumber(int A[]){
    if(A.length == 0){
        return 0;
    }
    int temp = A[0];
    for(int i = 1; i < A.length; i++){
        temp = temp^A[i]
    }
    return temp;
}

/* single number 2n+2 */
int SingleNumber_2(int num_arr[]){
    return 0;
}

def 