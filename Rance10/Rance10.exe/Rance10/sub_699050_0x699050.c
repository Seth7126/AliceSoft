// 函数: sub_699050
// 地址: 0x699050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 =
    &kiwi::CDirectSoundBuffer::`vftable'{for `common::SuicideRefCounter<class kiwi::ISoundBuffer>'}
sub_699210(arg1)
HANDLE hEvent_2 = arg1[0x14]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(arg1[0x14])
    arg1[0x14] = 0

HANDLE hEvent_3 = arg1[0x12]

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(arg1[0x12])
    arg1[0x12] = 0

int32_t eax_3 = arg1[0x1c]
void* edi_1 = &arg1[0x17]

if (eax_3 u>= 0x10)
    sub_403160(*edi_1, eax_3 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:0 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:0))
    edi_1 = *edi_1

*edi_1 = 0
arg1[0x15] = &thread::CCriticalSection::`vftable'
int32_t* ecx = arg1[0x16]

if (ecx != 0)
    (**ecx)(1)

HANDLE hEvent = arg1[0x14]
arg1[0x13] = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x14])
    arg1[0x14] = 0

HANDLE hEvent_1 = arg1[0x12]
arg1[0x11] = &thread::CEvent::`vftable'

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[0x12])
    arg1[0x12] = 0

BOOL hHandle = arg1[0x10]
arg1[0xf] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[0x10])
    arg1[0x10] = 0

int32_t var_8_1 = 0
int32_t* ecx_1 = arg1[0xd]

if (ecx_1 != 0)
    bool cond:1_1 = ecx_1[1] != 1
    hHandle = ecx_1[1]
    ecx_1[1] -= 1
    
    if (not(cond:1_1))
        int32_t* edx_1 = ecx_1[0x1e]
        
        if (edx_1 != 0)
            int32_t eax_7 = (**edx_1)(ecx_1, eax_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        hHandle = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return hHandle
