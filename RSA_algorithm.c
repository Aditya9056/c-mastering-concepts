#include <stdio.h>
int rsa(int p, int q);
int gcd(int a, int b);
int egcd(int a, int b);

int main() {
    rsa(11, 13);
    return 0;
}

int rsa(int p, int q){
    int n, phi, e, d;
    
    //prime numbers
    n = p*q;
    printf("N value is %d \n", n);
    
    if(n%2 == 0){
        e = 2;
    } else {
        e = 1;
    }
    
    //phi
    phi = (p-1)*(q-1);
    printf("Phi value is %d \n", phi);
    
    //e value 1<e<phi and gcd(phi, e) = 1
    while( !(e>1 && e<phi  && gcd(phi, e) == 1) ){
        e++;
        // printf("E value is %d and phi is %d \n", e, phi);
    }
    
    printf("E value is %d \n", e);
    
    //to find d value d* e mod(%)phi = 1
    // s*phi + t*e = use Egcd(phi, e) here value of 't' will be 'd' value 
    
    d = egcd(60, 13);
    
    // if d>phi then d = d mod(%) phi or if d is -ve d = d + phi
    if( d>phi ){
        d = d%phi;
    } else if( d<phi ){
        d = d+phi;
    }
    printf("D value is %d \n", d);
    
    printf("Assuming M(plaintext size) = 31 \n");
    
    //Printing Public and Private Key
    printf("Public Key is {%d, %d} \nPrivate is {%d, %d} \n",e,n,d,n);
    
    //Encryption assuming m = 31 c = m^e(mod)n
    long int c, m = 31;
    c = m^e%n;
    printf("Encrypted value is %d \n", c);
    
    //Decryption assuming c = 4 m = c^d(mod)n
    m = (4^d)%n;
    printf("Decrpted value is %d \n", m);
}

int gcd(int a, int b){
    int rem = 0;
    
    while( b != 0 ){
        rem = a%b;
        a = b;
        b = rem;
    }

    return a;
}

int egcd(int a, int b){
    int rem = 0, quo = 0, s, t, s1 = 1, s2 = 0, t1 = 0, t2 = 1;
    
    while( b!=0 ){
        
        quo = a/b;
        rem = a%b;
        
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
    
    return t; //returning t's to be used as d's value for RSA
}