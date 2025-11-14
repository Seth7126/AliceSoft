// 函数: sub_4121d0
// 地址: 0x4121d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3b80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t var_1c = __security_cookie ^ &var_6c
int32_t* lpString_2
int32_t* lpString_1 = lpString_2
BOOL result_4
BOOL result_1 = result_4
int32_t eax_4 = __security_cookie ^ &result_1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x40)
int32_t eax_5

if (ecx != 0)
    eax_5 = (**ecx)(eax_4)
else
    eax_5 = 0xffffffff

void var_68
(***(arg1 + 0x34))(&var_6c, &var_68, eax_5, eax_4)
sub_4144b0(arg1 + 0xc)
int32_t var_5c = 0xf
int32_t var_60 = 0
lpString_1.b = 0
int32_t var_18 = 0
BOOL result_5 = result_1
int32_t edx_2

if (result_5 s>= 0)
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
    edx_2 = edx_1 s>> 2

int32_t* var_40
int32_t var_2c

if (result_5 s< 0 || result_5 s>= (edx_2 u>> 0x1f) + edx_2)
    int32_t* ecx_10 = *(arg1 + 0x40)
    int32_t eax_14
    
    if (ecx_10 != 0)
        eax_14 = (**ecx_10)()
        result_5 = result_1
    else
        eax_14 = 0xffffffff
    
    int32_t var_8c_5 = arg2 + 1
    BOOL result_6 = result_5
    int32_t var_94_1 = eax_14
    int32_t* eax_16 = sub_4691f0(&var_40, 0x6da318)
    
    if (&lpString_1 != eax_16)
        if (var_5c u>= 0x10)
            j__free(lpString_1)
        
        var_5c = 0xf
        int32_t var_60_2 = 0
        lpString_1.b = 0
        sub_4030b0(&lpString_1, eax_16)
    
    if (var_2c u>= 0x10)
        j__free(var_40)
else
    int32_t* var_58
    sub_420a40(&var_58, result_5)
    var_18.b = 1
    int32_t* edi = &var_58
    int32_t* ecx_6 = *(arg1 + 0x40)
    int32_t var_44
    
    if (var_44 u>= 0x10)
        edi = var_58
    
    int32_t eax_11
    
    if (ecx_6 != 0)
        eax_11 = (**ecx_6)()
    else
        eax_11 = 0xffffffff
    
    int32_t var_8c = arg2 + 1
    BOOL result_2 = result_1
    int32_t* var_94 = edi
    int32_t var_98_1 = eax_11
    int32_t* eax_13 = sub_4691f0(&var_40, 0x6da2d8)
    
    if (&lpString_1 != eax_13)
        if (var_5c u>= 0x10)
            j__free(lpString_1)
        
        var_5c = 0xf
        int32_t var_60_1 = 0
        lpString_1.b = 0
        sub_4030b0(&lpString_1, eax_13)
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    var_18.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
int32_t* lpString = &lpString_1

if (var_5c u>= 0x10)
    lpString = lpString_1

BOOL result = SetWindowTextA(arg3, lpString)
BOOL result_3 = result_1

if (result_3 s>= 0)
    int32_t edx_4 = data_75d5d0
    int32_t eax_19
    
    if (result_3 s< (data_75d5d4 - edx_4) s>> 2)
        eax_19.b = *(edx_4 + (result_3 << 2)) != 0
    
    int32_t eax_20
    
    if (result_3 s>= (data_75d5d4 - edx_4) s>> 2 || eax_19.b == 0)
        result_3 = *(arg1 + 0x64)
        eax_20 = 0xffffffff
        result_1 = result_3
        int32_t var_74_1 = 0xffffffff
    else
        eax_20 = arg2
    
    data_74b438 = eax_20
    data_74b434 = result_3
    sub_403c40(arg1 + 0x68, arg1 + 0xc, arg4)
    result = result_1
    *(arg1 + 0x64) = result

if (var_5c u>= 0x10)
    result = j__free(lpString_1)

int32_t var_20
fsbase->NtTib.ExceptionList = var_20
int32_t var_28
sub_69a5bc(var_28 ^ &result_1)
return result
