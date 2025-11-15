// 函数: sub_55f250
// 地址: 0x55f250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
void* result = __security_cookie ^ &var_28
void* result_1 = result

if (*(arg1 + 0xe8) != 0)
    int32_t var_34_1 = 1
    result = sub_42cb30(arg1 + 0xd8, U"\n\n ", arg1)
    
    if (result != 0xffffffff)
        void* var_24
        sub_409670(arg1 + 0xd8, sub_405480(arg1 + 0xd8, &var_24, result + 1, 0xffffffff))
        int32_t var_10
        
        if (var_10 u>= 0x10)
            sub_403160(var_24, var_10 + 1, 1)
        
        result = sub_55d550(arg1)

@__security_check_cookie@4(result_1 ^ &var_28)
return result
