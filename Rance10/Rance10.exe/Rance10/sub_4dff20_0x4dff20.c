// 函数: sub_4dff20
// 地址: 0x4dff20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734be0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
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
        result = *(arg3 + 4)
        
        if (result + 1 u> *(arg3 + 8))
            result.b = 0
        else
            bool cond:0_1 = *result == 1
            *(arg3 + 4) = result + 1
            result.b = cond:0_1
            *(arg1 + 0xc) = result.b
            
            if (sub_61ec90(arg3, arg1 + 0x10).b == 0)
                result.b = 0
            else if (sub_61ec90(arg3, arg1 + 0x14).b == 0)
                result.b = 0
            else
                uint32_t var_4c
                
                if (sub_61ec90(arg3, arg1 + 0x18).b == 0)
                    result.b = 0
                else
                    uint32_t var_50
                    
                    if (sub_61ec90(arg3, &var_4c).b == 0)
                        result.b = 0
                    else
                        uint32_t var_54
                        
                        if (sub_61ec90(arg3, &var_50).b == 0)
                            result.b = 0
                        else
                            uint32_t var_58
                            
                            if (sub_61ec90(arg3, &var_54).b == 0)
                                result.b = 0
                            else
                                uint32_t var_5c
                                
                                if (sub_61ec90(arg3, &var_58).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_60
                                    
                                    if (sub_61ec90(arg3, &var_5c).b == 0)
                                        result.b = 0
                                    else
                                        uint32_t var_64
                                        
                                        if (sub_6c9300(arg3, &var_60).b == 0)
                                            result.b = 0
                                        else
                                            uint32_t var_68
                                            
                                            if (sub_6c9300(arg3, &var_64).b == 0)
                                                result.b = 0
                                            else
                                                uint32_t var_6c
                                                
                                                if (sub_61ec90(arg3, &var_68).b == 0)
                                                    result.b = 0
                                                else
                                                    uint32_t var_48
                                                    
                                                    if (sub_61ec90(arg3, &var_6c).b == 0)
                                                        result.b = 0
                                                    else if (sub_61ec90(arg3, &var_48).b == 0)
                                                        result.b = 0
                                                    else
                                                        uint32_t var_84_1 = var_54
                                                        *(arg1 + 0x20) = var_4c
                                                        uint32_t var_88_1 = var_58
                                                        uint32_t var_8c_1 = var_5c
                                                        *(arg1 + 0x24) = var_50
                                                        void var_24
                                                        int32_t* eax_14 = sub_402f50(&var_24, 
                                                            var_8c_1, var_88_1, var_84_1, 0xff)
                                                        uint32_t var_84_2 = var_68
                                                        uint32_t var_88_2 = var_6c
                                                        *(arg1 + 0x28) = *eax_14
                                                        uint32_t var_8c_2 = var_48
                                                        *(arg1 + 0x38) = var_60
                                                        *(arg1 + 0x3c) = var_64
                                                        int32_t var_30_1 = 0xf
                                                        int32_t var_34_1 = 0
                                                        *(arg1 + 0x40) = *sub_402f50(&var_24, 
                                                            var_8c_2, var_88_2, var_84_2, 0xff)
                                                        char var_44 = 0
                                                        int32_t var_8_1 = 0
                                                        
                                                        if (sub_61ed80(arg3, &var_44) == 0)
                                                            sub_403320(&var_44)
                                                            result.b = 0
                                                        else
                                                            sub_4df830(arg1, &var_44)
                                                            
                                                            if (arg2 s< 2)
                                                                goto label_4e01b8
                                                            
                                                            int32_t var_18_1 = 0xf
                                                            int32_t var_1c_1 = 0
                                                            char var_2c = 0
                                                            var_8_1.b = 1
                                                            
                                                            if (sub_61ed80(arg3, &var_2c) != 0)
                                                                sub_4dfb40(arg1, &var_2c)
                                                                var_8_1.b = 0
                                                                sub_403320(&var_2c)
                                                            label_4e01b8:
                                                                
                                                                if (sub_61ed80(arg3, arg1 + 0x140) == 0)
                                                                    sub_403320(&var_44)
                                                                    result.b = 0
                                                                else if (sub_61ec90(arg3, &var_48) == 0)
                                                                    sub_403320(&var_44)
                                                                    result.b = 0
                                                                else
                                                                    *(arg1 + 0x158) = var_48
                                                                    
                                                                    if (sub_61ec90(arg3, arg1 + 0x15c) == 0)
                                                                        sub_403320(&var_44)
                                                                        result.b = 0
                                                                    else if (sub_61ec90(arg3, arg1 + 0x160)
                                                                            == 0)
                                                                        sub_403320(&var_44)
                                                                        result.b = 0
                                                                    else
                                                                        *(arg1 + 0x174) = 1
                                                                        sub_403320(&var_44)
                                                                        result.b = 1
                                                            else
                                                                sub_403320(&var_2c)
                                                                sub_403320(&var_44)
                                                                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
