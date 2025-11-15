// 函数: sub_4efe50
// 地址: 0x4efe50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
char result

while (true)
    float xmm0_2 = sub_4efce0(esi) f+ *(esi + 0x248)
    float var_24_1 = *(esi + 0x250) + xmm0_2
    float xmm0_4 = sub_4efd70(esi) f+ *(esi + 0x24c)
    int32_t var_2c_1 = *(esi + 0x9c)
    float xmm1_4 = *(esi + 0x254) + xmm0_4
    int32_t var_28_1 = *(esi + 0xa0)
    int32_t eax_2
    eax_2.b = *(esi + 0xa9)
    int32_t var_14_1 = *(esi + 0xdc)
    int32_t var_10_1 = *(esi + 0xe0)
    int32_t xmm0_7 = *(esi + 0xe4)
    char var_30 = eax_2.b
    eax_2.b = *(esi + 0xa8)
    int32_t var_c_1 = xmm0_7
    char var_2f_1 = eax_2.b
    int32_t var_1c_1 = *(esi + 0xd4)
    float var_20_1 = xmm1_4
    int32_t var_18_1 = *(esi + 0xd8)
    sub_4d7000(arg2, &var_30)
    void* eax_3 = *(esi + 0x7c)
    
    if (eax_3 == 0)
        result = sub_4ee0e0(esi)
        
        if (result == 0)
            break
        
        esi = sub_4ed6f0(esi)
    else
        esi = eax_3

return result
