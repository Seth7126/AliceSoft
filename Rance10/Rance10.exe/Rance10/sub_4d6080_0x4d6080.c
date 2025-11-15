// 函数: sub_4d6080
// 地址: 0x4d6080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *arg3
arg3[1] = result

if (*(arg1 + 0x3c) != 0)
    int32_t* lpFileName_2
    sub_4175e0(result, arg2, &lpFileName_2, ".wav")
    int32_t var_8_1 = 0
    int32_t* lpFileName = &lpFileName_2
    int32_t var_30
    
    if (var_30 u>= 0x10)
        lpFileName = lpFileName_2
    
    uint32_t eax_3 = GetFileAttributesA(lpFileName)
    char ebx_1
    
    if (eax_3 == 0xffffffff)
    label_4d6116:
        void** lpFileName_3
        sub_4175e0(eax_3, arg2, &lpFileName_3, ".ogg")
        var_8_1.b = 1
        void** lpFileName_1 = &lpFileName_3
        int32_t var_18
        
        if (var_18 u>= 0x10)
            lpFileName_1 = lpFileName_3
        
        uint32_t eax_5 = GetFileAttributesA(lpFileName_1)
        
        if (eax_5 == 0xffffffff || (not.b((eax_5 u>> 4).b) & 1) == 0)
            ebx_1 = 0
        else
            ebx_1 = sub_67edf0(&lpFileName_3, arg3)
        
        if (var_18 u>= 0x10)
            sub_403160(lpFileName_3, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        lpFileName_3.b = 0
    else
        eax_3.b = not.b((eax_3 u>> 4).b)
        eax_3.b &= 1
        
        if (eax_3.b == 0)
            goto label_4d6116
        
        ebx_1 = sub_67edf0(&lpFileName_2, arg3)
    
    if (var_30 u>= 0x10)
        sub_403160(lpFileName_2, var_30 + 1, 1)
    
    result.b = ebx_1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
