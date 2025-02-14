// #include <iostream>
// using namespace std;

// int printHello()
// {
//     cout << "hello\n";
//     return 3;
// }
// int  main(){
//     int val = printHello();
//     cout << "Val= " << val << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //sum of int two numbers
// int sum(int a,int b)
// {
//     int s=a+b;
//     return s;
// }
// int  main(){
//     cout<<sum(10,5)<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //sum of float two numbers
// double sum(double a,double b)
// {
//     double s=a+b;
//     return s;
// }
// int minOfTwo(int c,int d){  //parameters
//     if(c<d ){
//         return c;
//     }
//     else{
//         return d;
//     }
// }

// int  main(){
//     // cout<<sum(10.99,5.65)<<endl;
//       cout<<"Min ="<<minOfTwo(4,3)<<endl;  //arguments
//     return 0;
// }

// Q1 Calculate sum of numbers from 1 To N

// #include <iostream>
// using namespace std;
// int sumN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }
// int main()
// {
//     cout << sumN(10)<<endl;
//     cout << sumN(5)<<endl;

// }

// Q2 Calculate N factorial

// #include <iostream>
// using namespace std;
// int FactN(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int main()
// {
//     cout << "Factorial :" << FactN(4) << endl;

//     cout << "Factorial :" << FactN(5) << endl;
// }




//Pass  By Value

//  #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     a=a+10;
//     b=b+10;
//     return a+b;
// }

// int main()
// {
//     int a=5,b=4;
//     cout<< sum(a,b)<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }




// #include <iostream>
// using namespace std;
// void changeX(int x){
//    x=2*x;
//    cout<<"x = "<< x <<endl;
// }

// int main()
// {
//     int x=5;
//     changeX(x);
//     cout<<"x = " << x << endl;
//     return 0;
// }


// Q3 Calculate sum of digits of a numberr

// #include<iostream>
// using namespace std;
// int sumDigit(int n){
//      int digitSum=0;
//      while(n>0){
//         int lastDigit=n%10;
//          n=n/10;
//         digitSum += lastDigit;
//      }
//       return digitSum;
// }
// int main(){
//    cout<<"Sum = "<< sumDigit(2356)<<endl;
// }


//Q4 Calculate nCr binomial coefficient for n & r

// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }
// int nCr(int n,int r){
//       int fact_n=factorial(n);
//       int fact_r=factorial(r);
//       int fact_nmr=factorial(n-r);
//       return fact_n/(fact_r * fact_nmr);
// }
// int main(){
//       int n=8,r=2;
//       cout<<nCr(n,r)<<endl;
//       return 0;
// }


// HOMEWORK

// Q1 WAP to check if a number is prime or not.

// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n<2)
//     return false;
//     for(int i=2;i<n;i++){
//         if(n%i==0)
//         return false;
//         }
//         return true;
// }
// int main(){
//       int num=7;
//       if(isPrime(num))
//         cout<<num <<" is a prime number";
//       else
//         cout<<num <<" is not prime number";
      
// }



// Q2 WAP to print all prime numbers from 2 to N

// #include<iostream>
// using namespace std;
// bool allPrime(int num){
//     if(num<2)
//      return false;
//     for(int i=2;i<num;i++)
//         {
//             if(num%i == 0)
//                 return false; 
//         }
            
//             return true;
        
    
// }

// void printPrimes(int n){
//     for(int i=2;i<=n;i++){
//         if(allPrime(i))
//        {
//           cout<<i<<" ";
//        }
//     }
//     cout<<endl;
// }

// int main(){
//     int n=5;
//     printPrimes(n);
//    return 0;
// }


// Q3 WAP to print nth fibonacci

#include<iostream>
using namespace std;
int fibo(int n){
    
    int zeroth_term=0;
    int first_term=1;
    int new_term=0;
    for(int i=2;i<=n;i++){
       new_term=zeroth_term+first_term;
       zeroth_term=first_term;
       first_term=new_term;
    }
    return new_term;
}
int main(){
    int num=6;
    int fibonacci=fibo(num);
    cout<<fibonacci;
}