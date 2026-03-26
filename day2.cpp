// ques 1
// #include<iostream>
// using namespace std;
// int main(){
//     float num1, num2;
//     cout<<"Enter number1: ";
//     cin>>num1;
//     cout<<"Enter number2: ";
//     cin>>num2;
//     while(1){
//     char operation;
//     cout<<"Enter operation (+,-,*,/,% or q to quit): ";
//     cin>>operation;
//     if(operation=='q'){
//         break;
//     }
//     switch(operation){
//         case '+': cout<<num1+num2<<endl;break;
//         case '-': cout<<num1-num2<<endl;break;
//         case '*': cout<<num1*num2<<endl;break;
//         case '%': cout<<int(num1)%int(num2)<<endl;break;   // % works for integer only
//         case '/': if(num2==0){
//             cout<<"Cannot divide by zero";
//         }else{
//             cout<<num1/num2<<endl;
//         }
//         break;
//         default: cout<<"Invalid Operation"<<endl;
                
                   
//     }
// }
// cout<<"Calculator closed"<<endl;
//     return 0;
// }


//ques 2
// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter marks out of 100: ";
//     cin>>marks;
//     string grade;
//     if(marks>=90. && marks<=100){
//         grade = "A";
//     }else if(marks>=80 && marks<90){
//         grade = "B";
//     }else if(marks>=70 && marks<80){
//         grade = "C";
//     }else if(marks>=60 && marks<70){
//         grade = "D";
//     }else if(marks>=50 && marks<60){
//         grade = "E";
//     }else if(marks>=40 && marks<50){
//         grade = "Pass";
//     }else if(marks<40){
//         grade = "Fail";
//     }
//     cout<<"Grade: "<<grade<<endl;
//     return 0;
// }


//ques3
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(num%2==0 && num>0){
//         cout<<num<<" is an even and positive"<<endl;
//     }else if(num%2!=0){
//         cout<<num<<" is odd"<<endl;
//     }else{
//         cout<<num<<" is negative"<<endl;
//     }
//     return 0;
// }