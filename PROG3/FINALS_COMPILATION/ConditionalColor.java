import java.io.*;

public class ConditionalColor {

    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        p.print("Color: ");
        char color = num.readLine().charAt(0);

        if ((color == 'B') || (color == 'b'))
            p.println("Blue");
        else if ((color == 'R') || (color == 'r'))
            p.println("Red");
        else if ((color == 'G') || (color == 'g'))
            p.println("Green");
        else if ((color == 'Y') || (color == 'y'))
            p.println("Yellow");
        else
            p.println("Unknown Color");
    }
}
