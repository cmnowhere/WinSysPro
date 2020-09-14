//#include <stdio.h>
//#include <stdlib.h>
//#include <tchar.h>
//#include <locale.h>
//#include <Windows.h>
//
//#define STR_LEN 256
//#define CMD_TOKEN_NUM 10
//
//TCHAR ERROR_CMD[] = _T("'%s'은(는) 실행할 수 있는 프로그램이 아닙니다. \n");
//
//int CmdProcessing();
//TCHAR* StrLower(TCHAR*); // char * StrLower(char*)
//
//int _tmain(int argc, TCHAR* argv[])
//{
//	_tsetlocale(LC_ALL, _T("Korean")); // 한글입력 
//
//	DWORD isExit; // unsigned log 
//	while (1)
//	{
//		isExit = CmdProcessing();
//		if (isExit == TRUE)
//		{
//			_fputts(_T("명령어 처리를 종료합니다. \n"), stdout);
//			break;
//		}
//	}
//	return 0;
//}
//
//TCHAR cmdString[STR_LEN];
//TCHAR cmdTokenList[CMD_TOKEN_NUM][STR_LEN];
//TCHAR seps[] = _T(" ,\t\n");
//
///*
//	함수 : TCHAR int CmdProcessing()
//	기능 : 명령어를 입력 받아서 해당 명령어에 지정되어 있는 기능을 수행한다.
//			exit가 입력되면 TRUE를 반환하고 이는 프로그램의 종료로 이어진다.
//*/
//
//int CmdProcessing()
//{
//	TCHAR* next_token;
//	_fputts(_T("Best command prompt>> "), stdout);
//	_getts_s(cmdString, sizeof(cmdString) / sizeof(TCHAR));
//	TCHAR* token = _tcstok_s(cmdString, seps, &next_token);
//	int tokenNum = 0;
//	while (token != NULL)
//	{
//		_tcscpy_s(cmdTokenList[tokenNum++], sizeof(cmdTokenList[tokenNum]) / sizeof(TCHAR), StrLower(token));
//		token = _tcstok_s(NULL, seps, &next_token);
//	}
//
//	if (!_tcscmp(cmdTokenList[0], _T("exit")))
//	{
//		return TRUE;
//	}
//	else if (!_tcscmp(cmdTokenList[0], _T("명령어 1")))
//	{
//	}
//	else if (!_tcscmp(cmdTokenList[0], _T("명령어 2")))
//	{
//	}
//	else
//	{
//		_tprintf(ERROR_CMD, cmdTokenList[0]);
//	}
//	return 0;
//}
//
//TCHAR* StrLower(TCHAR* pStr)
//{
//	TCHAR* ret = pStr;
//
//	while (*pStr)
//	{
//		if (_istupper(*pStr))
//			*pStr = _totlower(*pStr);
//		pStr++;
//	}
//
//	return ret;
//}
//
//// 1. 명령어를 추가할 때 변경되는 부분
//// 2. 명령어의 대,소문자를 구분하지 않기 위해서 고려된 부분
//// 3. 명령어 EXIT가 입력되었을 때 프로그램 종료 방식
