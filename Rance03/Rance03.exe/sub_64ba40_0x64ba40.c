// 函数: sub_64ba40
// 地址: 0x64ba40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_54 = arg2
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
sub_401ff0(&var_4c, arg2, 0, 0xffffffff)
int32_t var_4 = 0
void** eax_6 = sub_64be30(arg1 + 4, &var_4c)
char eax_8

if (eax_6 != *(arg1 + 4))
    eax_8 = sub_64b740(&var_4c, &eax_6[4])

if (eax_6 == *(arg1 + 4) || eax_8 != 0)
    var_58 = *(arg1 + 4)
else
    var_58 = eax_6

void** eax_10 = var_58
int32_t* result

if (eax_10 == *(arg1 + 4))
    char eax_11
    int32_t ecx_4
    eax_11, ecx_4 = sub_64bc00(arg1, arg3)
    
    if (eax_11 == 0)
        result = nullptr
    else
        char eax_12
        
        if (*(arg1 + 0x40) == 0)
            *(arg1 + 0x44) = arg3
            eax_12, ecx_4 = sub_697f40(arg1 + 0x3c)
        
        if (*(arg1 + 0x40) == 0 && eax_12 == 0)
            result = nullptr
        else
            int32_t var_70_3 = ecx_4
            
            if (sub_64bd30(arg1, var_54) == 0)
                result = nullptr
            else
                struct ISurface::dplogviewer::CSurface::VTable** eax_14 = sub_69adc6(0x44)
                
                if (eax_14 == 0)
                    result = nullptr
                else
                    result = sub_64ede0(eax_14)
                    
                    if (result == 0)
                        result = nullptr
                    else if (sub_64ef20(result, arg3, arg3) != 0)
                        sub_64bd90(arg1, result)
                        int32_t var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        char var_30 = 0
                        int32_t ecx_15 = sub_401ff0(&var_30, &var_4c, 0, 0xffffffff)
                        int32_t var_18_1 = arg3
                        int32_t* result_1 = result
                        var_4.b = 1
                        uint32_t var_70_7 = zx.d(data_75dd37)
                        char* var_74_3 = &var_30
                        sub_64bff0(arg1 + 4, &var_54, ecx_15)
                        sub_401fb0(&var_30)
                    else
                        (*(*result + 0x2c))(1)
                        result = nullptr
else
    result = eax_10[0xb]

if (var_38 u>= 0x10)
    j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
