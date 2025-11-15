// 函数: sub_62cb80
// 地址: 0x62cb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74505f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t var_14 = 0

if (esi != 0 && *esi == 0)
    struct std::ctype_base::std::ctype<wchar_t>::VTable** eax_3 = sub_6e810c(0x44)
    arg1 = eax_3
    int32_t var_8_1 = 0
    void* edx_1 = *(arg2 + 4)
    void* const ecx_2
    
    if (edx_1 != 0)
        ecx_2 = *(edx_1 + 0x18)
        
        if (ecx_2 == 0)
            ecx_2 = edx_1 + 0x1c
    else
        ecx_2 = &data_794c78
    
    int32_t var_58_2 = 0
    void var_48
    *esi = sub_62cb20(eax_3, sub_62c000(&var_48, ecx_2))
    sub_62c1c0(&var_48)

fsbase->NtTib.ExceptionList = ExceptionList
return 2
