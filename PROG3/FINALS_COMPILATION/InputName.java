import java.io.*;

public class InputName {
    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        p.println("Enter your name:");
        String inputName = num.readLine();
        p.println("Your name is: " + inputName);
    }
}
