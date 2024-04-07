' Tutungan Jameel U.
' BSIT - 2A
' IT-ELEC 2
Imports System.IO

Public Class Form1
    Dim PQ1, PQ2, PQ3, PAtt, PRec, PAct1, PAct2, PAct3, PExam As Integer 'Prelim
    Dim MQ1, MQ2, MQ3, MAtt, MRec, MAct1, MAct2, MAct3, MExam As Integer 'Midterm
    Dim FQ1, FQ2, FQ3, FAtt, FRec, FAct1, FAct2, FAct3, FExam As Integer 'Finals
    ' Total Variables
    Dim PQTot, PAttTot, PRecTot, PActTot, PExamTot As Integer
    Dim MQTot, MAttTot, MRecTot, MActTot, MExamTot As Integer
    Dim FQTot, FAttTot, FRecTot, FActTot, FExamTot As Integer
    Dim Prelim, Midterm, Finals, Grade As Integer

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'Picture Box Gif
        Dim filePath As String = "fumo.gif"
        If File.Exists(filePath) Then PictureBox1.Image = Image.FromFile(filePath)
    End Sub

    'Prelim Button
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        PQ1 = Val(PQ1Text.Text)
        PQ2 = Val(PQ2Text.Text)
        PQ3 = Val(PQ3Text.Text)
        PAtt = Val(PAttText.Text)
        PRec = Val(PRecText.Text)
        PAct1 = Val(PActText1.Text)
        PAct2 = Val(PActText2.Text)
        PAct3 = Val(PActText3.Text)
        PExam = Val(PExamText.Text)


        PQTot = ((PQ1 + PQ2 + PQ3) / 3) * 0.2
        PAttTot = PAtt * 0.1
        PRecTot = PRec * 0.15
        PActTot = ((PAct1 + PAct2 + PAct3) / 3) * 0.25
        PExamTot = PExam * 0.3


        Prelim = (PQTot + PAttTot + PRecTot + PActTot + PExamTot) * 0.3

        PrelText.Text = Prelim
    End Sub

    'Midterm Button
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        MQ1 = Val(MQ1Text.Text)
        MQ2 = Val(MQ2Text.Text)
        MQ3 = Val(MQ3Text.Text)
        MAtt = Val(MAttText.Text)
        MRec = Val(MRecText.Text)
        MAct1 = Val(MActText1.Text)
        MAct2 = Val(MActText2.Text)
        MAct3 = Val(MActText3.Text)
        MExam = Val(MExamText.Text)

        MQTot = ((MQ1 + MQ2 + MQ3) / 3) * 0.2
        MAttTot = MAtt * 0.1
        MRecTot = MRec * 0.15
        MActTot = ((MAct1 + MAct2 + MAct3) / 3) * 0.25
        MExamTot = MExam * 0.3

        Midterm = (MQTot + MAttTot + MRecTot + MActTot + MExamTot) * 0.3

        MidText.Text = Midterm
    End Sub

    'Finals Button
    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        FQ1 = Val(FQ1Text.Text)
        FQ2 = Val(FQ2Text.Text)
        FQ3 = Val(FQ3Text.Text)
        FAtt = Val(FAttText.Text)
        FRec = Val(FRecText.Text)
        FAct1 = Val(FActText1.Text)
        FAct2 = Val(FActText2.Text)
        FAct3 = Val(FActText3.Text)
        FExam = Val(FExamText.Text)

        FQTot = ((FQ1 + FQ2 + FQ3) / 3) * 0.2
        FAttTot = FAtt * 0.1
        FRecTot = FRec * 0.15
        FActTot = ((FAct1 + FAct2 + FAct3) / 3) * 0.25
        FExamTot = FExam * 0.3

        Finals = (FQTot + FAttTot + FRecTot + FActTot + FExamTot) * 0.4

        FinText.Text = Finals
    End Sub

    'Final Grade Button
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Grade = Prelim + Midterm + Finals
        FinalGradeText.Text = Grade
    End Sub
End Class

