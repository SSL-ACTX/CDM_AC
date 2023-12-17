import java.io.*;

public class PrelimGrade {
    private static PrintStream p = System.out;
    private static BufferedReader n = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        double quizPercentage = 45.0;
        double classStandingPercentage = 20.0;
        double prelimPercentage = 35.0;

        p.println("Enter Your Quizzes");
        p.println("Enter Your Quiz 1 Grade: ");
        float quiz1Grade = Float.parseFloat(n.readLine());
        p.println("Enter Your Quiz 2 Grade: ");
        float quiz2Grade = Float.parseFloat(n.readLine());
        p.println("Enter Your Quiz 3 Grade: ");
        float quiz3Grade = Float.parseFloat(n.readLine());
        p.println("Enter Your Quiz 4 Grade: ");
        float quiz4Grade = Float.parseFloat(n.readLine());

        double quizzesTotalGrade = (quiz1Grade + quiz2Grade + quiz3Grade + quiz4Grade) / 4.0;
        p.println("Your Total Quiz Grade is: " + quizzesTotalGrade);

        p.println("Enter Your Class Standing Grades");
        p.println("Enter your Attendance: ");
        float attendance = Float.parseFloat(n.readLine());
        p.println("Enter your Assignment: ");
        float assignment = Float.parseFloat(n.readLine());
        p.println("Enter your Seatwork: ");
        float seatwork = Float.parseFloat(n.readLine());
        p.println("Enter your Recitation: ");
        float recitation = Float.parseFloat(n.readLine());

        double classStandingTotalGrade = (attendance + assignment + recitation + seatwork) / 4.0;
        p.println("Your Total Class Standing Grade is: " + classStandingTotalGrade);

        p.println("Enter Your Prelim Grades");
        p.println("Enter your grades for Prelim Lecture Exam:");
        float prelimLectureGrades = Float.parseFloat(n.readLine());
        p.println("Enter your grades for Prelim Performance:");
        float prelimPerformance = Float.parseFloat(n.readLine());

        double prelimLectureExamTotalGrade = (prelimLectureGrades + prelimPerformance) / 2.0;
        p.println("Your Total Prelim Grade is: " + prelimLectureExamTotalGrade);

        double lectureGrade = (quizzesTotalGrade * (quizPercentage / 100.0)
                + classStandingTotalGrade * (classStandingPercentage / 100.0)
                + prelimLectureExamTotalGrade * (prelimPercentage / 100.0));

        p.print("Your Final Grade is: " + lectureGrade);
    }
}