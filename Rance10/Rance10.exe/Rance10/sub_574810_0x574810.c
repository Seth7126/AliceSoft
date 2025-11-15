// 函数: sub_574810
// 地址: 0x574810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t* result = *(arg1 + 0x30)

if (result != *(arg1 + 0x34))
    void* var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_8_1 = 0
    sub_574d90(&var_1c, result)
    int32_t i = 1
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
    int32_t edx_2 = edx_1 s>> 1
    
    if ((edx_2 u>> 0x1f) - 1 + edx_2 s> 1)
        int32_t ebx_1 = 0xc
        int32_t edx_6
        
        do
            if (sub_574990(arg1, var_1c + (((var_18_1 - var_1c) s/ 0xc * 3 - 3) << 2), 
                    *(arg1 + 0x30) + 0xc + ebx_1) != 0)
                sub_574d90(&var_1c, *(arg1 + 0x30) + ebx_1)
            
            i += 1
            int32_t eax_21
            int32_t edx_5
            edx_5:eax_21 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
            ebx_1 += 0xc
            edx_6 = edx_5 s>> 1
        while (i s< (edx_6 u>> 0x1f) - 1 + edx_6)
    
    int32_t eax_26
    int32_t edx_7
    edx_7:eax_26 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
    int32_t edx_8 = edx_7 s>> 1
    
    if (i s< (edx_8 u>> 0x1f) + edx_8)
        int32_t ebx_3 = i * 0xc
        int32_t edx_10
        
        do
            sub_574d90(&var_1c, *(arg1 + 0x30) + ebx_3)
            i += 1
            int32_t eax_32
            int32_t edx_9
            edx_9:eax_32 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
            ebx_3 += 0xc
            edx_10 = edx_9 s>> 1
        while (i s< (edx_10 u>> 0x1f) + edx_10)
    
    result = sub_568050(arg1 + 0x3c, &var_1c)
    void* esi_1 = var_1c
    
    if (esi_1 != 0)
        result = sub_403160(esi_1, (var_14_1 - esi_1) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return result
