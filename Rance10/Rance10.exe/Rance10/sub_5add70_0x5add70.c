// 函数: sub_5add70
// 地址: 0x5add70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0xd4)
float* eax_2
int32_t var_7c
void var_70
void var_64

if (eax u> 6)
    eax_2 = sub_5b0690(&var_64, arg2)
else
    switch (eax)
        case 0
            eax_2 = sub_5b0690(&var_7c, arg2)
        case 1
            void* var_90_1 = arg1
            float* eax_1 = sub_6ca9e0(arg1 + 0xd8, &var_7c)
            eax_2 = sub_5b0f10(eax_1, eax_1, &var_70, *(arg1 + 0xe4), *(arg1 + 0xe8), arg2)
        case 2
            eax_2 = sub_5b0f10(eax, arg1 + 0x3b8, &var_70, *(arg1 + 0xe4), *(arg1 + 0xe8), arg2)
        case 3
            float xmm3_3 = *(arg1 + 0xe8)
            float xmm2_3 = *(arg1 + 0xe4)
            var_7c = *(arg1 + 0x3b8) ^ 0x80000000
            int32_t var_78_1 = *(arg1 + 0x3bc) ^ 0x80000000
            int32_t var_74_1 = *(arg1 + 0x3c0) ^ 0x80000000
            eax_2 = sub_5b0f10(eax, &var_7c, &var_70, xmm2_3, xmm3_3, arg2)
        case 4
            float xmm0_7 = *(arg1 + 0xe8)
            *(arg1 + 0x39c)
            void* var_90_2 = arg1
            float xmm0_8 = *(arg1 + 0xe4)
            void var_58
            int32_t* eax_3 = sub_579490(arg1 + 4, &var_58)
            float var_48[0x10]
            float* eax_4 = sub_6cbac0(eax_3, &var_48)
            int32_t* var_98_1 = eax_3
            float* eax_5 = sub_6ca9e0(arg1 + 0xd8, &var_7c)
            eax_2 =
                sub_6ca8d0(sub_5b0f10(eax_5, eax_5, &var_64, xmm0_8, xmm0_7, arg2), &var_70, eax_4)
        case 5
            float xmm0_9 = *(arg1 + 0xe8)
            float xmm0_10 = *(arg1 + 0xe4)
            int32_t* eax_8 = sub_6ca9e0(arg1 + 0xd8, &var_64)
            float* eax_9 = sub_5b11f0(eax_8, eax_8, &var_70, arg2)
            eax_2 = sub_5b0f10(eax_9, eax_9, &var_7c, xmm0_10, xmm0_9, arg2)
        case 6
            eax_2 = sub_6ca9e0(arg1 + 0x390, &var_64)
*(arg1 + 0x3ac) = *eax_2
int32_t result = eax_2[2]
*(arg1 + 0x3b4) = result
return result
