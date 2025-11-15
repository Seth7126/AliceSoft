// 函数: sub_49c350
// 地址: 0x49c350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7308d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_160 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x28) == 0)
    result = 0
else
    *(arg1 + 0x34) = arg4
    char string
    _memset(&string, 0, 0x100)
    GetWindowTextA(arg2, &string, 0x100)
    *(arg1 + 0x2c) = GetSystemMetrics(SM_CXSCREEN)
    void* esi_2 = (GetSystemMetrics(SM_CYDLGFRAME) << 1) + 0x20 + GetSystemMetrics(SM_CYMENU)
    int32_t var_11c_1 = 0xf
    *(arg1 + 0x30) = GetSystemMetrics(SM_CYCAPTION) + esi_2
    int32_t var_120_1 = 0
    char var_130 = 0
    sub_403490(&var_130, "AliceRunFullScreenMenuClass", 0x1b)
    int32_t var_8_1 = 0
    char* ecx_2 = *(arg1 + 8) + 0x30
    
    if (ecx_2 != &var_130)
        sub_403590(ecx_2, &var_130, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_11c_1 u>= 0x10)
        sub_403160(var_130.d, var_11c_1 + 1, 1)
    
    *(*(arg1 + 8) + 0x68) = 0x80cb0000
    *(*(arg1 + 8) + 0x7c) = arg2
    *(*(arg1 + 8) + 0x80) = arg5
    *(*(arg1 + 8) + 0x18) = arg6
    HGDIOBJ eax_15 = GetStockObject(WHITE_BRUSH)
    void* ecx_6 = *(arg1 + 8)
    int32_t var_134_1 = 0xf
    int32_t var_138_1 = 0
    char var_148 = 0
    *(ecx_6 + 0x20) = eax_15
    void* ecx_7
    
    if (string != 0)
        char* ecx_8 = &string
        
        do
            eax_15.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_15.b != 0)
        
        void var_117
        ecx_7 = ecx_8 - &var_117
    else
        ecx_7 = nullptr
    
    sub_403490(&var_148, &string, ecx_7)
    int32_t var_8_3 = 1
    char* ecx_11 = *(arg1 + 8) + 0x48
    
    if (ecx_11 != &var_148)
        sub_403590(ecx_11, &var_148, 0, 0xffffffff)
    
    if (var_134_1 u>= 0x10)
        sub_403160(var_148.d, var_134_1 + 1, 1)
    
    void* eax_18 = *(arg1 + 8)
    int32_t esi_3 = *(arg1 + 0x30)
    int32_t edx_1 = *(arg1 + 0x2c)
    *(eax_18 + 0x6c) = 0
    *(eax_18 + 0x70) = neg.d(esi_3)
    *(eax_18 + 0x74) = edx_1
    *(eax_18 + 0x78) = esi_3
    *(*(arg1 + 8) + 0x60) = arg3
    *(*(arg1 + 8) + 0x84) = arg1
    *(arg1 + 0x28) = 0
    *(arg1 + 0x1c) = 0
    
    if (sub_6ced40(*(arg1 + 8)) != 0)
        SetFocus(**(arg1 + 8))
        SetForegroundWindow(**(arg1 + 8))
        ShowWindow(**(arg1 + 8), SW_SHOWMAXIMIZED)
        UpdateWindow(**(arg1 + 8))
        result = 1
    else
        *(arg1 + 0x28) = 1
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
