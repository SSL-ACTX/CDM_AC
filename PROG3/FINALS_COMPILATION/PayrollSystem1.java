
import java.io.*;

public class PayrollSystem1 {

  private static PrintStream p = System.out;
  public static void main(String[] args) throws IOException {
    BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    p.println("Enter Name: ");
    String name = num.readLine();
    p.println("No. of hours worked: ");
    int hw = Integer.parseInt(num.readLine());

    double net = 92.38 * 40;
    p.println("Net Income: " + net);
    double sss = net * .0828;
    p.println("SSS: " + sss);
    double ph = net * .0915;
    p.println("ph: " + ph);
    double pi = net * .0702;
    p.println("pi: " + pi);
    double tax = net * .12;
    p.println("tax: " + tax);

    double tded = sss + ph + pi + tax;
    p.println("Total Deduction: " + tded);

    double netpay = net - tded;
    p.println("Net Pay: " + netpay);
  }
}
