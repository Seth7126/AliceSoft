// 函数: sub_549690
// 地址: 0x549690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c48eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f4
int32_t eax_2 = __security_cookie ^ &var_f4
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x6bca1af3, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_3 = edx_2 s>> 5
int32_t result
bool p_2

if ((edx_3 u>> 0x1f) + edx_3 s> 0 && *(arg1 + 0x5a) == 0 && *(arg1 + 0x5c) == 0)
    float xmm0_1 = *(arg1 + 0xb0)
    xmm0_1 - 1f
    result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if ((edx_3 u>> 0x1f) + edx_3 s<= 0 || *(arg1 + 0x5a) != 0 || *(arg1 + 0x5c) != 0 || p_2)
    result.b = 1
else
    struct IDrawParam::sealengine::CDrawParam::VTable* var_f0
    sub_535530(&var_f0)
    int32_t var_4 = 0
    int32_t edx_4 = *(arg1 + 0xb8)
    void* ecx_1 = *(arg1 + 0xd4)
    void* const eax_15
    
    if (edx_4 s< 0 || edx_4 s>= (*(ecx_1 + 0x24) - *(ecx_1 + 0x20)) s>> 2)
        if (((*(ecx_1 + 0x24) - *(ecx_1 + 0x20)) & 0xfffffffc) s> 0)
            eax_15 = **(ecx_1 + 0x20)
        else
            eax_15 = nullptr
    else if (edx_4 s>= (*(ecx_1 + 0x24) - *(ecx_1 + 0x20)) s>> 2)
        eax_15 = nullptr
    else
        eax_15 = *(*(ecx_1 + 0x20) + (edx_4 << 2))
    
    if (eax_15 != 0)
        int32_t var_78_1 = *(eax_15 + 0x10)
        char var_5c_1 = 0
    
    result.b = sub_5398a0(arg1 + 0x24, arg2, arg3, arg4, arg5, *(arg1 + 0x58), &var_f0).b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f4)
return result
