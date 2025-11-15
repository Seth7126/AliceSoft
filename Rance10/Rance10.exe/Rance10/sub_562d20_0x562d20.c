// 函数: sub_562d20
// 地址: 0x562d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_562f50(arg1).b != 0)
    result = sub_432330(arg1 + 0x2c, arg2)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = *(arg1 + 0x2c)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (result_1 != result_2)
        result = sub_412ca0(arg2, &result_1[4])
    
    if (result_1 == result_2 || result.b != 0)
        result_1 = result_2
    
    if (result_1 == *(arg1 + 0x2c))
        void* var_10
        void* var_24_3 = var_10
        int32_t* var_28_2 = arg2
        sub_44e4f0(arg1 + 0x2c, &var_10, arg1 + 0x2c)
        result = sub_5632a0(arg1)
    
    if (result_1 != *(arg1 + 0x2c) || result.b != 0)
        result.b = 1
        return result

result.b = 0
return result
