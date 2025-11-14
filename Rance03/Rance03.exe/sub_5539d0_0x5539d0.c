// 函数: sub_5539d0
// 地址: 0x5539d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (sub_54aa10(arg1 + 0x24) s> 0)
    int16_t* var_18
    sub_448e90(&var_18, sub_54aa10(arg1 + 0x24) * 2)
    int32_t var_4 = 0
    int16_t* edi_1 = var_18
    sub_54a2a0(arg1 + 0x24, edi_1)
    int32_t* ecx_4 = *(arg1 + 0x78)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))(eax_2)
        *(arg1 + 0x78) = 0
    
    result = (*(*arg2 + 0x48))(eax_2)
    *(arg1 + 0x78) = result
    void* ebx
    
    if (result == 0)
        ebx.b = 0
    else if ((*(*result + 0xc))(sub_54aa10(arg1 + 0x24), 0, edi_1).b == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    if (edi_1 != 0)
        j__free(edi_1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
