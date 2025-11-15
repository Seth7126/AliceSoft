// 函数: sub_4bf040
// 地址: 0x4bf040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* result = *(arg2 + 4)

if (result + 1 u> *(arg2 + 8))
    result.b = 0
else
    bool cond:0_1 = *result == 1
    *(arg2 + 4) = result + 1
    result.b = cond:0_1
    *(arg1 + 4) = result.b
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        result.b = 0
    else
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        
        if (sub_61ec90(arg2, arg1 + 0xc).b == 0)
            result.b = 0
        else if (sub_61ec90(arg2, arg1 + 0x10).b == 0)
            result.b = 0
        else
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = 0
            int32_t var_8_1 = 0
            
            if (sub_61ed80(arg2, &var_44) != 0)
                sub_4be9a0(arg1, &var_44)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_8_1.b = 1
                int32_t ebx
                
                if (sub_61ed80(arg2, &var_2c) == 0)
                    ebx.b = 0
                else
                    sub_4bea10(arg1, &var_2c)
                    
                    if (sub_61ed80(arg2, arg1 + 0x48) == 0)
                        ebx.b = 0
                    else if (sub_61ed80(arg2, arg1 + 0x60) == 0)
                        ebx.b = 0
                    else if (sub_61ec90(arg2, arg1 + 0x78) == 0)
                        ebx.b = 0
                    else if (sub_61ec90(arg2, arg1 + 0x7c) == 0)
                        ebx.b = 0
                    else if (sub_61ec90(arg2, arg1 + 0x80) == 0)
                        ebx.b = 0
                    else if (sub_61ec90(arg2, arg1 + 0x84) == 0)
                        ebx.b = 0
                    else if (sub_61ec90(arg2, arg1 + 0x88) == 0)
                        ebx.b = 0
                    else if (sub_61ec90(arg2, arg1 + 0x8c) == 0)
                        ebx.b = 0
                    else
                        *(arg1 + 0x90) = 0
                        uint32_t var_4c
                        
                        if (sub_61ed80(arg2, arg1 + 0x94) == 0)
                            ebx.b = 0
                        else
                            uint32_t var_50
                            
                            if (sub_61ec90(arg2, &var_4c) == 0)
                                ebx.b = 0
                            else
                                uint32_t var_54
                                
                                if (sub_61ec90(arg2, &var_50) == 0)
                                    ebx.b = 0
                                else
                                    uint32_t var_48
                                    
                                    if (sub_61ec90(arg2, &var_54) == 0)
                                        ebx.b = 0
                                    else if (sub_61ec90(arg2, &var_48) == 0)
                                        ebx.b = 0
                                    else
                                        *(arg1 + 0xb4) = var_4c
                                        *(arg1 + 0xb8) = var_50
                                        *(arg1 + 0xc0) = var_54
                                        *(arg1 + 0xc4) = var_48
                                        
                                        if (sub_61ec90(arg2, &var_48) == 0)
                                            ebx.b = 0
                                        else
                                            *(arg1 + 0xc8) = var_48
                                            
                                            if (sub_61ec90(arg2, &var_48) == 0)
                                                ebx.b = 0
                                            else if (sub_61ec90(arg2, &var_54) == 0)
                                                ebx.b = 0
                                            else if (sub_61ec90(arg2, &var_50) == 0)
                                                ebx.b = 0
                                            else
                                                uint32_t var_58
                                                
                                                if (sub_61ec90(arg2, &var_4c) == 0)
                                                    ebx.b = 0
                                                else
                                                    uint32_t var_5c
                                                    
                                                    if (sub_61ec90(arg2, &var_58) == 0)
                                                        ebx.b = 0
                                                    else
                                                        uint32_t var_60
                                                        
                                                        if (sub_6c9300(arg2, &var_5c) == 0)
                                                            ebx.b = 0
                                                        else
                                                            uint32_t var_64
                                                            
                                                            if (sub_6c9300(arg2, &var_60) == 0)
                                                                ebx.b = 0
                                                            else
                                                                uint32_t var_68
                                                                
                                                                if (sub_61ec90(arg2, &var_64) == 0)
                                                                    ebx.b = 0
                                                                else
                                                                    uint32_t var_6c
                                                                    
                                                                    if (sub_61ec90(arg2, &var_68) == 0)
                                                                        ebx.b = 0
                                                                    else if (sub_61ec90(arg2, &var_6c) == 0)
                                                                        ebx.b = 0
                                                                    else
                                                                        uint32_t var_94_1 = var_50
                                                                        *(arg1 + 0xd0) = var_48
                                                                        uint32_t var_98_1 = var_4c
                                                                        uint32_t var_9c_1 = var_58
                                                                        *(arg1 + 0xd4) = var_54
                                                                        void var_7c
                                                                        int32_t* eax_50 = sub_402f50(&var_7c, 
                                                                            var_9c_1, var_98_1, var_94_1, 0xff)
                                                                        uint32_t var_94_2 = var_64
                                                                        uint32_t var_98_2 = var_68
                                                                        *(arg1 + 0xd8) = *eax_50
                                                                        uint32_t var_9c_2 = var_6c
                                                                        *(arg1 + 0xe8) = var_5c
                                                                        *(arg1 + 0xec) = var_60
                                                                        *(arg1 + 0xf0) = *sub_402f50(&var_7c, 
                                                                            var_9c_2, var_98_2, var_94_2, 0xff)
                                                                        
                                                                        if (sub_61ec90(arg2, arg1 + 0x100) == 0)
                                                                            ebx.b = 0
                                                                        else if (sub_61ec90(arg2, arg1 + 0x104)
                                                                                == 0)
                                                                            ebx.b = 0
                                                                        else if (sub_61ec90(arg2, arg1 + 0x108)
                                                                                == 0)
                                                                            ebx.b = 0
                                                                        else if (sub_6c9280(arg2, arg1 + 0x10c)
                                                                                == 0)
                                                                            ebx.b = 0
                                                                        else if (sub_61ec90(arg2, arg1 + 0x110)
                                                                                == 0)
                                                                            ebx.b = 0
                                                                        else
                                                                            *(arg1 + 0x114) = 1
                                                                            ebx.b = 1
                
                sub_403320(&var_2c)
                sub_403320(&var_44)
                result.b = ebx.b
            else
                sub_403320(&var_44)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
