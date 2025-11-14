// 函数: sub_68c050
// 地址: 0x68c050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d16a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x3ac) == 0)
    *(arg1 + 0x3a8) += 1
    int32_t var_3c
    
    if (*(arg1 + 0x38) s< *(arg1 + 0x3a8))
        *(arg1 + 0x3a8) = 0
        sub_68a1b0(arg1 + 0x288, arg1 + 0x1f0, arg1 + 0x1fc)
        sub_68c510(arg1 + 0x1f0, *(arg1 + 0x3a4))
        sub_68c510(arg1 + 0x1fc, *(arg1 + 0x3a4))
        sub_68a4a0(arg1 + 0x208)
        int32_t var_58_4 = var_3c
        sub_68c6c0(arg1 + 0x208, *(arg1 + 0x20c), *(arg1 + 0x1f0), *(arg1 + 0x1f4))
        int32_t var_58_5 = var_3c
        sub_68c6c0(arg1 + 0x208, *(arg1 + 0x20c), *(arg1 + 0x1fc), *(arg1 + 0x200))
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x78787879, *(arg1 + 0x20c) - *(arg1 + 0x208))
        int32_t edx_2 = edx_1 s>> 5
        *(arg1 + 0x260) = (edx_2 u>> 0x1f) + edx_2 + 1
        sub_689120(arg1 + 0x248)
        int32_t eax_11
        int32_t edx_4
        edx_4:eax_11 = sx.q(*(arg1 + 0x34))
        *(arg1 + 0x280) = ((eax_11 - edx_4) s>> 1) * *(arg1 + 0x3c)
        sub_689120(arg1 + 0x268)
    
    RECT rect
    GetClientRect(*(arg1 + 8), &rect)
    sub_4107c0(*(arg1 + 0x214), *(arg1 + 0x218))
    int32_t bottom = rect.bottom
    *(arg1 + 0x218) = *(arg1 + 0x214)
    int32_t var_4 = 0
    int32_t* var_28
    sub_65a3a0(arg1 + 0x214, sub_68c2b0(arg1, &var_28, arg1 + 0x208, bottom))
    int32_t var_4_1 = 0xffffffff
    int32_t* eax_18 = var_28
    
    if (eax_18 != 0)
        int32_t var_24
        sub_4107c0(eax_18, var_24)
        j__free(var_28)
    
    eax_18.b = *(arg1 + 0x224)
    char esi_2 = (*(arg1 + 0x22c)).b
    var_3c.b = eax_18.b
    int32_t eax_19
    uint32_t ecx_10
    eax_19, ecx_10 = GetScrollPos(*(arg1 + 0x26c), *(arg1 + 0x278))
    int32_t var_58_12 = var_3c
    sub_6875d0(&var_28, arg1 + 0x214, eax_19, ecx_10, esi_2 - (*(arg1 + 0x2c)).b)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    var_3c.b = *(arg1 + 0x238)
    sub_686960(arg1 + 0x298, GetScrollPos(*(arg1 + 0x26c), *(arg1 + 0x278)), var_3c.b, 
        *(arg1 + 0x228), *(arg1 + 0x22c))
    InvalidateRect(*(arg1 + 8), nullptr, 0)
    UpdateWindow(*(arg1 + 8))
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
