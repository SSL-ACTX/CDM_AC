Public Class Form1
    'Got rid of 1st and 2nd num
    Dim Opr As Char
    Dim clrInp As Boolean = True

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        PictureBox1.Image = Image.FromFile("ui.gif")
        PictureBox1.SizeMode = PictureBoxSizeMode.StretchImage
    End Sub

    'Functions here -->

    ' Evaluate the exp and calculate it :)
    Private Function EvaluateExpression(expression As String) As Double
        Dim dt As New DataTable()
        Return Convert.ToDouble(dt.Compute(expression, ""))
    End Function

    ' Number Buttons 0-9
    Private Sub NumButt(number As String)
        InputBox.Text &= number
    End Sub

    ' Add Button
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Opr = "+"
        InputBox.Text &= "+"
        clrInp = False
    End Sub

    ' Subtract Button
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Opr = "-"
        InputBox.Text &= "-"
        clrInp = False
    End Sub

    ' Multiply Button
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Opr = "*"
        InputBox.Text &= "*"
        clrInp = False
    End Sub

    ' Divide Button
    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Opr = "/"
        InputBox.Text &= "/"
        clrInp = False
    End Sub

    ' AC Button
    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        InputBox.Clear()
        ResultBox.Clear()
        clrInp = True
    End Sub

    ' Equal Button
    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        Dim expression As String = InputBox.Text
        expression = expression.Replace("x", "*")
        Dim result As Double = EvaluateExpression(expression)
        ResultBox.Text = result.ToString()

        UpdateHistory(expression & " = " & result)
        'InputBox.Clear()
        clrInp = False
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        NumButt("1")
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        NumButt("2")
    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        NumButt("3")
    End Sub

    Private Sub Button10_Click(sender As Object, e As EventArgs) Handles Button10.Click
        NumButt("4")
    End Sub

    Private Sub Button11_Click(sender As Object, e As EventArgs) Handles Button11.Click
        NumButt("5")
    End Sub

    Private Sub Button12_Click(sender As Object, e As EventArgs) Handles Button12.Click
        NumButt("6")
    End Sub

    Private Sub Button13_Click(sender As Object, e As EventArgs) Handles Button13.Click
        NumButt("7")
    End Sub

    Private Sub Button14_Click(sender As Object, e As EventArgs) Handles Button14.Click
        NumButt("8")
    End Sub

    Private Sub Button15_Click(sender As Object, e As EventArgs) Handles Button15.Click
        NumButt("9")
    End Sub

    Private Sub Button16_Click(sender As Object, e As EventArgs) Handles Button16.Click
        NumButt("0")
    End Sub

    ' Decimal Button
    Private Sub Button17_Click(sender As Object, e As EventArgs) Handles Button17.Click
        InputBox.Text &= "."
    End Sub

    ' History
    Private Sub UpdateHistory(calculation As String)
        HistoryBox.Items.Add(calculation)
    End Sub

End Class