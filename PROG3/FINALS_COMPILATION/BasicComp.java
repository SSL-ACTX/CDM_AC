import java.io.*;

public class BasicComp {
    private static PrintStream p = System.out;
    public static void main(String[] args) {
        int a = 8;
        int b = 2;

        double sum = a + b;
        double diff = a - b;
        double prod = a * b;
        double quot = a / b;

        p.println("The Sum is: " + sum);
        p.println("The Difference is: " + diff);
        p.println("The Product is: " + prod);
        p.println("The Quotient is: " + quot);
    }
}