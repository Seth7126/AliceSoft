// 函数: sub_524a90
// 地址: 0x524a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7395f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_5 = arg3
void** lpFileName_3 = arg2
int32_t* lpFileName_4 = lpFileName_5
lpFileName_5[1] = *lpFileName_5

if (*(arg1 + 0x38) == 0)
    goto label_524b60

void* var_2c
char* lpFileName = sub_524610(arg1, &var_2c, lpFileName_3)

if (*(lpFileName + 0x14) u>= 0x10)
    lpFileName = *lpFileName

uint32_t eax_4 = GetFileAttributesA(lpFileName)
uint32_t ebx

if (eax_4 != 0xffffffff)
    ebx.b = not.b((eax_4 u>> 4).b)
    ebx.b &= 1
else
    ebx.b = 0

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

char result

if (ebx.b == 0)
    lpFileName_5 = lpFileName_4
label_524b60:
    
    if (sub_524c90(arg1, lpFileName_3, lpFileName_5) != 0)
        result = 1
    else if (*(arg1 + 0x38) == 0)
    label_524c1b:
        
        if (lpFileName_3[5] u>= 0x10)
            lpFileName_3 = *lpFileName_3
        
        lpFileName_4 = lpFileName_3
        void var_44
        sub_403360(&var_44, 0x766e10)
        int32_t var_8_3 = 2
        var_8_3.b = 3
        void var_5c
        sub_45ab60(sub_409240(&lpFileName_4, &var_44, &var_5c, &lpFileName_4))
        sub_403320(&var_5c)
        sub_403320(&var_44)
        result = 0
    else
        char* lpFileName_1 = sub_5247b0(arg1, &var_2c, lpFileName_3)
        
        if (*(lpFileName_1 + 0x14) u>= 0x10)
            lpFileName_1 = *lpFileName_1
        
        uint32_t eax_8 = GetFileAttributesA(lpFileName_1)
        uint32_t ebx_1
        
        if (eax_8 != 0xffffffff)
            ebx_1.b = not.b((eax_8 u>> 4).b)
            ebx_1.b &= 1
        else
            ebx_1.b = 0
        
        sub_403320(&var_2c)
        
        if (ebx_1.b == 0)
            int32_t* lpFileName_6 = lpFileName_4
            
            if (*(arg1 + 0x38) == 0)
                goto label_524c1b
            
            PSTR lpFileName_2
            
            if (lpFileName_3[5] u< 0x10)
                lpFileName_2 = lpFileName_3
            else
                lpFileName_2 = *lpFileName_3
            
            uint32_t eax_11 = GetFileAttributesA(lpFileName_2)
            
            if (eax_11 == 0xffffffff || (not.b((eax_11 u>> 4).b) & 1) == 0)
                goto label_524c1b
            
            result = sub_67edf0(lpFileName_3, lpFileName_6)
        else
            int32_t var_8_2 = 1
            ebx_1.b = sub_67edf0(sub_5247b0(arg1, &var_2c, lpFileName_3), lpFileName_4)
            sub_403320(&var_2c)
            result = ebx_1.b
else
    int32_t var_8_1 = 0
    ebx.b = sub_67edf0(sub_524610(arg1, &var_2c, lpFileName_3), lpFileName_4)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
