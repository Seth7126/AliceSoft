// 函数: sub_4a1cb0
// 地址: 0x4a1cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730fd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = arg2

if (arg1[0xf].b != result.b)
    arg1[0xf].b = result.b
    
    if (result.b == 0)
        (*(*arg1 + 0x7c))(eax_2)
        result = (*(*arg1 + 0x58))(arg1[0x11], arg1[0x12])
    else
        int32_t eax_3 = *arg1
        int128_t var_24 = zx.o(0)
        result = GetClientRect((*(eax_3 + 0x38))(&var_24, eax_2))
        
        if (result != 0)
            int32_t edi_2 = var_24:0xc.d - var_24:4.d
            int32_t esi_2 = var_24:8.d - var_24.d
            struct common::CSize::VTable* const var_30 = &common::CSize::`vftable'
            int32_t var_2c_1 = esi_2
            int32_t var_28_1 = edi_2
            int32_t var_8_1 = 0
            sub_49ed40(&arg1[-1], &var_30)
            arg1[0x17] = esi_2
            arg1[0x18] = edi_2
            arg1[0x4a] = esi_2
            result = arg1[0x18]
            arg1[0x4b] = result
            
            if (arg1[0x43] != 0)
                result = (*(*arg1[0x43] + 0x24))(esi_2, edi_2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
