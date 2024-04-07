# User Authentication System

## Description
This is a simple user authentication system developed in Visual Basic .NET. The application allows users to register, login, recover forgotten passwords, and change passwords. It provides basic functionalities to manage user credentials securely.

## Features
- User registration: Allows users to register by providing a username, email, and password.
- User login: Validates user credentials upon login and grants access to the system.
- Password recovery: Allows users to recover forgotten passwords by entering their registered email.
- Password change: Enables users to change their passwords securely.

## Usage
1. **Registration**: Enter a username, email, and password to register.
2. **Login**: Provide the registered username and password to access the system.
3. **Forgot Password**: Enter the registered email to receive the forgotten password.
4. **Change Password**: Change the current password by entering a new password.

## Components
- `PictureBox`: Displays background image.
- `LoginPanel`: Allows users to login with their credentials.
- `RegistrationPanel`: Enables users to register by providing required details.
- `ForgotPasswordPanel`: Facilitates password recovery by entering the registered email.
- `LoggedInPanel`: Panel displayed after successful login, providing options to change password and logout.
- `ChangePasswordPanel`: Allows users to change their passwords securely.
- `ChangedSuccPanel`: Panel displayed after successfully changing the password, showing the old and new passwords.

## Event Handlers
- `Form1_Load`: Initializes the form and hides unnecessary panels at the start.
- `LoginButton_Click`: Validates user login credentials and grants access if valid.
- `RegisterLabel_Click`: Displays the registration panel when clicked.
- `ForgotLabel_Click`: Displays the forgot password panel when clicked.
- `RegisterButton_Click`: Registers the user with provided details and allows login.
- `RecoverButton_Click`: Recovers forgotten password by sending it to the registered email.
- `Label11_Click`: Initiates the password change process.
- `ChangePassButton_Click`: Changes the user password securely.
- `ChangedButt_Click`: Closes the password changed success panel.
- `LogoutButton_Click`: Logs out the user and displays the login panel.

## Disclaimer
This application is developed for educational purposes and may require further customization or modification.
