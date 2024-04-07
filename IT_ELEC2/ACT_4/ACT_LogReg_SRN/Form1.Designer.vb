<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.UsernameTextBox = New System.Windows.Forms.TextBox()
        Me.PasswordTextBox = New System.Windows.Forms.TextBox()
        Me.LoginPanel = New System.Windows.Forms.Panel()
        Me.LoginButton = New System.Windows.Forms.Button()
        Me.ForgotLabel = New System.Windows.Forms.Label()
        Me.RegisterLabel = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        Me.RegistrationPanel = New System.Windows.Forms.Panel()
        Me.RegisterButton = New System.Windows.Forms.Button()
        Me.EmailRegTextBox = New System.Windows.Forms.TextBox()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.PassRegTextBox = New System.Windows.Forms.TextBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.UsernameRegTextBox = New System.Windows.Forms.TextBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.ForgotPasswordPanel = New System.Windows.Forms.Panel()
        Me.RecoverButton = New System.Windows.Forms.Button()
        Me.RecoverTextBox = New System.Windows.Forms.TextBox()
        Me.Label9 = New System.Windows.Forms.Label()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.LoggedInPanel = New System.Windows.Forms.Panel()
        Me.ChangedSuccPanel = New System.Windows.Forms.Panel()
        Me.ChangedButt = New System.Windows.Forms.Button()
        Me.newP = New System.Windows.Forms.TextBox()
        Me.oldP = New System.Windows.Forms.TextBox()
        Me.Label20 = New System.Windows.Forms.Label()
        Me.Label19 = New System.Windows.Forms.Label()
        Me.Label18 = New System.Windows.Forms.Label()
        Me.Label17 = New System.Windows.Forms.Label()
        Me.Label16 = New System.Windows.Forms.Label()
        Me.Label15 = New System.Windows.Forms.Label()
        Me.PictureBox2 = New System.Windows.Forms.PictureBox()
        Me.LogoutButton = New System.Windows.Forms.Button()
        Me.Label13 = New System.Windows.Forms.Label()
        Me.Label12 = New System.Windows.Forms.Label()
        Me.Label11 = New System.Windows.Forms.Label()
        Me.Label10 = New System.Windows.Forms.Label()
        Me.ChangePasswordPanel = New System.Windows.Forms.Panel()
        Me.ChangePassButton = New System.Windows.Forms.Button()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.Label14 = New System.Windows.Forms.Label()
        Me.LoginPanel.SuspendLayout()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.RegistrationPanel.SuspendLayout()
        Me.ForgotPasswordPanel.SuspendLayout()
        Me.LoggedInPanel.SuspendLayout()
        Me.ChangedSuccPanel.SuspendLayout()
        CType(Me.PictureBox2, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.ChangePasswordPanel.SuspendLayout()
        Me.SuspendLayout()
        '
        'UsernameTextBox
        '
        Me.UsernameTextBox.Location = New System.Drawing.Point(29, 210)
        Me.UsernameTextBox.Multiline = True
        Me.UsernameTextBox.Name = "UsernameTextBox"
        Me.UsernameTextBox.Size = New System.Drawing.Size(196, 39)
        Me.UsernameTextBox.TabIndex = 0
        '
        'PasswordTextBox
        '
        Me.PasswordTextBox.Location = New System.Drawing.Point(29, 274)
        Me.PasswordTextBox.MaxLength = 30
        Me.PasswordTextBox.Multiline = True
        Me.PasswordTextBox.Name = "PasswordTextBox"
        Me.PasswordTextBox.Size = New System.Drawing.Size(196, 39)
        Me.PasswordTextBox.TabIndex = 1
        '
        'LoginPanel
        '
        Me.LoginPanel.BackColor = System.Drawing.Color.Transparent
        Me.LoginPanel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.LoginPanel.Controls.Add(Me.LoginButton)
        Me.LoginPanel.Controls.Add(Me.ForgotLabel)
        Me.LoginPanel.Controls.Add(Me.RegisterLabel)
        Me.LoginPanel.Controls.Add(Me.Label3)
        Me.LoginPanel.Controls.Add(Me.Label2)
        Me.LoginPanel.Controls.Add(Me.Label1)
        Me.LoginPanel.Controls.Add(Me.PasswordTextBox)
        Me.LoginPanel.Controls.Add(Me.UsernameTextBox)
        Me.LoginPanel.Location = New System.Drawing.Point(630, 33)
        Me.LoginPanel.Name = "LoginPanel"
        Me.LoginPanel.Size = New System.Drawing.Size(254, 553)
        Me.LoginPanel.TabIndex = 2
        '
        'LoginButton
        '
        Me.LoginButton.BackColor = System.Drawing.Color.MidnightBlue
        Me.LoginButton.Cursor = System.Windows.Forms.Cursors.Hand
        Me.LoginButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.LoginButton.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LoginButton.ForeColor = System.Drawing.SystemColors.Control
        Me.LoginButton.Location = New System.Drawing.Point(43, 319)
        Me.LoginButton.Name = "LoginButton"
        Me.LoginButton.Size = New System.Drawing.Size(168, 31)
        Me.LoginButton.TabIndex = 7
        Me.LoginButton.Text = "LOGIN"
        Me.LoginButton.UseVisualStyleBackColor = False
        '
        'ForgotLabel
        '
        Me.ForgotLabel.AutoSize = True
        Me.ForgotLabel.Font = New System.Drawing.Font("Segoe UI Semibold", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ForgotLabel.ForeColor = System.Drawing.SystemColors.Highlight
        Me.ForgotLabel.Location = New System.Drawing.Point(74, 523)
        Me.ForgotLabel.Name = "ForgotLabel"
        Me.ForgotLabel.Size = New System.Drawing.Size(111, 17)
        Me.ForgotLabel.TabIndex = 6
        Me.ForgotLabel.Text = "Forgot Password"
        '
        'RegisterLabel
        '
        Me.RegisterLabel.AutoSize = True
        Me.RegisterLabel.Cursor = System.Windows.Forms.Cursors.Hand
        Me.RegisterLabel.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.RegisterLabel.ForeColor = System.Drawing.SystemColors.Highlight
        Me.RegisterLabel.Location = New System.Drawing.Point(64, 365)
        Me.RegisterLabel.Name = "RegisterLabel"
        Me.RegisterLabel.Size = New System.Drawing.Size(121, 13)
        Me.RegisterLabel.TabIndex = 5
        Me.RegisterLabel.Text = "Not registered? Register"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Niagara Engraved", 48.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(71, 95)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(114, 68)
        Me.Label3.TabIndex = 4
        Me.Label3.Text = "LOGIN"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(10, 258)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(53, 13)
        Me.Label2.TabIndex = 3
        Me.Label2.Text = "Password"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(10, 194)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(55, 13)
        Me.Label1.TabIndex = 2
        Me.Label1.Text = "Username"
        '
        'PictureBox1
        '
        Me.PictureBox1.Location = New System.Drawing.Point(29, 33)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(601, 553)
        Me.PictureBox1.TabIndex = 3
        Me.PictureBox1.TabStop = False
        '
        'RegistrationPanel
        '
        Me.RegistrationPanel.BackColor = System.Drawing.Color.Transparent
        Me.RegistrationPanel.Controls.Add(Me.RegisterButton)
        Me.RegistrationPanel.Controls.Add(Me.EmailRegTextBox)
        Me.RegistrationPanel.Controls.Add(Me.Label7)
        Me.RegistrationPanel.Controls.Add(Me.Label6)
        Me.RegistrationPanel.Controls.Add(Me.PassRegTextBox)
        Me.RegistrationPanel.Controls.Add(Me.Label5)
        Me.RegistrationPanel.Controls.Add(Me.UsernameRegTextBox)
        Me.RegistrationPanel.Controls.Add(Me.Label4)
        Me.RegistrationPanel.Location = New System.Drawing.Point(630, 108)
        Me.RegistrationPanel.Name = "RegistrationPanel"
        Me.RegistrationPanel.Size = New System.Drawing.Size(272, 361)
        Me.RegistrationPanel.TabIndex = 4
        '
        'RegisterButton
        '
        Me.RegisterButton.BackColor = System.Drawing.Color.MidnightBlue
        Me.RegisterButton.Cursor = System.Windows.Forms.Cursors.Hand
        Me.RegisterButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.RegisterButton.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.RegisterButton.ForeColor = System.Drawing.SystemColors.ControlLightLight
        Me.RegisterButton.Location = New System.Drawing.Point(57, 295)
        Me.RegisterButton.Name = "RegisterButton"
        Me.RegisterButton.Size = New System.Drawing.Size(168, 31)
        Me.RegisterButton.TabIndex = 7
        Me.RegisterButton.Text = "REGISTER"
        Me.RegisterButton.UseVisualStyleBackColor = False
        '
        'EmailRegTextBox
        '
        Me.EmailRegTextBox.Location = New System.Drawing.Point(40, 250)
        Me.EmailRegTextBox.Multiline = True
        Me.EmailRegTextBox.Name = "EmailRegTextBox"
        Me.EmailRegTextBox.Size = New System.Drawing.Size(196, 39)
        Me.EmailRegTextBox.TabIndex = 6
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.ForeColor = System.Drawing.SystemColors.ControlText
        Me.Label7.Location = New System.Drawing.Point(23, 234)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(100, 13)
        Me.Label7.TabIndex = 5
        Me.Label7.Text = "Email (For recovery)"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Niagara Engraved", 48.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.Location = New System.Drawing.Point(47, 22)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(178, 68)
        Me.Label6.TabIndex = 4
        Me.Label6.Text = "REGISTER"
        '
        'PassRegTextBox
        '
        Me.PassRegTextBox.Location = New System.Drawing.Point(40, 192)
        Me.PassRegTextBox.Multiline = True
        Me.PassRegTextBox.Name = "PassRegTextBox"
        Me.PassRegTextBox.Size = New System.Drawing.Size(196, 39)
        Me.PassRegTextBox.TabIndex = 3
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(23, 175)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(53, 13)
        Me.Label5.TabIndex = 2
        Me.Label5.Text = "Password"
        '
        'UsernameRegTextBox
        '
        Me.UsernameRegTextBox.Location = New System.Drawing.Point(40, 134)
        Me.UsernameRegTextBox.Multiline = True
        Me.UsernameRegTextBox.Name = "UsernameRegTextBox"
        Me.UsernameRegTextBox.Size = New System.Drawing.Size(196, 39)
        Me.UsernameRegTextBox.TabIndex = 1
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(23, 118)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(55, 13)
        Me.Label4.TabIndex = 0
        Me.Label4.Text = "Username"
        '
        'ForgotPasswordPanel
        '
        Me.ForgotPasswordPanel.BackColor = System.Drawing.Color.White
        Me.ForgotPasswordPanel.Controls.Add(Me.RecoverButton)
        Me.ForgotPasswordPanel.Controls.Add(Me.RecoverTextBox)
        Me.ForgotPasswordPanel.Controls.Add(Me.Label9)
        Me.ForgotPasswordPanel.Controls.Add(Me.Label8)
        Me.ForgotPasswordPanel.Location = New System.Drawing.Point(630, 111)
        Me.ForgotPasswordPanel.Name = "ForgotPasswordPanel"
        Me.ForgotPasswordPanel.Size = New System.Drawing.Size(254, 270)
        Me.ForgotPasswordPanel.TabIndex = 5
        '
        'RecoverButton
        '
        Me.RecoverButton.BackColor = System.Drawing.Color.MidnightBlue
        Me.RecoverButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.RecoverButton.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.RecoverButton.ForeColor = System.Drawing.SystemColors.ControlLightLight
        Me.RecoverButton.Location = New System.Drawing.Point(39, 172)
        Me.RecoverButton.Name = "RecoverButton"
        Me.RecoverButton.Size = New System.Drawing.Size(168, 31)
        Me.RecoverButton.TabIndex = 3
        Me.RecoverButton.Text = "RECOVER"
        Me.RecoverButton.UseVisualStyleBackColor = False
        '
        'RecoverTextBox
        '
        Me.RecoverTextBox.Location = New System.Drawing.Point(28, 127)
        Me.RecoverTextBox.Multiline = True
        Me.RecoverTextBox.Name = "RecoverTextBox"
        Me.RecoverTextBox.Size = New System.Drawing.Size(196, 39)
        Me.RecoverTextBox.TabIndex = 2
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(13, 111)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(86, 13)
        Me.Label9.TabIndex = 1
        Me.Label9.Text = "Registered Email"
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Font = New System.Drawing.Font("Niagara Engraved", 48.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label8.Location = New System.Drawing.Point(33, 31)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(183, 68)
        Me.Label8.TabIndex = 0
        Me.Label8.Text = "RECOVERY"
        '
        'LoggedInPanel
        '
        Me.LoggedInPanel.BackColor = System.Drawing.Color.White
        Me.LoggedInPanel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.LoggedInPanel.Controls.Add(Me.ChangedSuccPanel)
        Me.LoggedInPanel.Controls.Add(Me.Label17)
        Me.LoggedInPanel.Controls.Add(Me.Label16)
        Me.LoggedInPanel.Controls.Add(Me.Label15)
        Me.LoggedInPanel.Controls.Add(Me.PictureBox2)
        Me.LoggedInPanel.Controls.Add(Me.LogoutButton)
        Me.LoggedInPanel.Controls.Add(Me.Label13)
        Me.LoggedInPanel.Controls.Add(Me.Label12)
        Me.LoggedInPanel.Controls.Add(Me.Label11)
        Me.LoggedInPanel.Controls.Add(Me.Label10)
        Me.LoggedInPanel.Location = New System.Drawing.Point(47, 50)
        Me.LoggedInPanel.Name = "LoggedInPanel"
        Me.LoggedInPanel.Size = New System.Drawing.Size(819, 522)
        Me.LoggedInPanel.TabIndex = 6
        '
        'ChangedSuccPanel
        '
        Me.ChangedSuccPanel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.ChangedSuccPanel.Controls.Add(Me.ChangedButt)
        Me.ChangedSuccPanel.Controls.Add(Me.newP)
        Me.ChangedSuccPanel.Controls.Add(Me.oldP)
        Me.ChangedSuccPanel.Controls.Add(Me.Label20)
        Me.ChangedSuccPanel.Controls.Add(Me.Label19)
        Me.ChangedSuccPanel.Controls.Add(Me.Label18)
        Me.ChangedSuccPanel.Location = New System.Drawing.Point(309, 149)
        Me.ChangedSuccPanel.Name = "ChangedSuccPanel"
        Me.ChangedSuccPanel.Size = New System.Drawing.Size(245, 160)
        Me.ChangedSuccPanel.TabIndex = 13
        '
        'ChangedButt
        '
        Me.ChangedButt.BackColor = System.Drawing.Color.MidnightBlue
        Me.ChangedButt.Cursor = System.Windows.Forms.Cursors.Hand
        Me.ChangedButt.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.ChangedButt.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ChangedButt.ForeColor = System.Drawing.SystemColors.Control
        Me.ChangedButt.Location = New System.Drawing.Point(80, 125)
        Me.ChangedButt.Name = "ChangedButt"
        Me.ChangedButt.Size = New System.Drawing.Size(75, 23)
        Me.ChangedButt.TabIndex = 5
        Me.ChangedButt.Text = "DONE"
        Me.ChangedButt.UseVisualStyleBackColor = False
        '
        'newP
        '
        Me.newP.Location = New System.Drawing.Point(26, 98)
        Me.newP.Name = "newP"
        Me.newP.Size = New System.Drawing.Size(195, 20)
        Me.newP.TabIndex = 4
        '
        'oldP
        '
        Me.oldP.Location = New System.Drawing.Point(26, 54)
        Me.oldP.Name = "oldP"
        Me.oldP.Size = New System.Drawing.Size(197, 20)
        Me.oldP.TabIndex = 3
        '
        'Label20
        '
        Me.Label20.AutoSize = True
        Me.Label20.Location = New System.Drawing.Point(13, 82)
        Me.Label20.Name = "Label20"
        Me.Label20.Size = New System.Drawing.Size(78, 13)
        Me.Label20.TabIndex = 2
        Me.Label20.Text = "New Password"
        '
        'Label19
        '
        Me.Label19.AutoSize = True
        Me.Label19.Location = New System.Drawing.Point(13, 38)
        Me.Label19.Name = "Label19"
        Me.Label19.Size = New System.Drawing.Size(75, 13)
        Me.Label19.TabIndex = 1
        Me.Label19.Text = "Old Password:"
        '
        'Label18
        '
        Me.Label18.AutoSize = True
        Me.Label18.Font = New System.Drawing.Font("Segoe UI Semibold", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label18.Location = New System.Drawing.Point(32, 12)
        Me.Label18.Name = "Label18"
        Me.Label18.Size = New System.Drawing.Size(179, 15)
        Me.Label18.TabIndex = 0
        Me.Label18.Text = "Password Changed Successfully!"
        '
        'Label17
        '
        Me.Label17.AutoSize = True
        Me.Label17.Font = New System.Drawing.Font("Nirmala UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label17.Location = New System.Drawing.Point(77, 250)
        Me.Label17.Name = "Label17"
        Me.Label17.Size = New System.Drawing.Size(58, 17)
        Me.Label17.TabIndex = 12
        Me.Label17.Text = "Settings"
        '
        'Label16
        '
        Me.Label16.AutoSize = True
        Me.Label16.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label16.Location = New System.Drawing.Point(192, 104)
        Me.Label16.Name = "Label16"
        Me.Label16.Size = New System.Drawing.Size(53, 13)
        Me.Label16.TabIndex = 11
        Me.Label16.Text = "BSIT - 2A"
        '
        'Label15
        '
        Me.Label15.AutoSize = True
        Me.Label15.Font = New System.Drawing.Font("Nirmala UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label15.Location = New System.Drawing.Point(192, 87)
        Me.Label15.Name = "Label15"
        Me.Label15.Size = New System.Drawing.Size(135, 17)
        Me.Label15.TabIndex = 10
        Me.Label15.Text = "Tutungan, Jameel U."
        '
        'PictureBox2
        '
        Me.PictureBox2.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None
        Me.PictureBox2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.PictureBox2.ImageLocation = "sjw.gif"
        Me.PictureBox2.Location = New System.Drawing.Point(49, 87)
        Me.PictureBox2.Name = "PictureBox2"
        Me.PictureBox2.Size = New System.Drawing.Size(127, 122)
        Me.PictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom
        Me.PictureBox2.TabIndex = 9
        Me.PictureBox2.TabStop = False
        '
        'LogoutButton
        '
        Me.LogoutButton.BackColor = System.Drawing.Color.MidnightBlue
        Me.LogoutButton.Cursor = System.Windows.Forms.Cursors.Hand
        Me.LogoutButton.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LogoutButton.ForeColor = System.Drawing.SystemColors.ControlLightLight
        Me.LogoutButton.Location = New System.Drawing.Point(709, 468)
        Me.LogoutButton.Name = "LogoutButton"
        Me.LogoutButton.Size = New System.Drawing.Size(99, 37)
        Me.LogoutButton.TabIndex = 8
        Me.LogoutButton.Text = "LOG OUT"
        Me.LogoutButton.UseVisualStyleBackColor = False
        '
        'Label13
        '
        Me.Label13.AutoSize = True
        Me.Label13.Location = New System.Drawing.Point(27, 267)
        Me.Label13.Name = "Label13"
        Me.Label13.Size = New System.Drawing.Size(163, 13)
        Me.Label13.TabIndex = 3
        Me.Label13.Text = "----------------------------------------------------"
        '
        'Label12
        '
        Me.Label12.AutoSize = True
        Me.Label12.Location = New System.Drawing.Point(27, 58)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(763, 13)
        Me.Label12.TabIndex = 2
        Me.Label12.Text = resources.GetString("Label12.Text")
        '
        'Label11
        '
        Me.Label11.AutoSize = True
        Me.Label11.Cursor = System.Windows.Forms.Cursors.Hand
        Me.Label11.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label11.ForeColor = System.Drawing.SystemColors.Highlight
        Me.Label11.Location = New System.Drawing.Point(46, 296)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(114, 13)
        Me.Label11.TabIndex = 1
        Me.Label11.Text = "- Change Password -"
        '
        'Label10
        '
        Me.Label10.AutoSize = True
        Me.Label10.Font = New System.Drawing.Font("Century Gothic", 20.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label10.Location = New System.Drawing.Point(24, 25)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(152, 33)
        Me.Label10.TabIndex = 0
        Me.Label10.Text = "Welcome!"
        '
        'ChangePasswordPanel
        '
        Me.ChangePasswordPanel.BackColor = System.Drawing.Color.White
        Me.ChangePasswordPanel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.ChangePasswordPanel.Controls.Add(Me.ChangePassButton)
        Me.ChangePasswordPanel.Controls.Add(Me.TextBox1)
        Me.ChangePasswordPanel.Controls.Add(Me.Label14)
        Me.ChangePasswordPanel.Location = New System.Drawing.Point(297, 223)
        Me.ChangePasswordPanel.Name = "ChangePasswordPanel"
        Me.ChangePasswordPanel.Size = New System.Drawing.Size(320, 171)
        Me.ChangePasswordPanel.TabIndex = 8
        '
        'ChangePassButton
        '
        Me.ChangePassButton.BackColor = System.Drawing.Color.MidnightBlue
        Me.ChangePassButton.Cursor = System.Windows.Forms.Cursors.Hand
        Me.ChangePassButton.Font = New System.Drawing.Font("Nirmala UI", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ChangePassButton.ForeColor = System.Drawing.SystemColors.ControlLightLight
        Me.ChangePassButton.Location = New System.Drawing.Point(76, 99)
        Me.ChangePassButton.Name = "ChangePassButton"
        Me.ChangePassButton.Size = New System.Drawing.Size(166, 31)
        Me.ChangePassButton.TabIndex = 2
        Me.ChangePassButton.Text = "CHANGE PASSWORD"
        Me.ChangePassButton.UseVisualStyleBackColor = False
        '
        'TextBox1
        '
        Me.TextBox1.Location = New System.Drawing.Point(59, 58)
        Me.TextBox1.Multiline = True
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(196, 30)
        Me.TextBox1.TabIndex = 1
        '
        'Label14
        '
        Me.Label14.AutoSize = True
        Me.Label14.Location = New System.Drawing.Point(28, 36)
        Me.Label14.Name = "Label14"
        Me.Label14.Size = New System.Drawing.Size(78, 13)
        Me.Label14.TabIndex = 0
        Me.Label14.Text = "New Password"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Control
        Me.BackgroundImage = Global.ACT_LogReg_SRN.My.Resources.Resources.bg2
        Me.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.ClientSize = New System.Drawing.Size(914, 616)
        Me.Controls.Add(Me.ChangePasswordPanel)
        Me.Controls.Add(Me.ForgotPasswordPanel)
        Me.Controls.Add(Me.RegistrationPanel)
        Me.Controls.Add(Me.LoggedInPanel)
        Me.Controls.Add(Me.LoginPanel)
        Me.Controls.Add(Me.PictureBox1)
        Me.DoubleBuffered = True
        Me.MaximizeBox = False
        Me.MaximumSize = New System.Drawing.Size(930, 655)
        Me.MinimumSize = New System.Drawing.Size(930, 655)
        Me.Name = "Form1"
        Me.Text = "ACT_ITELEC"
        Me.LoginPanel.ResumeLayout(False)
        Me.LoginPanel.PerformLayout()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.RegistrationPanel.ResumeLayout(False)
        Me.RegistrationPanel.PerformLayout()
        Me.ForgotPasswordPanel.ResumeLayout(False)
        Me.ForgotPasswordPanel.PerformLayout()
        Me.LoggedInPanel.ResumeLayout(False)
        Me.LoggedInPanel.PerformLayout()
        Me.ChangedSuccPanel.ResumeLayout(False)
        Me.ChangedSuccPanel.PerformLayout()
        CType(Me.PictureBox2, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ChangePasswordPanel.ResumeLayout(False)
        Me.ChangePasswordPanel.PerformLayout()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents UsernameTextBox As TextBox
    Friend WithEvents PasswordTextBox As TextBox
    Friend WithEvents LoginPanel As Panel
    Friend WithEvents Label3 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label1 As Label
    Friend WithEvents RegisterLabel As Label
    Friend WithEvents ForgotLabel As Label
    Friend WithEvents PictureBox1 As PictureBox
    Friend WithEvents LoginButton As Button
    Friend WithEvents ForgotPasswordPanel As Panel
    Friend WithEvents UsernameRegTextBox As TextBox
    Friend WithEvents Label4 As Label
    Friend WithEvents Label7 As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents PassRegTextBox As TextBox
    Friend WithEvents Label5 As Label
    Friend WithEvents RegisterButton As Button
    Friend WithEvents EmailRegTextBox As TextBox
    Friend WithEvents RecoverTextBox As TextBox
    Friend WithEvents Label9 As Label
    Friend WithEvents Label8 As Label
    Friend WithEvents RecoverButton As Button
    Friend WithEvents LoggedInPanel As Panel
    Friend WithEvents Label13 As Label
    Friend WithEvents Label12 As Label
    Friend WithEvents Label11 As Label
    Friend WithEvents Label10 As Label
    Friend WithEvents LogoutButton As Button
    Private WithEvents RegistrationPanel As Panel
    Friend WithEvents ChangePasswordPanel As Panel
    Friend WithEvents ChangePassButton As Button
    Friend WithEvents TextBox1 As TextBox
    Friend WithEvents Label14 As Label
    Friend WithEvents Label15 As Label
    Friend WithEvents PictureBox2 As PictureBox
    Friend WithEvents Label17 As Label
    Friend WithEvents Label16 As Label
    Friend WithEvents ChangedSuccPanel As Panel
    Friend WithEvents newP As TextBox
    Friend WithEvents oldP As TextBox
    Friend WithEvents Label20 As Label
    Friend WithEvents Label19 As Label
    Friend WithEvents Label18 As Label
    Friend WithEvents ChangedButt As Button
End Class
