// 函数: sub_5b3c40
// 地址: 0x5b3c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8df0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = arg1
int32_t eax_7 = arg2 * 0xc
int32_t* ebp_1 = *(arg1 + 0x14) + eax_7
int32_t edi = ebp_1[1]
int32_t* esi = *ebp_1

if (esi != edi)
    do
        (**esi)(0)
        esi = &esi[0xe]
    while (esi != edi)
    
    arg1 = result_1

ebp_1[1] = *ebp_1
sub_5b43a0(*(arg1 + 0x14) + eax_7, arg3)
int32_t eax_10 = *(result_1 + 0x14)
void* esi_1 = *(eax_7 + eax_10)
int32_t i = *(eax_7 + eax_10 + 4)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_4 = 0
int32_t eax_11
int32_t edx
edx:eax_11 = muls.dp.d(0x66666667, *(arg4 + 0x88) - *(arg4 + 0x84))
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (arg2 u< result)
    result = *(arg4 + 0x84) + arg2 * 0x28
    
    if (&var_5c != result)
        result = sub_401ff0(&var_5c, result, 0, 0xffffffff)

if (esi_1 != i)
    char* ebx_1 = esi_1 + 8
    result = 0xfffffff8 - esi_1
    result_1 = result
    
    do
        int32_t ebp_5 = &ebx_1[result] s/ 0x38
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = muls.dp.d(0x66666667, *(arg4 + 0x88) - *(arg4 + 0x84))
        int32_t ecx_11 = arg2
        int32_t edx_6 = edx_5 s>> 4
        int32_t eax_19 = (edx_6 u>> 0x1f) + edx_6
        void* const esi_3
        
        if (ecx_11 u< eax_19)
            void* eax_21 = *(arg4 + 0x84) + ecx_11 * 0x28
            int32_t eax_23
            int32_t edx_7
            edx_7:eax_23 = muls.dp.d(0x2aaaaaab, *(eax_21 + 0x1c) - *(eax_21 + 0x18))
            ecx_11 = arg2
            int32_t edx_8 = edx_7 s>> 3
            eax_19 = (edx_8 u>> 0x1f) + edx_8
            
            if (ebp_5 u< eax_19)
                eax_19 = eax_21 + 0x18
                esi_3 = ebp_5 * 0x30 + *eax_19
            else
                esi_3 = nullptr
        else
            esi_3 = nullptr
        
        int32_t var_2c
        
        if (esi_3 == 0)
            int32_t var_84_2 = ebp_5
            int32_t var_88_2 = ecx_11
            void** eax_28 = sub_4691f0(&var_2c, "HLL[%d, %d]")
            var_4.b = 3
            
            if (ebx_1 != eax_28)
                sub_401ff0(ebx_1, eax_28, 0, 0xffffffff)
        else
            int32_t* eax_26 = sub_410930(eax_19, &var_5c, &var_2c, U".")
            var_4.b = 1
            char var_44
            char* eax_27 = sub_410ad0(eax_26, eax_26, &var_44, esi_3 + 4)
            var_4.b = 2
            
            if (ebx_1 != eax_27)
                sub_401ff0(ebx_1, eax_27, 0, 0xffffffff)
            
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44.d)
            
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
        
        var_4.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        ebx_1 = &ebx_1[0x38]
        result = result_1
    while (&ebx_1[0xfffffff8] != i)

if (var_48 u>= 0x10)
    result = j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
