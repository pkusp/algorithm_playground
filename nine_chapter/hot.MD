# hot
>2018.06.11
```CPP
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
```
```C
/* single number 2n+2 */
// 10011010 x
// 01100110 -x (reverse + 1)
// 00000010 x & (-x) --> first '1' right
int SingleNumber_2(int num_arr[]){
    return 0;
}
```
```python
# sinlge number 2n+2
def SingeleNumber_2(num_list:list)->list:
    # 10110100  x
    # 10110011  x-1
    # 00000111  x^(x-1) 
    # 00000100  x^(x-1) - (x-1) = first(right) '1' |-> stupid method
    # solution: a^b different pos equal 1, find the pos value,then AND it 
    a_xor_b = 0
    for num in num_list:
        a_xor_b = a_xor_b ^ num
    sep_value = a_or_b ^ (a_xor_b - 1) - (a_xor_b - 1)  # a_or_b^(-a_or_b) was better
    for num in num_list:
        if num & sep_value == 0:
            list_a.append(num)
        else:
            list_b.append(num)
    result = [0,0]
    for num in list_a[1:]:
        result[0] ^= num
    for num in list_b[1:]:
        result[1] ^= num
    return result

``` 