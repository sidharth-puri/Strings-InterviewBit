int Solution::isPalindrome(string A) {
    int i;
    for(i=0;i<A.length();i++){
       if(A[i]>='A' && A[i]<='Z'){
           A[i]=A[i]+'a'-'A';
       }
    }
    int l=0,r=A.length()-1;
    while(l<r){
        if(!((A[l]>='a' && A[l]<='z' )||(A[l]>='0' && A[l]<='9' ) )){
            l++;
        }
        else if(!((A[r]>='a' && A[r]<='z' )||(A[r]>='0' && A[r]<='9' ) )){
            r--;
        }
        else if(A[l]!=A[r]){
            return 0;
        }
        else {
        l++;
        r--;
        }
    }
    
    return 1;
}
