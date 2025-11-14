// 函数: sub_423200
// 地址: 0x423200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_1 = arg3 - 2

if ((*(**(*(arg1 + 0xe0) + 8) + 0x14))(arg5) == 4)
    esi_1 += sub_423e80(arg1, arg5, esi_1)

char* lprc_3
char* lprc_1 = lprc_3
int32_t ebx_2 = sub_4233c0(arg1, arg2, &lprc_3, arg4, esi_1) + sub_4310e0(arg1, arg2, &lprc_3, arg4)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t result

if (sub_42deb0(*(arg1 + 0xe0), arg5, esi_1, &var_2c) != 0)
    char* eax_12 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_12 = var_2c.d
    
    char* lprc
    sub_401f60(&lprc, eax_12)
    SetTextColor(arg2, 0)
    char* lprc_2 = &lprc
    int32_t var_30
    
    if (var_30 u>= 0x10)
        lprc_2 = lprc
    
    sub_42c0d0(arg1, arg2, lprc_3, arg4, lprc_2)
    int32_t var_34
    result = ebx_2 + var_34
    
    if (var_30 u>= 0x10)
        j__free(lprc)
    
    lprc = lprc_1
    int32_t eax_14 = *(arg1 + 0xc8)
    int32_t esi_3 = arg4 + eax_14
    int32_t var_38_1 = esi_3
    int32_t var_40_1 = esi_3 - 1
    int32_t eax_16
    int32_t edx_1
    edx_1:eax_16 = sx.q(eax_14 * result)
    void* var_3c_1 = &lprc_1[(eax_16 - edx_1) s>> 1]
    
    if (*(arg1 + 0xec) == arg3)
        FillRect(arg2, &lprc, *(arg1 + 0xdc))
    else if (arg3 == *(arg1 + 0xe8))
        FillRect(arg2, &lprc, *(arg1 + 0xd4))
else
    result = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
