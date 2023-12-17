import java.io.*;

public class ConditionalAge {

    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {

        p.print("Age:");
        int age = Integer.parseInt(num.readLine());

        if (age >= 18)
            p.println("Qualified to Vote");

        else
            p.println("Too Young");

    }
}
