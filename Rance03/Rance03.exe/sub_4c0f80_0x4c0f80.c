// 函数: sub_4c0f80
// 地址: 0x4c0f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be148
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp_2 = (arg2 - arg3) s/ 0x5c
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(ebp_2)
int32_t result = eax_7 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* esi_3 = arg3 + 8 + i * 0x5c
    
    do
        int32_t xmm0_1 = *(esi_3 - 0x64)
        esi_3 -= 0x5c
        var_6c = xmm0_1
        i -= 1
        int32_t var_68_1 = *(esi_3 - 4)
        void var_64
        sub_4bf370(&var_64, esi_3)
        int32_t var_4 = 0
        sub_4c15f0(&var_6c, i, arg3, ebp_2, &var_6c, arg4)
        int32_t var_4_1 = 0xffffffff
        result = sub_4b7cf0(&var_64)
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
