// 函数: sub_6825b0
// 地址: 0x6825b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *(arg1 + 0x20)

if (eax_3 != *(arg1 + 0x24))
    void* edx_1 = *(arg2 + 8)
    
    if (edx_1 != 0 && *(arg2 + 4) + edx_1 u<= *(arg1 + 0x24) - eax_3 && *(arg2 + 0xc) != 0
            && *(arg1 + 0x34) != 0)
        char* var_20
        sub_431b80(&var_20, edx_1)
        int32_t var_8_1 = 0
        char* ecx_5 = var_20
        int32_t var_1c
        void* ebx_1 = var_1c - ecx_5
        sub_700660(ecx_5, *(arg2 + 4) + *(arg1 + 0x20), ebx_1)
        sub_405950(arg3, *(arg2 + 0xc))
        int32_t edi_2 = *arg3
        ebx_1.b = (*(**(arg1 + 0x34) + 8))(edi_2, arg3[1] - edi_2, var_20, ebx_1) != 0
        sub_4059a0(&var_20)
        int32_t eax_10
        eax_10.b = ebx_1.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
