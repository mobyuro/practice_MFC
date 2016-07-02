
// mobyuro_MFC.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// Cmobyuro_MFCApp:
// このクラスの実装については、mobyuro_MFC.cpp を参照してください。
//

class Cmobyuro_MFCApp : public CWinApp
{
public:
	Cmobyuro_MFCApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern Cmobyuro_MFCApp theApp;