import java.io.*;

public class PayrollInvalid {

    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {

        p.print("Enter Name: ");
        String name = num.readLine();
        p.print("No. of hours worked: ");
        int hw = Integer.parseInt(num.readLine());

        p.println("Invalid Hours");

    }
}
