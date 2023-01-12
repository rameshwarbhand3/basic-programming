package java_programs.basic_programs;

import java.util.Scanner;

class PrimeNumber1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number:");
        int start = sc.nextInt();
        System.out.println("Enter the second number:");
        int end = sc.nextInt();
        System.out.println("List of number between " + start + " and " + end);
        for (int i = start; i < end; i++) {
            if (isprime(i)) {
                System.out.println(i);
            }
        }
    }

    static boolean isprime(int n) {
        if (n <= 1){
            return false;
        }
        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

}
