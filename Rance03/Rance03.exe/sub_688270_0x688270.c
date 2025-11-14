// 函数: sub_688270
// 地址: 0x688270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1261
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_esi
int32_t var_98 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = 0xf
int32_t var_74 = 0
char var_84 = 0
int32_t ecx_1 = sub_402110(&var_84, "DPSplitWindow", 0xd)
int32_t var_4 = 0
int32_t lpwndpl

if (*(arg1 + 0xd0) == 0)
    struct dpsound::CSplitWindow::VTable** eax_5 = sub_69adc6(0x98)
    struct dpsound::CSplitWindow::VTable** var_88_1 = eax_5
    var_4.b = 1
    struct dpsound::CSplitWindow::VTable** eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_693870(eax_5)
    
    var_4.b = 0
    *(arg1 + 0xd0) = eax_6
    char* eax_7 = &var_84
    
    if (var_70 u>= 0x10)
        eax_7 = var_84.d
    
    sub_401f60(&lpwndpl, eax_7)
    var_4.b = 2
    int32_t var_9c_2 = *(arg1 + 0xb4)
    int32_t var_a0_1 = *(arg1 + 0xb0)
    void var_a8
    int32_t var_a4
    ecx_1 = sub_693c00(*(arg1 + 0xd0), &lpwndpl, arg2, *(*(arg1 + 4) + 0x14), *(arg1 + 0xa8), 
        *(arg1 + 0xac), var_a8, var_a4)
    var_4.b = 0
    int32_t var_58
    
    if (var_58 u>= 0x10)
        ecx_1 = j__free(lpwndpl)

int32_t result = *(arg1 + 0xc8)
void* ebx

if (result == 0 || *(arg1 + 0xcc) == 0)
    ebx.b = 0
else
    int32_t var_9c_4 = 0
    int32_t ecx_6 = sub_694380(*(arg1 + 0xd0), result, ecx_1)
    int32_t var_9c_5 = 1
    sub_694380(*(arg1 + 0xd0), *(arg1 + 0xcc), ecx_6)
    void* ecx_8 = *(arg1 + 0xd0)
    int32_t edx_1 = *(arg1 + 0xc4)
    *(ecx_8 + 0x28) = *(arg1 + 0xc0)
    *(ecx_8 + 0x2c) = edx_1
    GetWindowPlacement(*(arg1 + 8), &lpwndpl)
    WINDOWPLACEMENT lpwndpl_1
    GetWindowPlacement(*(arg1 + 8), &lpwndpl_1)
    int32_t var_4c
    int32_t var_44
    sub_694630(*(arg1 + 0xd0), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
        var_44 - var_4c)
    ebx.b = 1

if (var_70 u>= 0x10)
    j__free(var_84.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return result
