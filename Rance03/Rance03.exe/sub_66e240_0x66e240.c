// 函数: sub_66e240
// 地址: 0x66e240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* ebx = arg1
int32_t edi
int32_t var_64 = edi

if (ebx == arg2)
    return 

for (int128_t* i = ebx + 0x28; i != arg2; i += 0x28)
    int64_t xmm1_1 = i[2].q
    int128_t* i_2 = i
    int128_t xmm0_1 = *i
    int128_t* i_1
    i_1.b = *(ebx + 0x25)
    int128_t xmm2_1 = i[1]
    arg1:1.b = xmm1_1.6:5.b
    int32_t var_2c_1 = xmm0_1.d
    
    if (arg1:1.b == 0)
        if (i_1.b == 0 && var_2c_1 s>= *ebx)
            goto label_66e2e1
        
        goto label_66e2ab
    
    if (i_1.b == 0 || var_2c_1 s>= *ebx)
    label_66e2e1:
        i_1 = i
        
        while (true)
            arg1.b = *(i_1 - 3)
            i_1 -= 0x28
            
            if (arg1:1.b != 0)
                if (arg1.b == 0)
                    break
                
            label_66e2f7:
                
                if (var_2c_1 s>= *i_1)
                    break
            else if (arg1.b == 0)
                goto label_66e2f7
            
            *i_2 = *i_1
            i_2[1] = i_1[1]
            i_2[2].q = i_1[2].q
            i_2 = i_1
        
        *i_2 = xmm0_1
        i_2[1] = xmm2_1
        i_2[2].q = xmm1_1
    else
    label_66e2ab:
        int32_t var_68_1 = xmm1_1.d
        sub_66f970(i + 0x28, i, ebx, i + 0x28)
        *ebx = xmm0_1
        ebx[1] = xmm2_1
        ebx[2].q = xmm1_1
