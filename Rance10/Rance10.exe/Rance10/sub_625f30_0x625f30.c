// 函数: sub_625f30
// 地址: 0x625f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_28
int32_t eax_1 = __security_cookie ^ &var_28
char* result

if (*(arg1 + 0x44) == 4)
    void* var_24
    sub_403360(&var_24, arg3)
    sub_60c2a0(arg1 + 0x20, &var_28, &var_24)
    int32_t var_10
    
    if (var_10 u>= 0x10)
        sub_403160(var_24, var_10 + 1, 1)
    
    void* eax_4 = var_28
    
    if (eax_4 != *(arg1 + 0x24))
        result = *(eax_4 + 0x20)
    label_625f95:
        *arg2 = result
        result.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_28)
        return result
    
    result = *(arg1 + 0x40)
    
    if (result != 0xffffffff)
        goto label_625f95

result.b = 0
@__security_check_cookie@4(eax_1 ^ &var_28)
return result
