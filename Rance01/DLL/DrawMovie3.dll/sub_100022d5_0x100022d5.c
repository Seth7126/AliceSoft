// 函数: sub_100022d5
// 地址: 0x100022d5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg4 == 0)
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    return 0xffffffff

int32_t edi
int32_t var_30_1 = edi
int32_t result

if (arg3 == 0 || arg2 != 0)
    int32_t var_20_1 = 0x7fffffff
    
    if (arg3 u<= 0x7fffffff)
        var_20_1 = arg3
    
    int32_t var_18_1 = 0x42
    char* var_1c_1 = arg2
    char* var_24 = arg2
    result = arg1(&var_24, arg4, arg5, arg6)
    
    if (arg2 != 0)
        if (result s< 0)
        label_10002393:
            arg2[arg3 - 1] = 0
            int32_t eax_4
            eax_4.b = var_20_1 s>= 0
            result = eax_4 - 2
        else
            int32_t temp0_1 = var_20_1
            var_20_1 -= 1
            
            if (temp0_1 - 1 s< 0)
                char** var_34_2 = &var_24
                
                if (sub_100047ac(nullptr) == 0xffffffff)
                    goto label_10002393
            else
                *var_24 = 0
else
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    result = 0xffffffff

return result
