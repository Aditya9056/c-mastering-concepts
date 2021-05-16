#include <stdio.h>

int main() {
    // GCD
    int a1, b1, x;
    scanf("%d", &a1);
    scanf("%d", &b1);
    
    // GCD(a,b) = gcd(b, a%b)
    //EGCD
    //#s = s1 - s2*q, #t= t1 - t2*q
    egcd(34, 43);
    return 0;
}

int egcd(int a, int b){
    int rem = 0, quo = 0, s, t, s1 = 1, s2 = 0, t1 = 0, t2 = 1;
    
    while( b!=0 ){
        
        quo = a/b;
        rem = a%b; // rem = 2 // rem=0
        
        printf("Quo is %d \n\n", quo);
        
        s = s1 - s2*quo;
        t = t1 - t2*quo;
        
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
        
        a = b; // a = 10 // a = 2
        b = rem; // b =2 // b =0
    }
    s = s1;
    t = t1;
    
    
    printf("S is %d, T is %d \n \n",s, t);
    
    printf("GCD is %d, b is %d and rem is %d",a, b, rem);
}