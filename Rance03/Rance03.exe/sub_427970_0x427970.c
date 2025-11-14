// 函数: sub_427970
// 地址: 0x427970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT eax_3 = SendMessageA(*(arg1 + 4), 0x149, arg2, 0)

if (eax_3 == 0xffffffff)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

LPARAM lParam_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_403540(&lParam_1, eax_3 + 1)
LPARAM lParam = lParam_1
LRESULT eax_5 = SendMessageA(*(arg1 + 4), 0x148, arg2, lParam)
WPARAM ebx

if (eax_5 != 0xffffffff)
    *(lParam + eax_5) = 0
    void* ecx_3
    
    if (*lParam != 0)
        LPARAM lParam_2 = lParam
        int32_t edx_1 = lParam_2 + 1
        
        do
            eax_5.b = *lParam_2
            lParam_2 += 1
        while (eax_5.b != 0)
        
        ecx_3 = lParam_2 - edx_1
    else
        ecx_3 = nullptr
    
    sub_402110(arg3, lParam, ecx_3)
    ebx.b = 1
else
    ebx.b = 0

if (lParam != 0)
    j__free(lParam)

eax_5.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
