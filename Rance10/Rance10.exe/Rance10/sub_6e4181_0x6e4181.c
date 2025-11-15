// 函数: sub_6e4181
// 地址: 0x6e4181
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x3c
int32_t (* var_c)(void* arg1) = sub_7497c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
void* const var_60_2 = &data_6e418d
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::time_base::std::time_get<char>::VTable** esi = nullptr
char ebx = 0
int32_t var_14 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::time_base::std::time_get<char>::VTable** eax = sub_6e810c(0x44)
    int32_t var_8 = 0
    void var_4c
    
    if (eax != 0)
        ebx = 1
        var_8.b = 1
        int32_t var_14_1 = 1
        esi = sub_6e3d70(eax, sub_62c000(&var_4c, sub_62c5d0(arg2)), 0)
    
    *arg1 = esi
    
    if ((ebx & 1) != 0)
        sub_62c1c0(&var_4c)

int32_t var_60_1 = 5
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e41ec
return 5
