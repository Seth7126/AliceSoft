// 函数: sub_590960
// 地址: 0x590960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ddc9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_8_1 = 0
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t var_14_1 = 1
int32_t edx_1 = edx s>> 3
uint32_t eax_5 = edx_1 u>> 0x1f
int32_t eax_6 = eax_5 + edx_1

if (eax_5 != neg.d(edx_1))
    if (eax_6 u> 0x9249249)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_58fab0(arg2, eax_6)

int32_t edi = *(arg1 + 0x2c)
void* esi_1 = *(arg1 + 0x28)

if (esi_1 != edi)
    float xmm2_1 = arg5
    int32_t ecx_5 = arg4 * 0x1c
    int32_t var_18_1 = ecx_5
    
    do
        void* eax_9 = *(esi_1 + 0x24)
        int128_t* edx_5 = eax_9 + ecx_5
        int32_t* ecx_7 = arg3 i* 0x1c + eax_9
        int64_t xmm1_4 = (*(eax_9 + ecx_5 + 0x10) f- ecx_7[4]) * xmm2_1 f+ ecx_7[4]
        float xmm0_4 = (*(edx_5 + 0x18) f- ecx_7[6]) * xmm2_1 f+ ecx_7[6]
        float xmm1_8 = (*(edx_5 + 0x14) f- ecx_7[5]) * xmm2_1 f+ ecx_7[5]
        float var_54[0x4]
        float (* eax_10)[0x4] = sub_6cbf50(ecx_7, xmm2_1, &var_54, edx_5)
        int64_t xmm1_10 = _mm_unpacklo_ps(zx.o(xmm1_4), xmm1_8)
        float xmm2_2[0x4] = *eax_10
        
        if (arg2[1] == arg2[2])
            sub_58f910(arg2, 1)
        
        float (* eax_12)[0x4] = arg2[1]
        
        if (eax_12 != 0)
            *eax_12 = xmm2_2
            eax_12[1][0].q = xmm1_10
            (*eax_12)[6] = xmm0_4
        
        arg2[1] += 0x1c
        esi_1 += 0x30
        xmm2_1 = arg5
        ecx_5 = var_18_1
    while (esi_1 != edi)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
