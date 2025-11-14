// 函数: sub_532dc0
// 地址: 0x532dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t* result = *(arg1 + 0x34)

if (result != *(arg1 + 0x38))
    int32_t var_18 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    sub_533630(&var_18, result)
    int32_t i = 1
    int32_t ebx_1 = var_18
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x38) - *(arg1 + 0x34))
    int32_t edx_2 = edx_1 s>> 1
    
    if ((edx_2 u>> 0x1f) - 1 + edx_2 s> 1)
        int32_t ebp_1 = 0xc
        int32_t edx_6
        
        do
            int32_t var_30_2 = *(arg1 + 0x34) + 0xc + ebp_1
            
            if (sub_532f40(arg1, ebx_1 + (((var_14_1 - ebx_1) s/ 0xc * 3 - 3) << 2)) != 0)
                sub_533630(&var_18, *(arg1 + 0x34) + ebp_1)
                ebx_1 = var_18
            
            i += 1
            int32_t eax_21
            int32_t edx_5
            edx_5:eax_21 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x38) - *(arg1 + 0x34))
            ebp_1 += 0xc
            edx_6 = edx_5 s>> 1
        while (i s< (edx_6 u>> 0x1f) - 1 + edx_6)
    
    int32_t eax_26
    int32_t edx_7
    edx_7:eax_26 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x38) - *(arg1 + 0x34))
    int32_t edx_8 = edx_7 s>> 1
    
    if (i s< (edx_8 u>> 0x1f) + edx_8)
        int32_t ebx_3 = i * 0xc
        int32_t edx_10
        
        do
            sub_533630(&var_18, *(arg1 + 0x34) + ebx_3)
            i += 1
            int32_t eax_32
            int32_t edx_9
            edx_9:eax_32 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x38) - *(arg1 + 0x34))
            ebx_3 += 0xc
            edx_10 = edx_9 s>> 1
        while (i s< (edx_10 u>> 0x1f) + edx_10)
        ebx_1 = var_18
    
    result = sub_533500(arg1 + 0x40, &var_18)
    
    if (ebx_1 != 0)
        result = j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
