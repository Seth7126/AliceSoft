// 函数: sub_57e3f0
// 地址: 0x57e3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6ea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
int32_t* result

if (arg3[4] != 0)
    int32_t edx_1 = 0
    int32_t ecx_1 = 0
    int32_t ebp_1 = 0
    int32_t var_18 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    
    if (arg4 != 0)
        int32_t var_4_1 = 1
        void** i = *(arg1 + 0x4c)
        
        if (i != *(arg1 + 0x50))
            do
                void** ecx_7 = *i + 4
                int32_t* eax_7
                
                if (arg3[5] u< 0x10)
                    eax_7 = arg3
                else
                    eax_7 = *arg3
                
                int32_t var_38_4 = arg3[4]
                
                if (sub_4294e0(ecx_7, eax_7, ecx_7) != 0xffffffff)
                    sub_412de0(&var_18, i)
                
                i = &i[1]
            while (i != *(arg1 + 0x50))
            
        label_57e512:
            ebp_1 = var_10_1
            ecx_1 = var_18
            edx_1 = var_14_1
    else
        int32_t var_4 = 0
        void** i_1 = *(arg1 + 0x4c)
        
        if (i_1 != *(arg1 + 0x50))
            do
                int32_t ebp_2 = arg3[4]
                int32_t* ecx_4 = *i_1 + 4
                int32_t* edx_2
                
                if (arg3[5] u< 0x10)
                    edx_2 = arg3
                else
                    edx_2 = *arg3
                
                int32_t ebx_1 = ecx_4[4]
                
                if (ecx_4[5] u>= 0x10)
                    ecx_4 = *ecx_4
                
                int32_t eax_4 = ebp_2
                
                if (ebx_1 u< ebp_2)
                    eax_4 = ebx_1
                
                if (sub_405190(eax_4, edx_2, ecx_4, eax_4) == 0 && ebx_1 u>= ebp_2)
                    int32_t eax_5
                    eax_5.b = ebx_1 != ebp_2
                    
                    if (eax_5 == 0)
                        sub_412de0(&var_18, i_1)
                
                i_1 = &i_1[1]
            while (i_1 != *(arg1 + 0x50))
            
            goto label_57e512
    
    result = arg2
    result[2] = ebp_1
    result[1] = edx_1
    *result = ecx_1
else
    sub_453d80(arg2, arg1 + 0x4c)
    result = arg2

fsbase->NtTib.ExceptionList = ExceptionList
return result
