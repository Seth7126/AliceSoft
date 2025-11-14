// 函数: sub_5c6930
// 地址: 0x5c6930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx_1 = **(arg1 + 0x234)
int32_t eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
int32_t result
void* edx

if (ebp u>= eax_9)
label_5c6aa2:
    int32_t var_48_10 = ebp
    int32_t var_4c_3 = 0x6e72e4
    result = sub_5c2400(eax_9, edx, ecx_1, arg1, "S_PLUSA2")
else
    eax_9 = *(arg1 + 0x174)
    edx = *(eax_9 + (ebp << 2))
    
    if (edx == 0)
        goto label_5c6aa2
    
    eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
    
    if (ecx_1 u>= eax_9)
    label_5c6a95:
        int32_t var_48_9 = ecx_1
        int32_t var_4c_2 = 0x6e7650
        result = sub_5c2400(eax_9, edx, ecx_1, arg1, "S_PLUSA2")
    else
        eax_9 = *(arg1 + 0x174)
        void* ebx_1 = *(eax_9 + (ecx_1 << 2))
        
        if (ebx_1 == 0)
            goto label_5c6a95
        
        int32_t eax_12
        int32_t ecx_3
        int32_t edx_1
        eax_12, ecx_3, edx_1 = sub_5d3e20(ebx_1, edx)
        
        if (eax_12.b != 0)
            char* eax_13
            
            if (*(ebx_1 + 0xc) != 0)
                eax_13 = *(ebx_1 + 8)
            else
                eax_13 = nullptr
            
            char var_28
            sub_401f60(&var_28, eax_13)
            int32_t var_4 = 0
            int32_t var_2c
            int32_t* eax_14
            int32_t ecx_6
            int32_t edx_2
            eax_14, ecx_6, edx_2 = sub_5d62c0(arg1 + 0x16c, &var_28, &var_2c)
            int32_t var_4_1 = 0xffffffff
            ebx_1.b = eax_14.b == 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                eax_14, ecx_6, edx_2 = j__free(var_28.d)
            
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            
            if (ebx_1.b == 0)
                sub_5ddf10(arg1 + 0x220, var_2c)
                int32_t ecx_9
                int32_t edx_3
                result, ecx_9, edx_3 = sub_5d5e80(arg1 + 0x16c, ebp)
                
                if (result.b == 0)
                    int32_t var_48_8 = 0x6e76e0
                    result = sub_5c2400(result, edx_3, ecx_9, arg1, "S_PLUSA2")
            else
                int32_t var_48_5 = 0x6e76a8
                result = sub_5c2400(eax_14, edx_2, ecx_6, arg1, "S_PLUSA2")
        else
            char const* const var_48_1 = "copyString"
            result = sub_5c2400(eax_12, edx_1, ecx_3, arg1, "S_PLUSA2")
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
