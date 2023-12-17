import java.io.*;

public class InputCalc {
    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        p.print("Enter First Number: ");
        float fnum = Float.parseFloat(num.readLine());

        p.print("Enter Second Number: ");
        float snum = Float.parseFloat(num.readLine());

        float sum = fnum + snum;
        float diff = fnum - snum;
        float prod = fnum * snum;
        float quot = fnum / snum;

        p.println("The sum is: " + sum);
        p.println("The difference is: " + diff);
        p.println("The product is: " + prod);
        p.println("The quotient is: " + quot);
    }
}