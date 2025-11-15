// 函数: sub_562cb0
// 地址: 0x562cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_562f50(arg1).b != 0)
    int32_t esi_1 = *(arg1 + 0x24)
    int32_t* var_10
    void arg_4
    int32_t ecx_1
    result, ecx_1 = sub_42eb70(arg1 + 0x24, &var_10, &arg_4)
    
    if (*result != esi_1)
        result.b = 1
        return result
    
    int32_t* var_24_2 = var_10
    void* var_28_2 = &arg_4
    sub_514cb0(arg1 + 0x24, &var_10, ecx_1)
    
    if (sub_5632a0(arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
