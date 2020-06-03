/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* intToRoman(int A) {
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    char** sym = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;
    char s[];
    while(number>0) 
    { 
      int div = number/num[i]; 
      number = number%num[i]; 
      while(div--) 
      { 
        strcat(s,sym[i]);
      } 
      i--; 
    } 
    return s;
}
