import java.io.*;

public class PrelimGradeCond {
    private static PrintStream p = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        p.println("LECTURE\n");
        p.println("QUIZZES\n");
        p.print("Quiz 1: ");
        int q1 = Integer.parseInt(num.readLine());
        p.print("Quiz 2: ");
        int q2 = Integer.parseInt(num.readLine());
        p.print("Quiz 3: ");
        int q3 = Integer.parseInt(num.readLine());
        p.print("Quiz 4: ");
        int q4 = Integer.parseInt(num.readLine());
        p.print("Quiz 5: ");
        int q5 = Integer.parseInt(num.readLine());
        double QS = ((q1 + q2 + q3 + q4 + q5) / 5.0) * 0.35;
        p.println("Quiz Score: " + QS);

        p.println("\nCLASS STANDING\n");
        p.print("ASS: ");
        int ass = Integer.parseInt(num.readLine());
        p.print("BEH: ");
        int beh = Integer.parseInt(num.readLine());
        p.print("ATT: ");
        int att = Integer.parseInt(num.readLine());
        p.print("REC: ");
        int rec = Integer.parseInt(num.readLine());
        double CSS = ((ass + beh + att + rec) / 4.0) * 0.25;
        p.println("Class Standing score: " + CSS);

        p.println("\nMAJOR EXAMINATION\n");
        p.print("Major Exam: ");
        int me = Integer.parseInt(num.readLine());
        double MEE = (me * 0.40);
        p.println("Major Exam Score= " + MEE);

        p.println("\nPRELIM LECTURE GRADE\n");
        double PLG = (QS + CSS + MEE) * 0.60;
        p.println("Prelim Lecture Grade: " + PLG);

        p.println("\nLABORATORY\n");
        p.println("MACHINE PROBLEM\n");
        p.print("MP1: ");
        int mp1 = Integer.parseInt(num.readLine());
        p.print("MP2: ");
        int mp2 = Integer.parseInt(num.readLine());
        p.print("MP3: ");
        int mp3 = Integer.parseInt(num.readLine());
        double MPS = ((mp1 + mp2 + mp3) / 3.0) * 0.45;
        p.println("Machine Problem score: " + MPS);

        p.println("\nCLASS STANDING\n");
        p.print("ASS: ");
        int ass1 = Integer.parseInt(num.readLine());
        p.print("SW: ");
        int sw1 = Integer.parseInt(num.readLine());
        p.print("BEH: ");
        int beh1 = Integer.parseInt(num.readLine());
        double CSS1 = ((ass1 + sw1 + beh1) / 3.0) * 0.20;
        p.println("Class Standing score: " + CSS1);

        p.println("\nMAJOR EXAMINATION\n");
        p.print("Major Exam: ");
        int me1 = Integer.parseInt(num.readLine());
        double MEE1 = (me1 * 0.35);
        p.println("Major Exam Score= " + MEE1);

        p.println("\nPRELIM LABORATORY GRADE\n");
        double PLG1 = (MPS + CSS1 + MEE1) * 0.40;
        p.println("Prelim Laboratory Grade: " + PLG1);

		double PG = (PLG+PLG1);
		p.println("PRELIM GRADE: "+PG);
		
		double PG1 = (PLG+PLG1)*.30;
		p.println("PRELIM GRADE %: "+PG1);

        if ((PG1 >= 97) && (PG1 <= 100)) {
            p.println("Your Grade is 1.00");
        } else if ((PG1 >= 94) && (PG1 <= 96)) {
            p.println("Your Grade is 1.25");
        } else if ((PG1 >= 91) && (PG1 <= 93)) {
            p.println("Your Grade is 1.50");
        } else if ((PG1 >= 88) && (PG1 <= 90)) {
            p.println("Your Grade is 1.75");
        } else if ((PG1 >= 85) && (PG1 <= 87)) {
            p.println("Your Grade is 2.00");
        } else if ((PG1 >= 82) && (PG1 <= 84)) {
            p.println("Your Grade is 2.25");
        } else if ((PG1 >= 79) && (PG1 <= 81)) {
            p.println("Your Grade is 2.50");
        } else if ((PG1 >= 76) && (PG1 <= 78)) {
            p.println("Your Grade is 2.75");
        } else if (PG1 >= 75) {
            p.println("Your Grade is 3.00");
        } else {
            p.println("Your Grade is 5.00");
        }

        if (PG1 >= 75) {
            p.println("You Passed");
        } else {
            p.println("You Failed");
        }
    }
}
