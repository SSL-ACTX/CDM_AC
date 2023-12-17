import java.io.*;

public class ConditionalGR {

    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        p.print("Grade:");
        int grade = Integer.parseInt(num.readLine());

        if ((grade >= 90) && (grade <= 100))  
            p.println("Grade = A");  
        else if ((grade >= 80) && (grade <= 89))  
            p.println("Grade = B");  
        else if ((grade >= 70) && (grade <= 79))  
            p.println("Grade = C");
        else if ((grade >= 60) && (grade <= 69))            
            p.println("Grade = D"); 
        else 
            p.println("Out of Range");
    }
}
