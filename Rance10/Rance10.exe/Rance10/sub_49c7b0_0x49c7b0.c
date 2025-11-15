// 函数: sub_49c7b0
// 地址: 0x49c7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730908
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
EnableMenuItem(GetSystemMenu(arg2, 0), 0xf010, MF_GRAYED)
RECT rect
__builtin_memset(&rect, 0, 0x10)

if (GetClientRect(arg2, &rect) != 0)
    *(arg1 + 0x30) -= rect.bottom - rect.top
    SetWindowPos(arg2, nullptr, 0, 0, *(arg1 + 0x2c), *(arg1 + 0x30), SWP_NOMOVE)

SetMenu(arg2, *(*(arg1 + 8) + 0x80))
void* ebx = *(arg1 + 0x34)
int32_t eax_9 = *(*(arg1 + 8) + 0x80)
char eax_10
int32_t ecx_1
eax_10, ecx_1 = sub_4a3a50()

if (eax_10 == 0)
    int32_t var_44_2 = ecx_1
    rect.top = &win32only::CMenu::`vftable'
    rect.right = eax_9
    rect.bottom.b = 0
    sub_6ce2d0(&rect.top)

int32_t var_8_1 = 0
sub_49e330(ebx, sub_49a220(ebx + 0x270, &rect.top))
sub_417070(&rect.top)
DrawMenuBar(**(arg1 + 8))
uint32_t uIDEvent = *(arg1 + 0x10)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x14), uIDEvent)
    *(arg1 + 0x10) = 0

*(arg1 + 0x14) = arg2
*(arg1 + 0x10) = SetTimer(arg2, 1, 0xa, nullptr)
uint32_t eax_15 = timeGetTime()
EnterCriticalSection(data_7e70bc + 4)
int32_t ebx_1 = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax_15 u>= ebx_1)
    data_7fd50c = eax_15
    LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 0x18) = eax_15
else
    LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 0x18) = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return 0
