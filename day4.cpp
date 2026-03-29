//ques 1 & 2
// #include <iostream>
// using namespace std;

//     bool isEven(int n){
//         return n%2==0;  
//     }

//     bool isPrime(int n){
//         if(n<=1) return false; 
//         for(int i=2; i*i<=n; i++){
//             if(n%i==0) return false;
//         }
//         return true;
//     }

//     int power(int base, int exp){
//         // return base^exp;       wrong way in c++ '^' this means XOR
//         int result=1;
//         for(int i=0; i<exp; i++) {
//             return result*result;
//         }   
//         return result;            
//     }

//     int absolute(int n){
//         if(n<0) return -n;
//         return n;
//     }

// int main(){
//     // cout<<isEven(5)<<endl;
//     // cout<<isPrime(7)<<endl;
//     // cout<<power(3,5)<<endl;
//     // cout<<absolute(-9)<<endl;
//     for(int i=1; i<=10; i++){
//         int n;
//         cout<<"Enter number"<<i<<": ";
//         cin>>n;
//         cout<<isEven(n)<<endl;
//         cout<<isPrime(n)<<endl;
//     }
// }



//ques 3
// #include<iostream>
// using namespace std;

//     int factorial(int n){
//         if(n==0 || n==1) return 1;
//         return n * factorial(n-1);
//     }
    
//     int fibonacci(int n){
//         if(n==0) return 0;
//         if(n==1) return 1;
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// int main(){
//     cout<<factorial(5)<<endl;
//     cout<<fibonacci(6)<<endl;
// }

