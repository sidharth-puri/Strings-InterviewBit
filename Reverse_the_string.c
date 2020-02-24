/**
 * @input A : String termination by '\0'
 * 
 * @Output string. Make sure the string ends with null character
 */
 void reverse(char* A,int  a, int b){
     while(a<=b){
        char temp=A[a];
        A[a]=A[b];
        a++;
        A[b]=temp;
        b--;
     }
}
char* solve(char* A) {
     int i;
    int start=0;
    int end=strlen(A)-1;

    for(i=0;i<strlen(A);i++){
        end=i;
        if(A[i]==' '){
            reverse(A,start,end-1);
            start=end+1;
        
        }
        if(i==strlen(A)-1){
            
           reverse(A,start,end);
        }
    }
    reverse(A,0,end);
    return A;
}
