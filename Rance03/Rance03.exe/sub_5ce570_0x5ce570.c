// 函数: sub_5ce570
// 地址: 0x5ce570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca1fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_138
int32_t eax_2 = __security_cookie ^ &var_138
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x8d] -= 4
int32_t eax_6 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* eax_8 = arg1[0x8d]
var_138 = ecx
int32_t ebx = *eax_8
arg1[0x8d] -= 4
int32_t eax_10 = *arg1[0x8d]
int32_t eax_13 = (arg1[0x5e] - arg1[0x5d]) s>> 2
int32_t result
int32_t edx

if (ecx u>= eax_13)
label_5ce7c4:
    int32_t var_150_9 = ebx
    result = sub_5c24e0(eax_13, edx, ecx, arg1, 0x6e9954)
else
    eax_13 = arg1[0x5d]
    void* ebp_1 = *(eax_13 + (ecx << 2))
    
    if (ebp_1 == 0)
        goto label_5ce7c4
    
    eax_13 = (arg1[0x5e] - arg1[0x5d]) s>> 2
    
    if (ebx u>= eax_13)
    label_5ce7bc:
        int32_t var_150_8 = ebx
        result = sub_5c24e0(eax_13, edx, ecx, arg1, 0x6e9a5c)
    else
        eax_13 = *(arg1[0x5d] + (ebx << 2))
        
        if (eax_13 == 0)
            goto label_5ce7bc
        
        int32_t var_114_1 = 0xf
        int32_t var_118_1 = 0
        char var_128 = 0
        int32_t var_4 = 0
        sub_402110(&var_128, 0x6e9984, 3)
        char* edx_1
        
        if (*(ebp_1 + 0xc) != 0)
            edx_1 = *(ebp_1 + 8)
        else
            edx_1 = nullptr
        
        void* ecx_2
        
        if (*edx_1 != 0)
            char* ecx_3 = edx_1
            char i
            
            do
                i = *ecx_3
                ecx_3 = &ecx_3[1]
            while (i != 0)
            ecx_2 = ecx_3 - &ecx_3[1]
        else
            ecx_2 = nullptr
        
        sub_4057c0(&var_128, edx_1, ecx_2)
        int32_t var_150_1 = eax_6
        char var_110
        __swprintf_c(&var_110, 0x100, "(%d)")
        void* ecx_5
        
        if (var_110 != 0)
            char* ecx_6 = &var_110
            char i_1
            
            do
                i_1 = *ecx_6
                ecx_6 = &ecx_6[1]
            while (i_1 != 0)
            void var_10f
            ecx_5 = ecx_6 - &var_10f
        else
            ecx_5 = nullptr
        
        sub_4057c0(&var_128, &var_110, ecx_5)
        sub_4057c0(&var_128, 0x6e9e00, 5)
        int32_t* ecx_9 = arg1[0xb]
        
        if (ecx_9 != 0 && (**ecx_9)(eax_4) != 0)
            char* eax_21
            
            if (*(eax_13 + 0xc) != 0)
                eax_21 = *(eax_13 + 8)
            else
                eax_21 = nullptr
            
            sub_405780(&var_128, eax_21)
            sub_405780(&var_128, "\n\n")
        
        sub_4057c0(&var_128, 0x6e9e10, 0x14)
        int32_t eax_22
        int32_t* ecx_14
        int32_t edx_2
        eax_22, ecx_14, edx_2 = sub_5d5e80(&arg1[0x5b], var_138)
        
        if (eax_22.b != 0)
            int32_t* ecx_16
            int32_t edx_3
            result, ecx_16, edx_3 = sub_5d5e80(&arg1[0x5b], ebx)
            
            if (result.b == 0)
                result = sub_5c24e0(result, edx_3, ecx_16, arg1, 0x6e9e50)
            else if (eax_10 == 0)
                char* eax_23 = &var_128
                
                if (var_114_1 u>= 0x10)
                    eax_23 = var_128.d
                
                result = sub_64b620(eax_23)
                
                if (result != 6)
                    sub_5c0fc0(arg1)
        else
            result = sub_5c24e0(eax_22, edx_2, ecx_14, arg1, 0x6e9e98)
        
        if (var_114_1 u>= 0x10)
            result = j__free(var_128.d)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_138)
return result
