// // Digit concept
// Extraction of digits
// for that we can do module of N=7789
// t.e. N%10, we can extract the number t.e 9 again 
// it will come 778.9 & if we take int of it then it will automatically become 778.
// again 778%10, then again 8 will be extracted & it will come as 77.8,t.e 77.8 , int will come to 77
;s
// Lets say we want to keep count of the digits then we can introduce the count variable.



// pseudo code :- Take input from the user,
// int count=0;
// while (N>0)
// {
//     lastdigit= N%10 // takes out the remainder
//     cout<<lastdigit;
//     count=count+1
//     N=N/10
// }
// cout<<count;

//
// #include<iostream>
//    int evenlyDivides(int N){
        
//         int number;
//         int count=0;
//         while(N>0){ j
//             number=N%10;
//             if( N%number==0){
                
//                 count++;
//             }
//             N=N/10;
            
//         }  
//         cout<< count;
        
        
//     }


// ---------------------------------------

// Reverse the number
// // 0 shouldn't be included

// 7789-9877

// reverse no.= revnum*10+last digit

// logic behind thinking it :-
// so by reversing we want, 9877
// 1st we want 9 to convert into 98, what could be the necessary steps? 98, 9*10+8, if we want 987, then we have to do 98*10+7;
// thats how we thought of the logic 


// When you're reversing an integer, the maximum digit in the ones place that would keep the result within the range of a 32-bit signed integer is 7 (for positive numbers) and -8 (for negative numbers). This is because if you add a digit greater than 7 to the reversed number when it's already 214748364, it would cause overflow. Similarly, if you add a digit less than -8 to the reversed number when it's already -214748364, it would cause overflow.

// So, the conditions (reversenum == INT_MAX / 10 && digit > 7) and (reversenum == INT_MIN / 10 && digit < -8) are used to check if adding the next digit would lead to overflow in positive and negative numbers, respectively.


------------

Check palindrome (reverse of the number is same as original number then we can say its palindrome, since while doing the operation we have to store the original number so that we can compare it afterwards since inside the loop value of n is changing )

Here reverse is exact same as actual. e.g 121,1331,11,7





























