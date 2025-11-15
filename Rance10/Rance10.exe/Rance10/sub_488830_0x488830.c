// 函数: sub_488830
// 地址: 0x488830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t arg_4 = arg_4
void* edi = nullptr
EnterCriticalSection(arg1[0x1d] + 4)
sub_42eb70(&arg1[0x1a], &var_4, &arg_4)
void** eax_3 = var_4

if (eax_3 != arg1[0x1a])
    edi = eax_3[5]

LeaveCriticalSection(arg1[0x1d] + 4)
HANDLE hHandle

if (edi != 0)
    hHandle = *(edi + 0x44)
    
    if (hHandle != 0)
        enum WAIT_EVENT eax_6
        eax_6.b = WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT
        return eax_6

hHandle.b = 0
return hHandle
