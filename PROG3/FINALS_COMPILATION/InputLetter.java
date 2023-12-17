import java.io.*;

public class InputLetter {
    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {

        p.println("Enter a letter:");
        char inputLetter = (char) num.read();
        p.println("You entered: " + inputLetter);
    }
}
