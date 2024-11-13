#include <stdio.h>
int n;

int max(int arr[n]){
    int max =0;
    for(int i =0; i<n; i++){
        if(max <arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[n]){
    int min =1000000000;
    for(int i =0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int primeNumber(int arr[n]){
    int count =0;

    for(int i =0; i<n; i++){
        if(arr[i]/2 ==1 ){
            count++;
        }
        if(arr[i] == 2){
            count++;
        }
    }
    return count;
}

int main(){
    
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum number : %d\n",max(arr));
    printf("The minimum number : %d\n",min(arr));
    printf("The number of prime numbers : %d\n",primeNumber(arr));

}



// #include <stdio.h>
// #include <stdbool.h>

// int n;

// // Function to find the maximum number
// int max(int arr[]) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// // Function to find the minimum number
// int min(int arr[]) {
//     int min = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }

// // Helper function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     if (num <= 3) return true;
//     if (num % 2 == 0 || num % 3 == 0) return false;
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }

// // Function to count prime numbers
// int primeNumberCount(int arr[]) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (isPrime(arr[i])) {
//             count++;
//         }
//     }
//     return count;
// }

// // Helper function to check if a number is a palindrome
// bool isPalindrome(int num) {
//     int reversed = 0, original = num;
//     while (num > 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     return original == reversed;
// }

// // Function to count palindrome numbers
// int palindromeCount(int arr[]) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (isPalindrome(arr[i])) {
//             count++;
//         }
//     }
//     return count;
// }

// // Helper function to count the number of divisors
// int divisorCount(int num) {
//     int count = 0;
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             count++;
//         }
//     }
//     return count;
// }

// // Function to find the number with the maximum number of divisors
// int maxDivisorsNumber(int arr[]) {
//     int maxDivisors = 0, result = arr[0];
//     for (int i = 0; i < n; i++) {
//         int divisors = divisorCount(arr[i]);
//         if (divisors > maxDivisors || (divisors == maxDivisors && arr[i] > result)) {
//             maxDivisors = divisors;
//             result = arr[i];
//         }
//     }
//     return result;
// }

// int main() {
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The maximum number : %d\n", max(arr));
//     printf("The minimum number : %d\n", min(arr));
//     printf("The number of prime numbers : %d\n", primeNumberCount(arr));
//     printf("The number of palindrome numbers : %d\n", palindromeCount(arr));
//     printf("The number that has the maximum number of divisors : %d\n", maxDivisorsNumber(arr));

//     return 0;
// }
