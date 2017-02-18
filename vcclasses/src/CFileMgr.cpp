#include "vcclasses.h"
#include "vcversion.h"

static unsigned long g_Seek = vcversion::AdjustOffset(0x0048DEE0);
static unsigned long g_Read = vcversion::AdjustOffset(0x0048DF50);
static unsigned long g_CloseFile = vcversion::AdjustOffset(0x0048DEA0);
static unsigned long g_ReadLine = vcversion::AdjustOffset(0x0048DEB0);
static unsigned long g_OpenFile = vcversion::AdjustOffset(0x0048DF90);

__declspec(naked) void CFileMgr::Seek(int, int, int)
{
	__asm jmp g_Seek;
}

__declspec(naked) void CFileMgr::Read(int, char *, int)
{
	__asm jmp g_Read;
}

__declspec(naked) int CFileMgr::CloseFile(int)
{
	__asm jmp g_CloseFile;
}

__declspec(naked) bool CFileMgr::ReadLine(int, char *, int)
{
	__asm jmp g_ReadLine;
}

__declspec(naked) int CFileMgr::OpenFile(char const *, char const *)
{
	__asm jmp g_OpenFile;
}
