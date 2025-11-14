// 函数: sub_4da210
// 地址: 0x4da210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bfade
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp_2 = (arg2 - arg3) s/ 0x84
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(ebp_2)
int32_t result = eax_7 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* edi_2 = arg3 + 0x30 + i * 0x84
    
    do
        edi_2 -= 0x84
        int32_t var_80_1 = 0xf
        int32_t var_84_1 = 0
        var_94 = 0
        i -= 1
        sub_401ff0(&var_94, edi_2 - 0x30, 0, 0xffffffff)
        int32_t var_4 = 0
        int32_t var_68_1 = 0xf
        int32_t var_6c_1 = 0
        char var_7c = 0
        sub_401ff0(&var_7c, edi_2 - 0x18, 0, 0xffffffff)
        var_4.b = 1
        void var_64
        sub_4bf370(&var_64, edi_2)
        int32_t var_4_1 = 2
        sub_4da830(&var_94, i, arg3, ebp_2, &var_94, arg4)
        int32_t var_4_2 = 0xffffffff
        result = sub_4b7cf0(&var_64)
        
        if (var_68_1 u>= 0x10)
            result = j__free(var_7c.d)
        
        int32_t var_68_2 = 0xf
        int32_t var_6c_2 = 0
        var_7c = 0
        
        if (var_80_1 u>= 0x10)
            result = j__free(var_94.d)
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
