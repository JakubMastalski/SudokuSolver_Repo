#include "PanelButtonsSecondary.h"


void PanelButtonsSecondary::RestartButton_Click()
{
    Application::Restart();
}

void PanelButtonsSecondary::HideButton_Click(Panel^ MenuOptionsPanel, Button^ ShowButton)
{
    MenuOptionsPanel->Visible = false;
    ShowButton->Visible = true;
}

void PanelButtonsSecondary::ShowButton_Click(Panel^ MenuOptionsPanel, Button^ ShowButton)
{
    MenuOptionsPanel->Visible = true;
    ShowButton->Visible = false;
}

void PanelButtonsSecondary::ExitButton_Click()
{
    Application::Exit();
}