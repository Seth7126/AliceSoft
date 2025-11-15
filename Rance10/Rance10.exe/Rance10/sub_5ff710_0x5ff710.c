// 函数: sub_5ff710
// 地址: 0x5ff710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74245e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x28)
void* ecx = *(arg1 + 0x24)
void* var_20 = ecx
int32_t var_1c = eax_3
sub_621d30(ecx, eax_3)
int32_t var_8_1 = 0
int32_t eax_5 = (*(*(arg1 + 0x20) + 0x10))(eax_2)
int32_t ebx_1 = eax_5 - 1

if (eax_5 - 1 s< 0)
label_5ff7ae:
    ebx_1.b = 1
else
    int32_t edi_2 = ebx_1 * 0xc
    
    while (true)
        int32_t eax_6
        
        if (*(arg1 + 0x14) != 0)
            eax_6 = *(arg1 + 0x10)
        else
            eax_6 = 0
        
        if (*(edi_2 + eax_6) == arg2)
            int32_t ecx_2
            
            if (*(arg1 + 0x14) != 0)
                ecx_2 = *(arg1 + 0x10)
            else
                ecx_2 = 0
            
            if ((*(*(arg1 + 0x20) + 0xc))(arg2, *(edi_2 + ecx_2 + 4)) == 0)
                ebx_1.b = 0
                break
        
        edi_2 -= 0xc
        int32_t temp2_1 = ebx_1
        ebx_1 -= 1
        
        if (temp2_1 - 1 s< 0)
            goto label_5ff7ae

int32_t var_8_2 = 2
sub_621db0(ecx, eax_3)
int32_t result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
