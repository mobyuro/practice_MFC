
// mobyuro_MFCDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once


// Cmobyuro_MFCDlg �_�C�A���O
class Cmobyuro_MFCDlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	Cmobyuro_MFCDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOBYURO_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_edit1;
	CString m_edit2;
	afx_msg void OnBnClickedButton1();
};
