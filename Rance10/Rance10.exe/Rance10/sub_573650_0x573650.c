// 函数: sub_573650
// 地址: 0x573650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm4 = *(arg1 + 0x18)
int32_t* ebx = arg3
float xmm2 = *(arg1 + 0x20)
float xmm1 = 1f / (*(arg1 + 0x1c) - xmm4)
float xmm5 = *ebx
float xmm3_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x28)))
float xmm3_2 = ebx[2]
float xmm0_8 = *(arg1 + 0x24) - xmm2
int32_t var_10 = int.d((xmm5 - arg2 - xmm4) * xmm3_1 * xmm1)
float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
float xmm6 = 1f / xmm0_8
int32_t var_c = int.d((xmm5 + arg2 - xmm4) * xmm3_1 * xmm1)
int32_t var_8 = int.d((xmm3_2 - arg2 - xmm2) * xmm1_2 * xmm6)
int32_t var_4 = int.d((xmm3_2 + arg2 - xmm2) * xmm1_2 * xmm6)
int32_t* var_2c = &var_10
int32_t* var_18
sub_573220(arg1, &var_18)
float xmm0_14 = arg2
int32_t* edi = var_18
float xmm1_4 = xmm0_14 * xmm0_14
int32_t* i = *edi
arg3 = xmm1_4

if (i != edi)
    do
        sub_5723b0(i[4], xmm0_14, xmm1_4, ebx)
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
        
        xmm0_14 = arg2
        xmm1_4 = arg3
    while (i != edi)
    
    edi = var_18

sub_4f27c0(&var_18, &arg3, *edi, edi)
return sub_403160(var_18, 1, 0x14)
