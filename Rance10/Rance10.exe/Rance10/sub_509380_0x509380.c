// 函数: sub_509380
// 地址: 0x509380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg3 + 4)
uint32_t* result

if (&edx[4] u> *(arg3 + 8))
    result.b = 0
else
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
        result.b = 0
    else
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        uint32_t var_30
        uint32_t var_34
        
        if (sub_61ec90(arg3, &var_30).b == 0)
            result.b = 0
        else
            uint32_t var_38
            
            if (sub_61ec90(arg3, &var_34).b == 0)
                result.b = 0
            else
                uint32_t var_3c
                
                if (sub_61ec90(arg3, &var_38).b == 0)
                    result.b = 0
                else
                    uint32_t var_40
                    
                    if (sub_61ec90(arg3, &var_3c).b == 0)
                        result.b = 0
                    else
                        uint32_t var_44
                        
                        if (sub_61ec90(arg3, &var_40).b == 0)
                            result.b = 0
                        else
                            uint32_t var_48
                            
                            if (sub_6c9300(arg3, &var_44).b == 0)
                                result.b = 0
                            else
                                uint32_t var_4c
                                
                                if (sub_6c9300(arg3, &var_48).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_50
                                    
                                    if (sub_61ec90(arg3, &var_4c).b == 0)
                                        result.b = 0
                                    else
                                        uint32_t var_54
                                        
                                        if (sub_61ec90(arg3, &var_50).b == 0)
                                            result.b = 0
                                        else if (sub_61ec90(arg3, &var_54).b == 0)
                                            result.b = 0
                                        else
                                            uint32_t var_7c_1 = var_38
                                            *(arg1 + 0x10) = var_30
                                            uint32_t var_80_1 = var_3c
                                            uint32_t var_84_1 = var_40
                                            *(arg1 + 0x14) = var_34
                                            void var_64
                                            int32_t* eax_11 = sub_402f50(&var_64, var_84_1, 
                                                var_80_1, var_7c_1, 0xff)
                                            uint32_t var_7c_2 = var_4c
                                            uint32_t var_80_2 = var_50
                                            *(arg1 + 0x18) = *eax_11
                                            uint32_t var_84_2 = var_54
                                            *(arg1 + 0x28) = var_44
                                            *(arg1 + 0x2c) = var_48
                                            *(arg1 + 0x30) = *sub_402f50(&var_64, var_84_2, 
                                                var_80_2, var_7c_2, 0xff)
                                            
                                            if (sub_6c9280(arg3, arg1 + 0x40).b == 0)
                                                result.b = 0
                                            else if (sub_61ed80(arg3, arg1 + 0x44).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x5c).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x60).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x64).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x68).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x6c).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x70).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x74).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x78).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x7c).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x80).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x84).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x88).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x8c).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x90).b == 0)
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x94).b == 0)
                                                result.b = 0
                                            else if (arg2 s< 0xd)
                                                *(arg1 + 0x98) = 0x101
                                            label_5096c6:
                                                int32_t var_18_1 = 0xf
                                                int32_t var_1c_1 = 0
                                                char var_2c = 0
                                                int32_t var_8_1 = 0
                                                
                                                if (sub_61ed80(arg3, &var_2c) == 0)
                                                    sub_403320(&var_2c)
                                                    result.b = 0
                                                else
                                                    sub_508d60(arg1, &var_2c)
                                                    
                                                    if (sub_61ec90(arg3, arg1 + 0xfc) == 0)
                                                        sub_403320(&var_2c)
                                                        result.b = 0
                                                    else if (sub_61ec90(arg3, arg1 + 0x100) == 0)
                                                        sub_403320(&var_2c)
                                                        result.b = 0
                                                    else if (arg2 s< 9)
                                                        __builtin_memcpy(arg1 + 0x104, 
                                                            "\x03\x00\x00\x00\x03\x00\x00\x00\x03\x00\x"
                                                        "00\x00\x03\x00\x00\x00\x01", 
                                                            0x11)
                                                        sub_403320(&var_2c)
                                                        result.b = 1
                                                    else if (sub_61ec90(arg3, arg1 + 0x104) == 0)
                                                        sub_403320(&var_2c)
                                                        result.b = 0
                                                    else if (sub_61ec90(arg3, arg1 + 0x108) == 0)
                                                        sub_403320(&var_2c)
                                                        result.b = 0
                                                    else if (sub_61ec90(arg3, arg1 + 0x10c) == 0)
                                                        sub_403320(&var_2c)
                                                        result.b = 0
                                                    else if (sub_61ec90(arg3, arg1 + 0x110) != 0)
                                                        sub_403320(&var_2c)
                                                        result.b = 1
                                                    else
                                                        sub_403320(&var_2c)
                                                        result.b = 0
                                            else if (sub_6c9280(arg3, arg1 + 0x98).b == 0)
                                                result.b = 0
                                            else
                                                if (sub_6c9280(arg3, arg1 + 0x99).b != 0)
                                                    goto label_5096c6
                                                
                                                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
