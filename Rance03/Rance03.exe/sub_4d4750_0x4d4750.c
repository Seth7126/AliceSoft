// 函数: sub_4d4750
// 地址: 0x4d4750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bf520
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = arg1
void* var_4c
sub_410930(arg4, arg3, &var_4c, U".\n")
int32_t var_c_1 = 0
int32_t eax_6 = arg1[1]

if (eax_6 != arg1[2])
    arg1[2] = eax_6
    int32_t* ecx_1 = arg1[4]
    
    if (ecx_1 != 0)
        eax_6 = (**ecx_1)(eax_4)

int32_t var_68
int32_t* result = sub_410930(eax_6, &var_4c, &var_68, 0x6e18ec)
int32_t* result_3 = result
var_c_1.b = 1
int32_t* edx_2 = *(arg2 + 4)
int32_t* result_2
int32_t* result_4

if (edx_2 != 0)
    if (result_3[5] u>= 0x10)
        result_3 = *result_3
    
    result = (*(*edx_2 + 0x10))(result_3)
    result_4 = result
    result_2 = result
else
    result_4 = nullptr
    result_2 = nullptr

var_c_1.b = 0
int32_t var_54

if (var_54 u>= 0x10)
    result = j__free(var_68)

int32_t ebx_1 = 0

if (result_4 s> 0)
    do
        var_c_1.b = 2
        int32_t var_34
        sub_401d70(arg2, &var_68, sub_410930(result, &var_4c, &var_34, 0x6e1904), ebx_1)
        var_c_1.b = 3
        int32_t* ecx_6 = *(arg4 + 0x10)
        
        if (ecx_6 == 0)
            sub_69a52d()
            noreturn
        
        int32_t i = (*(*ecx_6 + 8))(&var_68)
        var_c_1.b = 2
        
        if (var_54 u>= 0x10)
            j__free(var_68)
        
        int32_t* ecx_7 = arg1[1]
        var_54 = 0xf
        int32_t var_58_1 = 0
        int32_t eax_13 = result_1[2]
        var_68.b = 0
        int32_t i_1 = i
        
        if (ecx_7 != eax_13)
            while (*ecx_7 != i)
                ecx_7 = &ecx_7[1]
                
                if (ecx_7 == eax_13)
                    break
            
            if (ecx_7 != eax_13)
                _memcpy(ecx_7, &ecx_7[1], (arg1[2] - &ecx_7[1]) & 0xfffffffc, eax_4)
                int32_t* result_5 = result_1
                arg1[2] -= 4
                int32_t* ecx_8 = result_5[4]
                
                if (ecx_8 != 0)
                    (**ecx_8)()
        
        int32_t eax_18 = arg1[2]
        int32_t ecx_9
        
        if (&i_1 u< eax_18)
            ecx_9 = arg1[1]
        
        if (&i_1 u>= eax_18 || ecx_9 u> &i_1)
            if (eax_18 == arg1[3])
                sub_415950(&arg1[1], 1)
            
            int32_t* eax_21 = arg1[2]
            
            if (eax_21 != 0)
                *eax_21 = i
        else
            if (eax_18 == arg1[3])
                sub_415950(&arg1[1], 1)
            
            int32_t* ecx_11 = arg1[2]
            
            if (ecx_11 != 0)
                *ecx_11 = *(arg1[1] + ((&i_1 - ecx_9) s>> 2 << 2))
        
        result = result_1
        arg1[2] += 4
        int32_t* ecx_13 = result[4]
        
        if (ecx_13 != 0)
            result = (**ecx_13)(eax_4)
        
        var_c_1.b = 0
        int32_t var_20
        
        if (var_20 u>= 0x10)
            result = j__free(var_34)
        
        ebx_1 += 1
    while (ebx_1 s< result_2)

int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
