// 1234
// 1234
// 1234
// 1234




//  #include <iostream>
//  using namespace std;
//  int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//  }


// ****
// ****
// ****
// ****



// #include <iostream>
//  using namespace std;
//  int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//  }




// ABCD
// ABCD
// ABCD
// ABCD

// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<n;j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }




// 123
// 456
// 789

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            cout<<num<<" "; 
//            num++;
//         }
//         cout<<endl;
//     }
//     cout<<"after pattern: "<<num<<endl;
// }


// ABC
// DEF
// GHI

// #include<iostream>
// using namespace std;
// int main(){
//      int n=3;
//      char ch='A';
//      for(int i=0;i<n;i++)
//      {
//         for(int j=0;j<n;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//      }
// }




// *
// **
// ***
// ****

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1
// 22
// 333
// 4444

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//              cout<<(i+1);
//         }
       
//          cout<<endl;
//     }
   
// }


// A
// BB
// CCC
// DDDD
// EEEEE 

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     char ch;
//     for(int i=0;i<n;i++)
//     {
//         ch='A'+i;
//         for(int j=0;j<i+1;j++)
//         {
//              cout<<ch;
            
//         }
//         cout<<endl;
//     }
// }



// 1
// 12
// 123
// 1234

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//      for(int j=1;j<=i+1;j++){
//         cout<<j;
//      }
//      cout<<endl;
//     }
// }




// 1
// 21
// 321
// 4321



// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//      for(int j=i+1;j>0;j--){
//         cout<<j;
//      }
//      cout<<endl;
//     }
// }



// 1
// 23
// 456
// 78910


// #include<iostream>
// using namespace std;
// int main(){
//     int num=1;
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++)
//         {

//         cout<<num<<" ";
//         num=num+1;
//         }

//     cout<<endl;
//     }
// }



// A
// BC
// DEF
// GHIJ


// #include<iostream>
// using namespace std;
//  int main(){
//      int n=4;
//      char ch='A';
//      for(int i=0;i<n;i++)
//      {

//         for(int j=0;j<i+1;j++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//      }
//  }


// A
// BA
// CBA
// DCBA

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         char ch='A'+i;
//         for(int j=0;j<=i;j++){
//         cout<<ch;
//         ch--;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++)
//     {
//         char ch='A'+i;
//         for(int j=0;j<=i;j++)
//         {
//             cout<<ch;
//             ch--;
//         }
//         cout<<endl;
//     }
// }


//Inverted triangle pattern
// 1111
//  222
//   33
//    4

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<(i+1)<<" ";
//         }
//     cout<<endl;
//     }
// }  


// AAAA
//  BBB
//   CC
//    D


// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             char ch='A'+i;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1


// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i-1;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1 ;j<=i+1;j++){
//             cout<<j;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n=8;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i-1;j++)
//         {
//             cout<<" ";       
//         }
//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }
//         for(int j=i;j>0;j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



//            *
//        *       *
//     *             *
//   *                  *
//     *              *  
//        *       *  
//            *  


#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<< "*";
        if(i !=0){
            //spaces
            for(int j=0;j<2*i-1;j++){
                cout<< " ";
            }
            cout<< "*";
        }
        cout<<endl;
        }
        for(int i=0;i<n-1;i++){
            //spaces
            for(int j=0;j<i+1;j++){
                cout<< " ";
            }
            cout<<"*";
            if(i !=n-2){
                for(int j=0;j<2*(n-i)-5;j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
    }
}