// 函数: sub_424690
// 地址: 0x424690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HDC hDC
int32_t eax_2 = __security_cookie ^ &hDC
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
hDC = arg2
int32_t var_30 = 0xf
int32_t result_1 = 0
char var_44 = 0
int32_t var_c_1 = 0
int32_t result

if (sub_42d9c0(*(arg1 + 0xe0), arg3, &var_44) != 0)
    SetTextColor(arg2, 0x472e8a)
    char* eax_6 = &var_44
    
    if (var_30 u>= 0x10)
        eax_6 = var_44.d
    
    sub_42c0d0(arg1, hDC, arg4, arg5, eax_6)
    int32_t ecx_2 = *(arg1 + 0xc8)
    int32_t esi_2 = arg5 + ecx_2
    RECT lprc
    lprc.left = arg4
    lprc.top = esi_2 - 1
    lprc.bottom = esi_2
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q(ecx_2 * result_1)
    lprc.right = ((eax_9 - edx_2) s>> 1) + arg4
    
    if (*(arg1 + 0xec) == arg3)
        FillRect(hDC, &lprc, *(arg1 + 0xdc))
    else if (arg3 == *(arg1 + 0xe8))
        FillRect(hDC, &lprc, *(arg1 + 0xd4))
    
    result = result_1
else
    result = 0

if (var_30 u>= 0x10)
    j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &hDC)
return result
