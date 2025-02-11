#include<iostream>
using namespace std;
int main(){

//+ve or -ve

//    int n=-45;
//    if(n>=0)
//    {
//     cout<<n<<" is positive number "<<endl;
//    }
//    else{
//     cout<<n<<" is negative number "<<endl;
//    }


//vote or not

//  int age;
//  cout<<"Enter your age : ";
//  cin>>age;
//  if(age>=18){
//     cout<<"You are eligible to vote."<<endl;
//  }else{
//     cout<<"you are not eligible to vote."<<endl;
//  }

//odd or even

// int n;
// cout<<"Enter a number: ";
// cin>>n;
// if(n%2==0){
//     cout<<n<<" is an even.\n";
// }else {
//     cout<<n<<" is an odd.\n`";
// }

//marks

//   int marks;
//   cout<<"enter mmarks : ";
//   cin>>marks;
//   if(marks>=90)
//   {
//     cout<<"A"<<endl;
//   }
//   else if(marks<90 && marks>=80){
//     cout<<"B"<<endl;
//   }
//   else if(marks<80 && marks>=70){
//     cout<<"C"<<endl;
//   }
//   else{
//     cout<<"D"<<endl;
//   }

    // char ch;
  
    // cout<<"Input any chararcter ";
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"Lowercase"<<endl;
    // }
    // else {
    //     cout<<"Uppercase"<<endl;
    // }


    // char ch;
    // cout<<"Enter char :";
    // cin>>ch;
    // if(ch>=65 && ch<=90){
    //     cout<<"Uppercase"<<endl;
    // }
    // else{
    //     cout<<"Lowercase"<<endl;
    // }
   

//Ternary operator

//    int n=-45;
//    cout<<(n>=0 ? "positive" : "negative")<<endl;


//loop
//    int n=20;
//    int i =1;
//    while( i<=n)
//    {
//     cout<<i<<" ";
//     i++;
//    }



//   int n=10;
//   for(int i=1;i<=n;i=i+2){
//     cout<<i<<endl;
//   }
 



//  int sum=0;
//  int n=50;
//  for(int i=1;i<=n;i++){
//     sum=sum+i;
//     if(i==5){
//         break;
//     }
//  }
//     cout<<sum;



//SUM OF ODD NO.S FROM 1 TO N USING FOR LOOP
//    int n=5;
//    int oddSum=0;
//    for(int i=1;i<=n;i++){
//     if(i%2!=0)
//     {
//         oddSum+=i;
//    }
    
//    }
//     cout<<"Odd sum =  " <<oddSum<<endl;


//SUM OF ODD NO.S FROM 1 TO N USING WHILE LOOP

//     int i=1;
//     int n=5;
//    int oddSum=0;
//     while(i<=n){
//     if(i%2!=0)
//     {
//         oddSum+=i;
//    }
    
//    }
//     cout<<"Odd sum =  " <<oddSum<<endl;


//SUM OF EVEN NO.S FROM 1 TO N USING FOR LOOP
// int n=5;
// int evenSum=0;
// for(int i=0;i<=n;i++){
//     if(i%2==0){
//         evenSum+=i;

//     }
// }
// cout<<"Even sum = "<<evenSum;

//DO WHILE

// do{
//     cout<<"Hello world!\n";
// }while(3>5);




// int n=10;
// int i=1;
// do{
//     cout<<i<<" ";
//     i++;
// }while(i<=n);
// cout<<endl;


// CHECK IF A NUMBER IS PRIME OR NOT;
//  bool isPrime=true;
//  int n=7;
//  for(int i=2;i*i<=n;i++)
//   {
//     if(n%i==0){
//         isPrime=false;
//         break;
//     }
//   }
//   if(isPrime==true){
//     cout<<"Prime no\n";
//   }
//   else{
//     cout<<"Non-prime no\n";
//   }



// *****
// *****
// *****
// *****
// *****

// int n=10;
// for(int i=1;i<=n;i++){
//     int m=10;
//     for(int j=1;j<=m;j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }






// HW SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3


// int n=10;
// int sum=0;
// for(int i=1;i<=n;i++){
//       if(i%3==0){
//         sum+=i;
//       }
// }
// cout<<sum<<endl;


// FACTORIAL OF A NUMBER

int n=5;
int fact=1;
for(int i=1;i<=n;i++){
    
    //  fact=fact*i;
     fact*=i;
    }
    cout<<fact<<endl;
return 0;
}