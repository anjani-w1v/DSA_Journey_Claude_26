//ques 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum += i;
//     }
//     cout<<"Sum: "<<sum<<endl;
//     return 0;
// }

//ques2
// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i = 1; i <= 10; i++){
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//     }
    // int i = 1;
    // while(i<=10){
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    //     i++;
    // }
//     int i = 1;
//     do{
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//         i++;
//     }while(i<=10);
//     return 0;
//  }

//ques3
// #include<iostream>
// using namespace std;
// int main(){
//     int num, rev = 0;
//     cout<<"Enter number: ";
//     cin>>num;
//     while(num != 0){
//         int digits = num % 10;
//         rev = rev * 10 + digits;
//         num = num/10;
//     }
//     cout<<"Reversed: "<<rev<<endl;
//     return 0;
    
// }

//ques 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<'*'<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }