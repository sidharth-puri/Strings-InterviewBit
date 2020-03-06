int Solution::lengthOfLastWord(const string str) {
     int count = 0; 
    int flag = 0;
    int i,j=0;
    while(str[j]!='\0')
    {
        j++;
    }
    for ( i = j - 1; i >= 0; i--) { 
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) { 
            flag = 1; 
            count++; 
        } 
        
        else { 
            if (flag == 1) 
                return count; 
        } 
    } 
    return count; 
}
