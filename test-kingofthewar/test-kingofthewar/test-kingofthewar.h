
// test-kingofthewar.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CtestkingofthewarApp: 
// �йش����ʵ�֣������ test-kingofthewar.cpp
//

class CtestkingofthewarApp : public CWinApp
{
public:
	CtestkingofthewarApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CtestkingofthewarApp theApp;
