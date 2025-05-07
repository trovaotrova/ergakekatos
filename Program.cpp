#include "LoginForm.h"
#include "MainForm.h"
#include "RegistrationForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    User^ user = nullptr;

    while (true) {
        ergakekatos::LoginForm loginForm;
        loginForm.ShowDialog();

        if (loginForm.switchToRegister) {
            ergakekatos::RegistrationForm registrationForm;
            registrationForm.ShowDialog();

            if (registrationForm.switchToLogin) {
                continue;
            } else {
                user = registrationForm.user;
                break;
            }
        } else {
            user = loginForm.user;
            break;
        }
    }

    if (user != nullptr) {
        ergakekatos::MainForm mainForm(user);
        Application::Run(% mainForm);
    }
    else {
        MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
    }

    return 0;
}