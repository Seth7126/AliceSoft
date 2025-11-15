// 函数: sub_64a300
// 地址: 0x64a300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcbcc
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_64a430(edi).b != 0)
    if (sub_563bd0(arg1, edi + 8).b == 0)
        result.b = 0
    else if (*(edi + 8) != *(edi + 0xc))
        uint32_t eax_3 = sub_6e810c(0xc)
        uint32_t var_30 = eax_3
        int32_t edx_2 = *(edi + 8)
        int32_t eax_5 = *(edi + 0xc) - edx_2
        *eax_3 = &fileimage::CFileImageAnalyser::`vftable'
        *(eax_3 + 4) = edx_2
        *(eax_3 + 8) = eax_5 + edx_2
        *(edi + 0x14) = eax_3
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_8_1 = 0
        int32_t* ebx_1
        
        if (sub_61ed80(eax_3, &var_2c) == 0)
            ebx_1.b = 0
        else if (sub_407560(&var_2c, &data_76db10) == 0)
            ebx_1.b = 0
        else if (sub_61ec90(*(edi + 0x14), &var_30) == 0 || var_30 != 0)
            ebx_1.b = 0
        else
            if (edi + 0x1c != arg1)
                sub_403590(edi + 0x1c, arg1, 0, 0xffffffff)
            
            *(edi + 0x19) = 1
            ebx_1.b = 1
        
        sub_403320(&var_2c)
        result.b = ebx_1.b
    else
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
