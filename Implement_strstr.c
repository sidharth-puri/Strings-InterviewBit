/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int strStr(const char* text, const char* str) {
    int l=strlen(str);
    int textl=strlen(text);
    int i=1;
    int  j=0;
    int lps[l];
    lps[0]=0;
    if(l>textl)
    {
        return -1;
    }
    if(l==textl && l==1 && textl==1 && str[0]==text[0]){
        return 0;
    }
    while(i<l)
    {
        if(str[i]==str[j])
        {
            j++;
            lps[i]=j;
            i++;
            
        }
        else 
        {
            if(j==0)
            {
                lps[i]=0;
                i++;
            }
            else
            {
                j=lps[j-1];
            }
        }
    }
  
    i=0,j=0;
    int a;
    while(i<textl)
    {
        if(text[i]==str[j])
        {
            j++;
            i++;
        }
        if(j==l)
        {
            a=i-j;
            break;
        }
        if(i<textl && text[i]!=str[j])
        {
            if(j!=0)
            j=lps[j-1];
            else
            i++;
        }
    }
    if(a==0)
    {
       return -1;
    }
   else
    {
        return a;
    }
}
