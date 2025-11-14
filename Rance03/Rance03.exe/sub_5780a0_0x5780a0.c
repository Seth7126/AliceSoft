// 函数: sub_5780a0
// 地址: 0x5780a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
label_5781a1:
    result.b = 0
else
    int32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (ecx_6 != 1)
    label_5781a1_1:
        result.b = 0
    else
        int32_t ecx_8
        result, ecx_8 = sub_468b20(arg2, &var_60)
        
        if (result.b == 0)
        label_5781a1_2:
            result.b = 0
        else
            uint32_t ebp_1 = var_60
            int32_t edi_1 = 0
            
            if (ebp_1 s> 0)
                do
                    char* edx_1 = *(arg2 + 4)
                    
                    if (&edx_1[4] u> *(arg2 + 8))
                        goto label_5781a1_2
                    
                    bool cond:0_1 = (
                        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8
                        | zx.d(*edx_1)) != 0
                    *(arg2 + 4) = &edx_1[4]
                    
                    if (cond:0_1)
                        goto label_5781a1_2
                    
                    void var_58
                    sub_5765b0(&var_58)
                    int32_t var_4 = 0
                    char eax_9 = sub_577220(arg1, arg2, &var_58)
                    int16_t top = top - 1
                    unimplemented  {call 0x577220}
                    void* ecx_19 = &var_58
                    
                    if (eax_9 == 0)
                        sub_577170(ecx_19)
                        goto label_5781a1_2
                    
                    int32_t var_4_1 = 0xffffffff
                    sub_577170(ecx_19)
                    edi_1 += 1
                while (edi_1 s< ebp_1)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
