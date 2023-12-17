import java.io.*;

public class PayrollSystem2 {

    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {

        p.print("Enter Name: ");
        String name = num.readLine();
        p.print("No. of hours worked: ");
        int hw = Integer.parseInt(num.readLine());

        double hourlyRate = 92.38;
        int regularHours = 40;
        double net = hourlyRate * regularHours;
        p.println("Net Income: " + net);

        double sss = net * 0.0828;
        double ph = net * 0.0915;
        double pi = net * 0.0702;
        double tax = net * 0.12;

        double oth = (hw - regularHours) / 2.0 + (hw - regularHours) / 2.0;
        p.println("Overtime Hour/s: " + oth);
        double overtimeRate = hourlyRate * 1.5;
        double otf = oth * overtimeRate;
        p.println("Overtime fee/s: " + otf);
        double tded = sss + ph + pi + tax;
        p.println("Total Deduction: " + tded);
        double netpay = (net - tded) + otf;
        p.println("Net Pay: " + netpay);
    }
}
