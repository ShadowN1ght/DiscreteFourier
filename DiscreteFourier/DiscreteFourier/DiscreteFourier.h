
// DiscreteFourier.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDiscreteFourierApp: 
// �йش����ʵ�֣������ DiscreteFourier.cpp
//

class CDiscreteFourierApp : public CWinApp
{
public:
	CDiscreteFourierApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDiscreteFourierApp theApp;