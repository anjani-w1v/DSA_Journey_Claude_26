//ques 1
// #include <iostream>
// using namespace std;
// int main(){
//     string user;
//     cout<<"Enter string: ";
//     getline(cin, user);      //cin --> after space doesn't read word(its stops after space)...but getline --> reads full sentence even after space 
//     cout<<"Length: "<<user.length()<<endl;
//     cout<<"First Character: "<<user[0]<<endl;
//     cout<<"Last Character: "<<user[user.length() - 1]<<endl;
//     int sumV=0, sumC=0, space=0;
//     for(int i=0; i<user.length(); i++){
//         char ch = tolower(user[i]);
//         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//             sumV++;
//         }else if(ch==' '){
//             space++;
//         }else if(isalpha(ch)){
//             sumC++;
//         }
//     }
//     cout<<"Vowels: "<<sumV<<endl;
//     cout<<"Consonants: "<<sumC<<endl;
//     cout<<"Space: "<<space<<endl;
//     return 0;
// }

//ques2
// #include<iostream>
// using namespace std;
// int main(){
//     string user;
//     cout<<"Enter string: ";
//     getline(cin, user);
//     string original = user;
//     int left = 0;
//     int right = user.length()-1;
//     //cout<<user.substr(user.length()-1,);
//     while(left<right){              //two pointer technique
//         char temp = user[left];
//         user[left] = user[right];
//         user[right] = temp;

//         left++;
//         right--;
//     }
//     cout<<"Reversed string: "<<user<<endl;
//     if(original == user){
//         cout<<"It is a Palindrome"<<endl;
//     }else{
//         cout<<"Not a palindrome"<<endl;
//     }
//     return 0;
// }

//ques3
// #include<iostream>
// using namespace std;
// int main(){
//     string strFull;
//     cout<<"Enter sentence: ";
//     getline(cin, strFull);
//     int spaces = 0;
//     for(int i=0; i<strFull.length(); i++){
//         if(strFull[i] == ' '){
//             spaces++;
//         }
//     }
//     int words = spaces + 1;
//     cout<<"Number of words: "<<words<<endl;
//     return 0;
// }


//ques4
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     int shift;
//     cout<<"Enter text: ";
//     getline(cin, str);
//     cout<<"Enter shift: ";
//     cin>>shift;
//     for(int i=0; i<str.length(); i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i] = (str[i] - 'a' + shift) % 26 + 'a';
//         }
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i] = (str[i] - 'A' + shift) % 26 + 'Z';
//         }
//     }
//     cout<<"Encoded: "<<str<<endl;
//     return 0;

// }