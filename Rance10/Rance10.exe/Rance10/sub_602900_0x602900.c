// 函数: sub_602900
// 地址: 0x602900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t result = ((arg3 - *arg1) s>> 2 << 5) + arg4

if (ebx != 0)
    int32_t ecx = arg1[3]
    
    if (0xffffffff - ecx u< ebx)
        sub_6d0927("vector<bool> too long")
        noreturn
    
    arg2 = nullptr
    sub_4d4cc0(arg1, (ebx + 0x1f + ecx) u>> 5, &arg2)
    int32_t ebp_1 = arg1[3]
    
    if (ebp_1 == 0)
        arg1[3] = ebx
        return result
    
    int32_t* eax_6 = *arg1
    arg2 = eax_6
    int32_t* var_10 = eax_6
    int32_t* var_c_1 = nullptr
    
    if (ebp_1 != 0)
        sub_602850(&var_10, ebp_1)
        arg2 = var_10
    
    void* eax_8 = ebx + ebp_1
    int32_t ebx_1 = 0
    arg1[3] = eax_8
    int32_t ebp_2 = *arg1
    int32_t edi_1 = ebp_2
    int32_t var_18 = edi_1
    int32_t var_14_1 = 0
    
    if (eax_8 != 0)
        sub_602850(&var_18, eax_8)
        ebx_1 = var_14_1
        edi_1 = var_18
    
    var_18 = ebp_2
    int32_t var_14_2 = 0
    void var_8
    int32_t* eax_9
    int32_t edx_1
    eax_9, edx_1 = sub_6025a0(&var_18, &var_8, result)
    int32_t var_2c_5 = ebx_1
    var_18.b = 0
    sub_602ac0(eax_9, edx_1, &var_10, var_18, *eax_9, eax_9[1], arg2, var_c_1, edi_1)

return result
