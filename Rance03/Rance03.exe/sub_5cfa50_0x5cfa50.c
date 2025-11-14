// 函数: sub_5cfa50
// 地址: 0x5cfa50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_40 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 u> 0x2f)
    result.b = 0
else
    switch (arg2)
        case 0
            result.b = 1
        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                0x17, 0x18, 0x19, 0x1a, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e
            result.b = 0
        case 0xa, 0xb, 0x1b, 0x2f
            sub_5ddf10(arg1 + 0x220, 0)
            result.b = 1
        case 0xc
            void var_2c
            sub_401f60(&var_2c, 0x6da71f)
            int32_t var_4 = 0
            int32_t var_30
            int32_t ebx
            ebx.b = sub_5d62c0(arg1 + 0x16c, &var_2c, &var_30) == 0
            sub_401fb0(&var_2c)
            
            if (ebx.b != 0)
                result.b = 0
            else
                sub_5ddf10(arg1 + 0x220, var_30)
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
