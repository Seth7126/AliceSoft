// 函数: sub_4ab300
// 地址: 0x4ab300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg3 + 4)
uint32_t* result

if (&edx[4] u> *(arg3 + 8))
    result.b = 0
else
    *(arg1 + 0x34) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
        result.b = 0
    else
        *(arg1 + 0x38) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        
        if (sub_468b20(arg3, arg1 + 0x3c).b == 0)
            result.b = 0
        else if (sub_468b20(arg3, arg1 + 0x40).b == 0)
            result.b = 0
        else if (sub_468b20(arg3, arg1 + 0x44).b == 0)
            result.b = 0
        else if (sub_468b20(arg3, arg1 + 0x48).b == 0)
            result.b = 0
        else if (sub_468b20(arg3, arg1 + 0x4c).b == 0)
            result.b = 0
        else if (sub_468bc0(arg3, arg1 + 0x50).b == 0)
            result.b = 0
        else if (sub_468b20(arg3, arg1 + 0x54).b == 0)
            result.b = 0
        else
            int32_t var_20_1 = 0xf
            int32_t var_24_1 = 0
            char var_34 = 0
            int32_t var_c_1 = 0
            
            if (sub_468d00(arg3, &var_34) == 0)
                sub_401fb0(&var_34)
                result.b = 0
            else
                sub_4aac00(arg1, &var_34)
                
                if (arg2 s< 2)
                    sub_401fb0(&var_34)
                    result.b = 1
                else
                    int32_t var_38_1 = 0xf
                    int32_t var_3c_1 = 0
                    var_4c = 0
                    var_c_1.b = 1
                    
                    if (sub_468d00(arg3, &var_4c) != 0)
                        sub_4aaf10(arg1, &var_4c)
                        sub_401fb0(&var_4c)
                        sub_401fb0(&var_34)
                        result.b = 1
                    else
                        sub_401fb0(&var_4c)
                        sub_401fb0(&var_34)
                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
