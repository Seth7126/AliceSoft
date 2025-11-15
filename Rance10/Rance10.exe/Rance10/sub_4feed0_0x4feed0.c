// 函数: sub_4feed0
// 地址: 0x4feed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax

if (data_7fcb2a == 0)
    eax = 1
else
    eax = *(arg1 + 0x74)

*(arg1 + 0x74) = eax

if (eax != 0)
    void* eax_1 = *(arg1 + 0x6c)
    *(arg1 + 0x74) = 0
    float var_c = 0f
    float var_8 = 0f
    eax_1.b = *(eax_1 + 0x309)
    char var_4_1 = eax_1.b
    int32_t eax_2 = *(arg1 + 0x44)
    
    if (eax_2 == 0)
        sub_4fefa0(arg1, &var_c, &var_8, var_4_1)
    else if (eax_2 == 1)
        sub_4ff1d0(arg1, &var_c, &var_8, var_4_1)
    else if (eax_2 == 2)
        sub_4ff440(arg1, &var_c, &var_8, var_4_1)
    
    int32_t eax_6 = int.d(sub_4a78b0(var_c))
    float xmm0_3 = var_8
    *(arg1 + 0x78) = eax_6
    *(arg1 + 0x7c) = int.d(sub_4a78b0(xmm0_3))

*arg2 = *(arg1 + 0x78)
*arg3 = *(arg1 + 0x7c)
return arg3
