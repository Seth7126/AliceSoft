// 函数: sub_435960
// 地址: 0x435960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xc8) != *(arg1 + 0xcc))
    void* ecx = *(data_7fcb6c + 0x934)
    
    if (ecx != 0)
        sub_480090(ecx + 0x5c, *(arg1 + 0x42c))

int32_t* ecx_2 = *(arg1 + 0x440)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    *(arg1 + 0x440) = 0

HANDLE hObject = *(arg1 + 0x24)

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    *(arg1 + 0x24) = 0xffffffff

HANDLE hHandle = *(arg1 + 8)

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(*(arg1 + 8))
    *(arg1 + 8) = 0

HANDLE hEvent = *(arg1 + 0x10)

if (hEvent != 0)
    ResetEvent(hEvent)

EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 0x9e4) + 4))
void* eax_10 = *(arg1 + 0x9e4)
*(eax_10 + 4) = eax_10
int32_t* eax_11 = *(arg1 + 0x9e4)
*eax_11 = eax_11
void* eax_12 = *(arg1 + 0x9e4)
*(eax_12 + 8) = eax_12
*(arg1 + 0x9e8) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 0x18) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
