// 函数: sub_429950
// 地址: 0x429950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *arg1
void** result_1 = result[1]

if (*(result_1 + 0xd) == 0)
    int32_t esi_1 = arg2[1]
    int32_t* edi_2 = *arg2
    
    do
        arg2.b = 0
        int32_t var_14_1 = 0
        int32_t* var_18_1 = arg1
        int32_t* eax
        eax, arg1 = sub_42a380(eax, result_1[5], result_1[4], edi_2, esi_1)
        
        if (eax.b == 0)
            result = result_1
            result_1 = *result_1
        else
            result_1 = result_1[2]
    while (*(result_1 + 0xd) == 0)

return result
