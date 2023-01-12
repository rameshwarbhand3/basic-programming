package java_programs.basic_programs;

import java.util.Random;

public class RandomNumber {
    public static void main(String args[]) {
        // creating an object of Random class
        Random random = new Random();

        int x = random.nextInt(50);

        int y = random.nextInt(1000);

        System.out.println("Randomly Generated Integers Values");
        System.out.println(x);
        System.out.println(y);
    }
}