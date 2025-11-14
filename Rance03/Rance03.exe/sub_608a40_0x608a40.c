// 函数: sub_608a40
// 地址: 0x608a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0x20)

if (result != *(arg1 + 0x24))
    uint32_t edx_1 = *(arg2 + 8)
    
    if (edx_1 == 0)
        result.b = 0
    else if (*(arg2 + 4) + edx_1 u> *(arg1 + 0x24) - result || *(arg2 + 0xc) == 0
            || *(arg1 + 0x34) == 0)
        result.b = 0
    else
        int32_t* var_18
        sub_448e90(&var_18, edx_1)
        int32_t var_4 = 0
        int32_t* ebp_1 = var_18
        int32_t var_14
        void* ebx_2 = var_14 - ebp_1
        sub_69d850(ebp_1, *(arg2 + 4) + *(arg1 + 0x20), ebx_2, eax_2)
        sub_403540(arg3, *(arg2 + 0xc))
        int32_t edi_2 = *arg3
        ebx_2.b = (*(**(arg1 + 0x34) + 8))(edi_2, arg3[1] - edi_2, ebp_1, ebx_2) != 0
        sub_403510(&var_18)
        result.b = ebx_2.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
