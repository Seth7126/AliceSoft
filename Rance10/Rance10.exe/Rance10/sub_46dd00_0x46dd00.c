// 函数: sub_46dd00
// 地址: 0x46dd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d508
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

if (arg2 != arg1)
    int32_t ecx_2 = *(arg1 + 0x34)
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg2 + 0x34) = ecx_2
    int32_t eax_3
    eax_3.b = *(arg2 + 0x38)
    ecx_2.b = *(arg1 + 0x38)
    *(arg1 + 0x38) = eax_3.b
    *(arg2 + 0x38) = ecx_2.b
    int32_t ecx_3 = *(arg1 + 0x3c)
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
    *(arg2 + 0x3c) = ecx_3
    int32_t xmm0_1 = *(arg1 + 0x40)
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg2 + 0x40) = xmm0_1
    
    if (arg1 + 0x44 != arg2 + 0x44)
        sub_46e0d0(arg1 + 0x44, arg2 + 0x44)
        int32_t ecx_5 = *(arg1 + 0x54)
        *(arg1 + 0x54) = *(arg2 + 0x54)
        *(arg2 + 0x54) = ecx_5
        int32_t ecx_6 = *(arg1 + 0x58)
        *(arg1 + 0x58) = *(arg2 + 0x58)
        *(arg2 + 0x58) = ecx_6
    
    struct IEXTableReader::exfile::CDefineDataTable::VTable* var_48
    sub_46e230(&var_48, arg1 + 0x5c)
    int32_t var_8_1 = 0
    sub_46e2d0(arg1 + 0x5c, arg2 + 0x5c)
    sub_46e2d0(arg2 + 0x5c, &var_48)
    int32_t var_8_2 = 0xffffffff
    sub_45fb30(&var_48)
    sub_46e150(arg1 + 0x8c, arg2 + 0x8c)
    int32_t ecx_12 = *(arg1 + 0x9c)
    *(arg1 + 0x9c) = *(arg2 + 0x9c)
    *(arg2 + 0x9c) = ecx_12

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
