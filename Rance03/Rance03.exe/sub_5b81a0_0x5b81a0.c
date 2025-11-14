// 函数: sub_5b81a0
// 地址: 0x5b81a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9178
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *arg5
int32_t* var_40 = arg5
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x66666667, *(arg3 + 0x14) - *(arg3 + 0x10))
int32_t edx_1 = edx s>> 3
int32_t result

if (edi s< (edx_1 u>> 0x1f) + edx_1)
    if (arg2 != 1)
        int32_t edi_1 = 0
        
        if (sub_5d4330(arg4) s> 0)
            do
                if (edi_1 u>= *(arg4 + 0xc) u>> 2)
                    goto label_5b8210
                
                int32_t eax_17
                
                if (*(arg4 + 0xc) != 0)
                    eax_17 = *(arg4 + 8)
                else
                    eax_17 = 0
                
                int32_t ecx_13 = *(eax_17 + (edi_1 << 2))
                
                if (ecx_13 u>= (*(arg6 + 0xc) - *(arg6 + 8)) s>> 2)
                    goto label_5b8210
                
                result = *(*(arg6 + 8) + (ecx_13 << 2))
                
                if (result == 0)
                    goto label_5b8210
                
                if (sub_5b81a0(arg2 - 1, arg3, result, var_40, arg6).b == 0)
                    goto label_5b8210
                
                edi_1 += 1
                result = sub_5d4330(arg4)
            while (edi_1 s< result)
    else
        *var_40 = edi + 1
        int32_t ecx_4 = edi * 5
        int32_t i = 0
        result = *(arg3 + 0x10)
        int32_t ebx_2 = result + (ecx_4 << 2)
        
        if (*(result + (ecx_4 << 2)) s> 0)
            do
                if (i u>= *(arg4 + 0xc) u>> 2)
                    goto label_5b8210
                
                int32_t eax_12
                
                if (*(arg4 + 0xc) != 0)
                    eax_12 = *(arg4 + 8)
                else
                    eax_12 = 0
                
                int32_t ecx_5 = *(arg4 + 0x3c)
                var_40 = *(eax_12 + (i << 2))
                result = sub_5b8590(ecx_5)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c_1 = 0
                int32_t var_4 = 0
                
                if (i s>= (*(ebx_2 + 0xc) - *(ebx_2 + 8)) s>> 2)
                    goto label_5b8210
                
                void* var_5c_1 = arg6
                uint32_t eax_15 = *(*(ebx_2 + 8) + (i << 2))
                uint32_t var_30_1 = eax_15
                
                if (sub_5b7e60(arg1, result, &var_40, eax_15, *(arg4 + 0x40)).b == 0)
                    goto label_5b8210
                
                if (sub_5d34a0(arg4, i, var_40).b == 0)
                    goto label_5b8210
                
                int32_t var_4_1 = 0xffffffff
                void var_34
                sub_405c60(&var_34)
                i += 1
            while (i s< *ebx_2)
    
    result.b = 1
else
label_5b8210:
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
