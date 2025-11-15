// 函数: sub_5ff5b0
// 地址: 0x5ff5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7424be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x28)
void* ecx = *(arg1 + 0x24)
void* var_24 = ecx
int32_t var_20 = eax_3
sub_621d30(ecx, eax_3)
int32_t var_8_1 = 0
int32_t eax_5 = (*(*(arg2 + 0x20) + 0x10))(eax_2)
int32_t ebx = 0

if (eax_5 s<= 0)
label_5ff651:
    ebx.b = 1
else
    int32_t* edi_1 = nullptr
    
    while (true)
        int32_t eax_7
        
        if (*(arg2 + 0x14) != 0)
            eax_7 = *(arg2 + 0x10)
        else
            eax_7 = 0
        
        int32_t ecx_2
        
        if (*(arg2 + 0x14) != 0)
            ecx_2 = *(arg2 + 0x10)
        else
            ecx_2 = 0
        
        if ((*(*(arg1 + 0x20) + 0xc))(*(edi_1 + eax_7), *(edi_1 + ecx_2 + 4)) == 0)
            ebx.b = 0
            break
        
        ebx += 1
        edi_1 = &edi_1[3]
        
        if (ebx s>= eax_5)
            goto label_5ff651

int32_t var_8_2 = 2
sub_621db0(ecx, eax_3)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
