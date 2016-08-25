
// SceneEditor.h : SceneEditor Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CSceneEditorApp:
// �йش����ʵ�֣������ SceneEditor.cpp
//

class CSceneEditorApp : public CWinAppEx
{
public:
	CSceneEditorApp();

	void newScene();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void CreateTerrain();
	afx_msg void DestroyTerrain();
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSceneEditorApp theApp;