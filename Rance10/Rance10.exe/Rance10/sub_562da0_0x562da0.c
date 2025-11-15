// 函数: sub_562da0
// 地址: 0x562da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_562f50(arg1).b != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    void arg_4
    sub_42eb70(arg1 + 0x24, &result_1, &arg_4)
    result = result_1
    
    if (result == *(arg1 + 0x24))
        result.b = 1
        return result
    
    sub_513fc0(arg1 + 0x24, &result_1, result)
    
    if (sub_5632a0(arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
