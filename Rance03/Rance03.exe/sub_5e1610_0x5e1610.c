// 函数: sub_5e1610
// 地址: 0x5e1610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6caca6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_144
int32_t eax_2 = __security_cookie ^ &var_144
int32_t __saved_edi
int32_t var_158 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x28) == 0)
    result = 0
else
    *(arg1 + 0x34) = arg4
    char string = 0
    char var_113[0xff]
    _memset(&var_113, 0, 0xff)
    GetWindowTextA(arg2, &string, 0x100)
    *(arg1 + 0x2c) = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_3 = GetSystemMetrics(SM_CYDLGFRAME) * 2 + GetSystemMetrics(SM_CYMENU)
    int32_t var_118_1 = 0xf
    *(arg1 + 0x30) = GetSystemMetrics(SM_CYCAPTION) + esi_3
    int32_t var_11c_1 = 0
    char var_12c = 0
    sub_402110(&var_12c, "AliceRunFullScreenMenuClass", 0x1b)
    int32_t var_4 = 0
    char* ecx_2 = *(arg1 + 8) + 0x30
    
    if (ecx_2 != &var_12c)
        sub_401ff0(ecx_2, &var_12c, 0, 0xffffffff)
    
    int32_t var_4_1 = 0xffffffff
    
    if (var_118_1 u>= 0x10)
        j__free(var_12c.d)
    
    *(*(arg1 + 8) + 0x68) = 0x80cb0000
    *(*(arg1 + 8) + 0x7c) = arg2
    *(*(arg1 + 8) + 0x80) = arg5
    *(*(arg1 + 8) + 0x18) = arg6
    HGDIOBJ eax_15 = GetStockObject(WHITE_BRUSH)
    void* ecx_5 = *(arg1 + 8)
    int32_t var_130_1 = 0xf
    int32_t var_134_1 = 0
    var_144 = 0
    *(ecx_5 + 0x20) = eax_15
    void* ecx_6
    
    if (string != 0)
        char* ecx_7 = &string
        
        do
            eax_15.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (eax_15.b != 0)
        
        ecx_6 = ecx_7 - &var_113
    else
        ecx_6 = nullptr
    
    sub_402110(&var_144, &string, ecx_6)
    int32_t var_4_2 = 1
    char* ecx_10 = *(arg1 + 8) + 0x48
    
    if (ecx_10 != &var_144)
        sub_401ff0(ecx_10, &var_144, 0, 0xffffffff)
    
    if (var_130_1 u>= 0x10)
        j__free(var_144.d)
    
    int32_t esi_4 = *(arg1 + 0x30)
    void* eax_16 = *(arg1 + 8)
    int32_t edx_1 = *(arg1 + 0x2c)
    *(eax_16 + 0x6c) = 0
    *(eax_16 + 0x70) = neg.d(esi_4)
    *(eax_16 + 0x74) = edx_1
    *(eax_16 + 0x78) = esi_4
    *(*(arg1 + 8) + 0x60) = arg3
    *(*(arg1 + 8) + 0x84) = arg1
    int32_t* ecx_14 = *(arg1 + 8)
    *(arg1 + 0x28) = 0
    *(arg1 + 0x1c) = 0
    
    if (sub_698a60(ecx_14) != 0)
        SetFocus(**(arg1 + 8))
        SetForegroundWindow(**(arg1 + 8))
        ShowWindow(**(arg1 + 8), SW_SHOWMAXIMIZED)
        UpdateWindow(**(arg1 + 8))
        result = 1
    else
        *(arg1 + 0x28) = 1
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_144)
return result
