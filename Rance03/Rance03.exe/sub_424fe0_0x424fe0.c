// 函数: sub_424fe0
// 地址: 0x424fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_c
int32_t ecx = arg_c
int32_t var_70 = arg3
RECT lprc
int32_t* eax_6 = sub_4691f0(&lprc, "%6d : ")
SetTextColor(arg2, 0)
int32_t* eax_7

if (eax_6[5] u< 0x10)
    eax_7 = eax_6
else
    eax_7 = *eax_6

sub_42c0d0(arg1, arg2, arg_c, arg4, eax_7)
char* ecx_3 = eax_6[4]
int32_t eax_9 = *(arg1 + 0xc8) * ecx_3
var_5c = ecx_3
int32_t eax_10
int32_t edx
edx:eax_10 = sx.q(eax_9)
arg_c += (eax_10 - edx) s>> 1
int32_t var_38

if (var_38 u>= 0x10)
    j__free(lprc.left)

int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
char eax_13
int32_t ebx_2
eax_13, ebx_2 = sub_42ca60(*(arg1 + 0xe0), arg3, &var_34)
void* result

if (eax_13 != 0)
    void* ebx_5 = &var_5c[sub_430d80(arg1, arg2, &arg_c, arg4, &var_34, 
        sub_430cd0((*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebx_2)), *(arg1 + 0xf8))
        + sub_430f30(arg1, arg2, &arg_c, arg4, 1)]
    int32_t var_70_7 = (*(**(*(arg1 + 0xe0) + 8) + 0x38))(arg3)
    var_5c = sub_4691f0(&lprc, "(%9d)")
    SetTextColor(arg2, 0x80c080)
    char* eax_24 = var_5c
    
    if (*(eax_24 + 0x14) u>= 0x10)
        eax_24 = *eax_24
    
    sub_42c0d0(arg1, arg2, arg_c, arg4, eax_24)
    result = ebx_5 + *(var_5c + 0x10)
    
    if (var_38 u>= 0x10)
        j__free(lprc.left)
    
    lprc.left = ecx
    int32_t eax_27 = *(arg1 + 0xc8)
    int32_t esi_2 = arg4 + eax_27
    lprc.bottom = esi_2
    lprc.top = esi_2 - 1
    int32_t eax_29
    int32_t edx_1
    edx_1:eax_29 = sx.q(eax_27 * result)
    lprc.right = ((eax_29 - edx_1) s>> 1) + ecx
    
    if (*(arg1 + 0xec) == arg3)
        FillRect(arg2, &lprc, *(arg1 + 0xdc))
    else if (arg3 == *(arg1 + 0xe8))
        FillRect(arg2, &lprc, *(arg1 + 0xd4))
else
    result = nullptr

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
