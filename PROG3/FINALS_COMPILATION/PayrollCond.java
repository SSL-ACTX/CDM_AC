import java.io.*;

public class PayrollCond {
    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        p.print("Enter Name: ");
        String name = num.readLine();
        p.print("No. of hours worked: ");
        int hw = Integer.parseInt(num.readLine());

        if (hw == 40) {
            p.println("Name: " + name);
            double net = 92.38 * 40;
            p.println("Net Income: " + net);
            double sss = net * 0.0828;
            p.println("SSS: " + sss);
            double ph = net * 0.0915;
            p.println("ph: " + ph);
            double pi = net * 0.0702;
            p.println("pi: " + pi);
            double tax = net * 0.12;
            p.println("tax: " + tax);

            double tded = sss + ph + pi + tax;
            p.println("Total Deduction: " + tded);

            double netpay = net - tded;
            p.println("Net Pay: " + netpay);
        } else if (hw > 40) {
            p.println("Name: " + name);
            double net = 92.38 * 40;
            p.println("Net Income: " + net);
            double sss = net * 0.0828;
            double ph = net * 0.0915;
            double pi = net * 0.0702;
            double tax = net * 0.12;

            double oth = hw - 40;
            p.println("Overtime Hour/s:" + oth);
            double overtimeRate = 92.38 * 1.5; // Overtime rate is 1.5 times regular rate
            double otf = oth * overtimeRate;   // Correct calculation for overtime fee
            p.println("Overtime fee/s:" + otf);
            double tded = sss + ph + pi + tax;
            p.println("Total Deduction: " + tded);

            double netpay = (net - tded) + otf;
            p.println("Net Pay: " + netpay);
        } else if (hw <= 40) {
            p.println("Invalid Hours");
        }
    }
}
