//ques 1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter Element"<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"Array: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }

//     cout<<"Sum: "<<sum<<endl;
//     float avg = float(sum)/n;
//     cout<<"Average: "<<avg<<endl;

//     int maxVal = arr[0];
//     int minVal = arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i]>maxVal) maxVal = arr[i];
//         if(arr[i]<minVal) minVal = arr[i];
//     }
//     cout<<"Maximum element: "<<maxVal<<endl;
//     cout<<"Minimum element: "<<minVal<<endl;
//     return 0;
// }


//ques2 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter Element"<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"Array: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int left = 0, right = n-1;
//     while(left<right){
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     cout<<"Reversed Array: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" "<<endl;
//     }
// }


//ques3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter Element"<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"Array: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int num;
//     cout<<"Enter number to be searched: ";
//     cin>>num;
//     bool found = false;
//     for(int i=0; i<n; i++){
//         if(arr[i]==num){
//             cout<<"found at index "<<i<<endl;
//             found = true;
//             break;
//         }
//     }
//     if(!found)
//         cout<<"not found"<<endl;

//     return 0;
// }


//ques4
// #include <iostream>
// using namespace  std;
// int main(){
//     int matrix[3][3];
//     int sum=0;
//     cout<<"Enter elements of 3*3 matrix: \n";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<"Element ["<<i<<"]["<<j<<"] : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"\nMatrix:\n";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<matrix[i][j]<<" ";
//             sum += matrix[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<"\nSum of all elements = "<<sum<<endl;
//     return 0;
// }
