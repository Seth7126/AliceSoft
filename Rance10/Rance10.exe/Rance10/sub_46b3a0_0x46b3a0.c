// 函数: sub_46b3a0
// 地址: 0x46b3a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d06f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
void* ebx = arg1 + 4
int32_t edi = *(ebx + 4)
int32_t* result_2 = arg2
struct exfile::CFormatData::VTable** result

if (esi == edi)
label_46b486:
    struct exfile::CFormatData::VTable** eax_10 = sub_6e810c(0x5c)
    struct exfile::CFormatData::VTable** var_3c_1 = eax_10
    int32_t var_8_1 = 0
    struct exfile::CFormatData::VTable** result_1 = sub_4707a0(eax_10, result_2)
    int32_t var_8_2 = 0xffffffff
    int32_t eax_11 = *(ebx + 4)
    int32_t** ecx_4 = &result_2
    result_2 = result_1
    
    if (&result_2 u< eax_11)
        ecx_4 = *ebx
    
    if (&result_2 u>= eax_11 || ecx_4 u> &result_2)
        if (eax_11 == *(ebx + 8))
            int32_t** var_54_5 = ecx_4
            sub_42cd50(ebx)
        
        struct exfile::CFormatData::VTable*** eax_14 = *(ebx + 4)
        
        if (eax_14 != 0)
            *eax_14 = result_1
    else
        if (eax_11 == *(ebx + 8))
            int32_t** var_54_4 = ecx_4
            sub_42cd50(ebx)
        
        int32_t* ecx_6 = *(ebx + 4)
        
        if (ecx_6 != 0)
            *ecx_6 = *(*ebx + ((&result_2 - ecx_4) s>> 2 << 2))
    
    *(ebx + 4) += 4
    result = result_1
else
    while (true)
        char var_30
        char* ecx_1 = sub_470a10(*esi, &var_30)
        int32_t* result_3 = result_2
        int32_t* result_4
        
        if (result_3[5] u< 0x10)
            result_4 = result_3
        else
            result_4 = *result_3
        
        void* ebx_1 = &ecx_1[0x10]
        
        if (*(ecx_1 + 0x14) u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t edx_2 = result_3[4]
        int32_t eax_5 = edx_2
        int32_t ebx_2 = *ebx_1
        
        if (ebx_2 u< edx_2)
            eax_5 = ebx_2
        
        int32_t ebx_3 = sub_406ac0(eax_5, result_4, ecx_1, eax_5)
        
        if (ebx_3 == 0)
            int32_t eax_7 = result_2[4]
            int32_t ecx_2 = *ebx_1
            bool c_1 = eax_7 u< ecx_2
            
            if (eax_7 == ecx_2 || c_1)
                ebx_3 = neg.d(sbb.d(ebx_1, ebx_1, c_1))
            else
                ebx_3 = 0xffffffff
        
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, var_1c + 1, 1)
        
        var_1c = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
        
        if (ebx_3 == 0)
            result = *esi
            break
        
        esi = &esi[1]
        
        if (esi == edi)
            goto label_46b486

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
