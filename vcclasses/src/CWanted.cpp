#include "vcclasses.h"
#include "vcversion.h"

static unsigned long g_SetWantedLevelCheat = vcversion::AdjustOffset(0x004D1F80);
static unsigned long g_UpdateWantedLevel = vcversion::AdjustOffset(0x004D2110);

__declspec(naked) void CWanted::SetWantedLevelCheat(int)
{
	__asm jmp g_SetWantedLevelCheat;
}

__declspec(naked) void CWanted::UpdateWantedLevel(void)
{
	__asm jmp g_UpdateWantedLevel;
}