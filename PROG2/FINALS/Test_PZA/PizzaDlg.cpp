
// PizzaDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Pizza.h"
#include "PizzaDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()

    afx_msg void OnBnClickedButton3();

};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CPizzaDlg dialog



CPizzaDlg::CPizzaDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPizzaDlg::IDD, pParent)
	, m_text(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	//  IDC_RADIO2 = 0;
}

void CPizzaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_text);
}

BEGIN_MESSAGE_MAP(CPizzaDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHECK4, &CPizzaDlg::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_RADIO1, &CPizzaDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CPizzaDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_BUTTON1, &CPizzaDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CPizzaDlg::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT1, &CPizzaDlg::OnEnChangeEdit1)
    ON_BN_CLICKED(IDC_BUTTON2, &CPizzaDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_CHECK6, &CPizzaDlg::OnBnClickedCheck6)
	ON_BN_CLICKED(IDC_RADIO3, &CPizzaDlg::OnBnClickedRadio3)
    ON_BN_CLICKED(IDC_RADIO4, &CPizzaDlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_CHECK2, &CPizzaDlg::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK1, &CPizzaDlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK3, &CPizzaDlg::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK5, &CPizzaDlg::OnBnClickedCheck5)
	ON_BN_CLICKED(IDC_RADIO5, &CPizzaDlg::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CPizzaDlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO7, &CPizzaDlg::OnBnClickedRadio7)
	ON_BN_CLICKED(IDC_BUTTON3, &CPizzaDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CPizzaDlg message handlers

BOOL CPizzaDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CPizzaDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CPizzaDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPizzaDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CPizzaDlg::OnBnClickedRadio1() // Size from 1-3
{
	// TODO: Add your control notification handler code here
	// Small
}


void CPizzaDlg::OnBnClickedRadio2()
{
	// TODO: Add your control notification handler code here
	// Medium
}


void CPizzaDlg::OnBnClickedRadio3()
{
	// TODO: Add your control notification handler code here
	// Large
}


void CPizzaDlg::OnBnClickedRadio4() // Crust from 4-5
{
	// TODO: Add your control notification handler code here
	// Thin
}


void CPizzaDlg::OnBnClickedRadio5()
{
	// TODO: Add your control notification handler code here
	// Thick
}

void CPizzaDlg::OnBnClickedRadio6() // Eat In and Take out from 6-7
{
	// TODO: Add your control notification handler code here
	// Eat in
}

void CPizzaDlg::OnBnClickedRadio7()
{
	// TODO: Add your control notification handler code here
	// Take out
}


void CPizzaDlg::OnBnClickedButton1()
{
    // Handle radio button selections
    int sizeSelection = GetCheckedRadioButton(IDC_RADIO1, IDC_RADIO3);
    int crustSelection = GetCheckedRadioButton(IDC_RADIO4, IDC_RADIO5);
    int eatInTakeOutSelection = GetCheckedRadioButton(IDC_RADIO6, IDC_RADIO7);

    CStringW sizeText, crustText, eatInTakeOutText;
    CStringW toppingsText;

    switch (sizeSelection)
    {
        case IDC_RADIO1:
            sizeText = L"Small";
            break;
        case IDC_RADIO2:
            sizeText = L"Medium";
            break;
        case IDC_RADIO3:
            sizeText = L"Large";
            break;
    }

    switch (crustSelection)
    {
        case IDC_RADIO4:
            crustText = L"Thin";
            break;
        case IDC_RADIO5:
            crustText = L"Thick";
            break;
    }

    switch (eatInTakeOutSelection)
    {
        case IDC_RADIO6:
            eatInTakeOutText = L"Eat In";
            break;
        case IDC_RADIO7:
            eatInTakeOutText = L"Take Out";
            break;
    }

    // Handle toppings checkboxes
    CButton* pToppingsCheckboxes[] = {
        (CButton*)GetDlgItem(IDC_CHECK1),
        (CButton*)GetDlgItem(IDC_CHECK2),
        (CButton*)GetDlgItem(IDC_CHECK3),
        (CButton*)GetDlgItem(IDC_CHECK4),
        (CButton*)GetDlgItem(IDC_CHECK5),
        (CButton*)GetDlgItem(IDC_CHECK6)
    };

    CStringW toppings[] = {
        L"Cheese",
        L"Mushrooms",
        L"Black Olives",
        L"Onions",
        L"Green peppers",
        L"Tomatoes"
    };

    for (int i = 0; i < 6; i++)
    {
        if (pToppingsCheckboxes[i]->GetCheck())
        {
            if (!toppingsText.IsEmpty())
                toppingsText += L", ";
            toppingsText += toppings[i];
        }
    }

    // Update the text field
    m_text.Format(L"Processing Order...\r\n\r\nSize: %s\r\nToppings: %s\r\nCrust: %s\r\nMode: %s",
                  sizeText, toppingsText, crustText, eatInTakeOutText);
    m_text.Replace(L"\n", L"\r\n");
    UpdateData(FALSE);
}


void CPizzaDlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CPizzaDlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	// Exit
	PostQuitMessage(0); // Exits the application
}


void CPizzaDlg::OnBnClickedCheck1() // Toppings 1-6
{
	// TODO: Add your control notification handler code here
	//Cheese
}


void CPizzaDlg::OnBnClickedCheck2()
{
	// TODO: Add your control notification handler code here
	//Mushrooms
}


void CPizzaDlg::OnBnClickedCheck3()
{
	// TODO: Add your control notification handler code here
	//Black Olives
}


void CPizzaDlg::OnBnClickedCheck4()
{
	// TODO: Add your control notification handler code here
	// Onions
}


void CPizzaDlg::OnBnClickedCheck5()
{
	// TODO: Add your control notification handler code here
	// Green peppers
}


void CPizzaDlg::OnBnClickedCheck6()
{
	// TODO: Add your control notification handler code here
	// Tomatoes
}


void CPizzaDlg::OnBnClickedButton3()
{
    // Unselect radio buttons
    CButton* pRadioButtons[] = {
        (CButton*)GetDlgItem(IDC_RADIO1),
        (CButton*)GetDlgItem(IDC_RADIO2),
        (CButton*)GetDlgItem(IDC_RADIO3),
        (CButton*)GetDlgItem(IDC_RADIO4),
        (CButton*)GetDlgItem(IDC_RADIO5),
        (CButton*)GetDlgItem(IDC_RADIO6),
        (CButton*)GetDlgItem(IDC_RADIO7)
    };

    for (int i = 0; i < 7; i++)
    {
        pRadioButtons[i]->SetCheck(BST_UNCHECKED);
    }

    // Clear checkboxes
    CButton* pToppingsCheckboxes[] = {
        (CButton*)GetDlgItem(IDC_CHECK1),
        (CButton*)GetDlgItem(IDC_CHECK2),
        (CButton*)GetDlgItem(IDC_CHECK3),
        (CButton*)GetDlgItem(IDC_CHECK4),
        (CButton*)GetDlgItem(IDC_CHECK5),
        (CButton*)GetDlgItem(IDC_CHECK6)
    };

    for (int i = 0; i < 6; i++)
    {
        pToppingsCheckboxes[i]->SetCheck(BST_UNCHECKED);
    }

    // Clear text field
    m_text.Empty();
    UpdateData(FALSE);
}



