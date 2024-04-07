Imports System.IO

Public Class Form1
    Dim regisUser As String = ""
    Dim regisEmail As String = ""
    Dim regisPass As String = ""
    Dim oldPassword As String = ""
    Dim oldPassword2 As String = ""

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Dim filePath As String = "bgg.gif"
        If File.Exists(filePath) Then PictureBox1.Image = Image.FromFile(filePath)

        ' Hide registration and other panels at page start (important)
        RegistrationPanel.Visible = False
        ForgotPasswordPanel.Visible = False
        LoggedInPanel.Visible = False
        ChangePasswordPanel.Visible = False
        ChangedSuccPanel.Visible = False
    End Sub

    ' Login Button
    Private Sub LoginButton_Click(sender As Object, e As EventArgs) Handles LoginButton.Click
        Dim username As String = UsernameTextBox.Text
        Dim password As String = PasswordTextBox.Text

        ' Check if the entered username and password are registered ones
        If username = regisUser AndAlso password = regisPass Then
            If regisUser = "" AndAlso password = "" Then
                MessageBox.Show("Invalid username or password. Please try again.")
            Else
                MessageBox.Show("Login successful!")

                LoggedInPanel.Visible = True
                LoginPanel.Visible = False
                RegistrationPanel.Visible = False
                ForgotPasswordPanel.Visible = False
            End If
        Else
            MessageBox.Show("Invalid username or password. Please try again.")
        End If
    End Sub

    ' Registration Link Label
    Private Sub RegisterLabel_Click(sender As Object, e As EventArgs) Handles RegisterLabel.Click
        ' Hide other panels
        LoginPanel.Visible = False
        ForgotPasswordPanel.Visible = False
        ' Show registration panel
        RegistrationPanel.Visible = True
    End Sub

    ' Forgot Password label here
    Private Sub ForgotLabel_Click(sender As Object, e As EventArgs) Handles ForgotLabel.Click
        ' Hide other panels
        LoginPanel.Visible = False
        RegistrationPanel.Visible = False
        ' Show forgot password panel
        ForgotPasswordPanel.Visible = True
    End Sub

    ' Register Panel Inside
    Private Sub RegisterButton_Click(sender As Object, e As EventArgs) Handles RegisterButton.Click
        Dim username As String = UsernameRegTextBox.Text
        Dim password As String = PassRegTextBox.Text
        Dim email As String = EmailRegTextBox.Text

        If username = "" OrElse password = "" OrElse email = "" Then
            MessageBox.Show("Please fill in all fields.")
        Else
            ' Let's store the registered email and password
            regisUser = username
            regisEmail = email
            regisPass = password
            'backup password for recovery
            oldPassword = password


            MessageBox.Show("Registration successful. You can now login.")

            ' After registration, show our login panel
            LoginPanel.Visible = True
            RegistrationPanel.Visible = False
            ForgotPasswordPanel.Visible = False
        End If
    End Sub

    ' Forgot Password/Recovery inside
    Private Sub RecoverButton_Click(sender As Object, e As EventArgs) Handles RecoverButton.Click
        Dim email As String = RecoverTextBox.Text

        ' Check if the email entered is a registered one
        If email = regisEmail Then
            MessageBox.Show("Your password is: " & regisPass)
        Else
            MessageBox.Show("No account found with this email address.")
        End If

        ' After submitting forgot password request, show login panel :)
        LoginPanel.Visible = True
        RegistrationPanel.Visible = False
        ForgotPasswordPanel.Visible = False
    End Sub

    ' Logged In Panel
    Private Sub LoggedInPanel_Paint(sender As Object, e As PaintEventArgs) Handles LoggedInPanel.Paint

    End Sub

    ' Acts as change password button
    Private Sub Label11_Click(sender As Object, e As EventArgs) Handles Label11.Click
        'save the current password to oldpassword2
        oldPassword2 = regisPass

        LoggedInPanel.Visible = True
        ChangePasswordPanel.Visible = True
    End Sub

    ' Change password panel
    Private Sub ChangePasswordPanel_Paint(sender As Object, e As PaintEventArgs) Handles ChangePasswordPanel.Paint

    End Sub

    ' New password textbox
    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    ' Change password button
    Private Sub ChangePassButton_Click(sender As Object, e As EventArgs) Handles ChangePassButton.Click
        Dim newPassword As String = TextBox1.Text

        regisPass = newPassword

        ChangedSuccPanel.Visible = True
        LoggedInPanel.Visible = True
        ChangePasswordPanel.Visible = False
    End Sub

    'Changed Password Button - inside panel
    Private Sub ChangedButt_Click(sender As Object, e As EventArgs) Handles ChangedButt.Click
        ChangedSuccPanel.Visible = False
    End Sub

    'Logout button
    Private Sub LogoutButton_Click(sender As Object, e As EventArgs) Handles LogoutButton.Click
        LoggedInPanel.Visible = False
        LoginPanel.Visible = True
    End Sub

    'Profile pic
    Private Sub PictureBox2_Click(sender As Object, e As EventArgs) Handles PictureBox2.Click

    End Sub

    Private Sub ChangedSuccPanel_Paint(sender As Object, e As PaintEventArgs) Handles ChangedSuccPanel.Paint
        oldP.Text = "" & oldPassword2
        newP.Text = "" & regisPass
    End Sub
End Class
