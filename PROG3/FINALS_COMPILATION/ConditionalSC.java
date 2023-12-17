import java.io.*;

public class ConditionalSC {

    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        p.print("Grade:");
        int grade = Integer.parseInt(num.readLine());

        switch (grade) {
            case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99:
                p.println("Grade = A");
                break;
            case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89:
                p.println("Grade = B");
                break;
            case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79:
                p.println("Grade = C");
                break;
            default:
                p.println("Out of Range");
                break;
        }
    }
}
