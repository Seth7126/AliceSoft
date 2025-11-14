// 函数: sub_50c8c0
// 地址: 0x50c8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_50d820(arg1, &var_18)
int32_t var_20
int32_t* eax_3 = &var_20
int32_t edi = var_18
int32_t edx_2 = (*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2
int32_t ecx_2 = (var_14 - edi) s>> 2
var_20 = edx_2
int32_t var_1c = ecx_2

if (edx_2 s>= ecx_2)
    eax_3 = &var_1c

int32_t ebp = *eax_3
int32_t result = 0

if (ebp s> 0)
    do
        int32_t ecx_3 = *(edi + (result << 2))
        
        if (ecx_3 != 0 && ecx_3 != *(arg1 + 8))
            break
        
        if (arg2 == 0 || *(arg1 + 0x2c0) == 0)
            edx_2.b = 0
        else
            edx_2.b = 1
        
        if (result s>= 0 && result s< (*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2)
            void* ecx_9 = *(*(*(arg1 + 0x2c8) + (result << 2)) + 4)
            
            if (ecx_9 != 0)
                *(ecx_9 + 0x2c) = edx_2.b
        
        result += 1
    while (result s< ebp)

int32_t ecx_12 = (*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2

if (ecx_12 - 1 s>= 0)
    result = (*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2
    
    if (ecx_12 - 1 s< result)
        result = *(*(*(arg1 + 0x2c8) + ((ecx_12 - 1) << 2)) + 4)
        
        if (result != 0)
            *(result + 0x2c) = arg2

if (edi != 0)
    result = j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
