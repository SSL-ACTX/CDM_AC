import java.io.*;

public class InputNumber {
    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        p.println("Enter a Number");
        int number = Integer.parseInt(num.readLine());
        p.println("The number you've inputted is: " + number);
    }
}