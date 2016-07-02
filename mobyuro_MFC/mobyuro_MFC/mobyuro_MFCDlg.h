
// mobyuro_MFCDlg.h : ヘッダー ファイル
//

#pragma once


// Cmobyuro_MFCDlg ダイアログ
class Cmobyuro_MFCDlg : public CDialogEx
{
// コンストラクション
public:
	Cmobyuro_MFCDlg(CWnd* pParent = NULL);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOBYURO_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
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
