// 函数: sub_5477d0
// 地址: 0x5477d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint8_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
void* var_24 = nullptr
char var_34 = 0
sub_402110(&var_34, "LITP", 4)
int32_t var_c_1 = 0
char* esi = &var_34
char* edx = &var_34
int32_t var_40
int32_t var_58 = var_40

if (var_20 u>= 0x10)
    esi = var_34.d

if (var_20 u>= 0x10)
    edx = var_34.d

sub_468ff0(arg2 + 4, *(arg2 + 8), edx, var_24 + esi)
int32_t var_c_2 = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34.d)

sub_468ec0(arg2, 0)
void* edx_1 = arg1
uint8_t* result

if (((*(edx_1 + 0x14) - *(edx_1 + 0x10)) & 0xfffffffc) == 0xa4)
    int32_t* i = nullptr
    int32_t* i_1 = nullptr
    
    do
        int32_t xmm0_1 = *(i + *(edx_1 + 0x10))
        int32_t eax_10 = *(arg2 + 8)
        char var_42 = xmm0_1.b
        int32_t ecx_3
        
        if (&var_42 u< eax_10)
            ecx_3 = *(arg2 + 4)
        
        if (&var_42 u>= eax_10 || ecx_3 u> &var_42)
            if (eax_10 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            char* eax_12 = *(arg2 + 8)
            
            if (eax_12 != 0)
                *eax_12 = xmm0_1.b
        else
            if (eax_10 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            char* ecx_5 = *(arg2 + 8)
            
            if (ecx_5 != 0)
                int32_t eax_11
                eax_11.b = *(&var_42 - ecx_3 + *(arg2 + 4))
                *ecx_5 = eax_11.b
        
        *(arg2 + 8) += 1
        int32_t ecx_7 = *(arg2 + 8)
        uint32_t eax_14 = xmm0_1 u>> 8
        char var_41 = eax_14.b
        int32_t edx_2
        
        if (&var_41 u< ecx_7)
            edx_2 = *(arg2 + 4)
        
        char* ecx_10
        
        if (&var_41 u>= ecx_7 || edx_2 u> &var_41)
            if (ecx_7 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            ecx_10 = *(arg2 + 8)
            
            if (ecx_10 != 0)
                *ecx_10 = eax_14.b
        else
            if (ecx_7 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            ecx_10 = *(arg2 + 8)
            
            if (ecx_10 != 0)
                eax_14.b = *(&var_41 - edx_2 + *(arg2 + 4))
                *ecx_10 = eax_14.b
        *(arg2 + 8) += 1
        int32_t ecx_11 = *(arg2 + 8)
        uint32_t eax_16 = xmm0_1 u>> 0x10
        char var_43 = eax_16.b
        int32_t edx_3
        
        if (&var_43 u< ecx_11)
            edx_3 = *(arg2 + 4)
        
        char* ecx_14
        
        if (&var_43 u>= ecx_11 || edx_3 u> &var_43)
            if (ecx_11 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            ecx_14 = *(arg2 + 8)
            
            if (ecx_14 != 0)
                *ecx_14 = eax_16.b
        else
            if (ecx_11 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            ecx_14 = *(arg2 + 8)
            
            if (ecx_14 != 0)
                eax_16.b = *(&var_43 - edx_3 + *(arg2 + 4))
                *ecx_14 = eax_16.b
        *(arg2 + 8) += 1
        result = *(arg2 + 8)
        uint8_t ebx_2 = (xmm0_1 u>> 0x18).b
        var_44 = ebx_2
        int32_t ecx_15
        
        if (&var_44 u< result)
            ecx_15 = *(arg2 + 4)
        
        if (&var_44 u>= result || ecx_15 u> &var_44)
            if (result == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            result = *(arg2 + 8)
            
            if (result != 0)
                *result = ebx_2
        else
            if (result == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            char* ecx_17 = *(arg2 + 8)
            
            if (ecx_17 != 0)
                result.b = *(&var_44 - ecx_15 + *(arg2 + 4))
                *ecx_17 = result.b
        
        *(arg2 + 8) += 1
        i = &i_1[1]
        edx_1 = arg1
        i_1 = i
    while (i s< 0xa4)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
