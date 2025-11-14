// 函数: sub_5f0440
// 地址: 0x5f0440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 4)
labelid_1:
    result.b = 0
else
    void* edx_2 = (arg2 << 4) + *(arg1 + 0x14)
    void* ecx = *(edx_2 + 4)
    
    if (ecx == *(edx_2 + 8))
    labelid_1:
        result.b = 0
    else
        while (*(ecx + 4) != arg3)
            ecx += 0x14
            
            if (ecx == *(edx_2 + 8))
                goto label_5f049d_2
        
        struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = sub_5efaf0(ecx, arg4)
        
        if (ebx_1 == 0)
        label_5f049d:
            result.b = 0
        else
            int32_t ecx_3 = ebx_1[2]
            int32_t edx_3 = *(arg1 + 0x10)
            uint32_t ebp_1 = ebx_1[3]
            
            if (ecx_3 u>= edx_3 || ebp_1 s<= 0 || ecx_3 + ebp_1 u> edx_3)
            label_5f049d_1:
                result.b = 0
            else if (sub_6052e0(arg1 + 4, ecx_3).b == 0)
            label_5f049d_2:
                result.b = 0
            else
                uint8_t* var_18
                sub_448e90(&var_18, ebp_1)
                int32_t var_4 = 0
                uint8_t* eax_6 = var_18
                int32_t var_14
                uint32_t ebp_3 = var_14 - eax_6
                
                if (sub_604e90(arg1 + 4, eax_6, ebp_3) == 0)
                    sub_403510(&var_18)
                    result.b = 0
                else
                    int32_t eax_11
                    int32_t edx_4
                    edx_4:eax_11 = sx.q((&ebx_1[1]->Handler + 3) & 0xfffffff8)
                    sub_403540(arg6, ((((eax_11 + (edx_4 & 7)) s>> 3) + 3) & 0xfffffffc) * arg3)
                    int32_t* ecx_8 = *(arg1 + 0x24)
                    
                    if (ecx_8 == 0)
                        sub_403510(&var_18)
                        result.b = 0
                    else if ((*(*ecx_8 + 8))(*arg6, arg6[1] - *arg6, var_18, ebp_3) == 0)
                        sub_403510(&var_18)
                        result.b = 0
                    else
                        *arg5 = ebx_1[1]
                        sub_403510(&var_18)
                        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
