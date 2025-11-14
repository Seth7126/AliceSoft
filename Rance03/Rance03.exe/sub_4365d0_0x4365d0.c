// 函数: sub_4365d0
// 地址: 0x4365d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5c38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_435fe0(arg1)
sub_412de0(arg2 + 0x18, arg2 + 8)
int32_t result

if (sub_436060(arg1, arg2) != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    void* ebx
    
    if (sub_437d60(arg2, &var_18) != 0)
        if (arg1 + 0x54 != &var_18)
            struct _EXCEPTION_REGISTRATION_RECORD** ecx_8 = *(arg1 + 0x54)
            *(arg1 + 0x54) = var_18
            var_18 = ecx_8
            int32_t ecx_9 = *(arg1 + 0x58)
            *(arg1 + 0x58) = var_14_1
            int32_t var_14_2 = ecx_9
            int32_t ecx_10 = *(arg1 + 0x5c)
            *(arg1 + 0x5c) = var_10_1
            int32_t var_10_2 = ecx_10
        
        ebx.b = 1
    else
        int32_t eax_5 = *(arg2 + 0x18)
        
        if (eax_5 != *(arg2 + 0x1c))
            *(arg2 + 8) = *(eax_5 + ((*(arg2 + 0x1c) - eax_5) s>> 2 << 2) - 4)
            *(arg2 + 0x1c) -= 4
        
        ebx.b = 0
    
    int32_t var_4_1 = 0xffffffff
    sub_435c20(&var_18)
    result.b = ebx.b
else
    result = *(arg2 + 0x18)
    
    if (result != *(arg2 + 0x1c))
        *(arg2 + 8) = *(result + ((*(arg2 + 0x1c) - result) s>> 2 << 2) - 4)
        *(arg2 + 0x1c) -= 4
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
