// 函数: ?_Getcat@?$ctype@D@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
// 地址: 0x6d163b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x38
int32_t (* var_c)(void* arg1) = sub_749113
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
void* const var_5c_3 = &data_6d1647
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::ctype_base::std::ctype<char>::VTable** esi = nullptr
char ebx = 0
int32_t var_14 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::ctype_base::std::ctype<char>::VTable** eax = sub_6e810c(0x18)
    int32_t var_8 = 0
    void var_48
    
    if (eax != 0)
        ebx = 1
        int32_t var_5c_1 = 0
        esi = std::ctype<char>::ctype<char>(eax, sub_62c000(&var_48, sub_62c5d0(arg2)))
    
    *arg1 = esi
    
    if ((ebx & 1) != 0)
        sub_62c1c0(&var_48)

int32_t var_5c_2 = 2
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d16a0
return 2
