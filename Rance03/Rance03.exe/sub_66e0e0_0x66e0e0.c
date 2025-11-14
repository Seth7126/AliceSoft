// 函数: sub_66e0e0
// 地址: 0x66e0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int128_t* esi = arg4
int32_t* edi = arg3
int32_t var_4 = arg2
int128_t* eax_1 = arg6

if (edi != arg2 && esi != arg5)
    bool cond:1_1
    
    do
        arg3.b = *(esi + 0x24)
        arg2.b = edi[9].b
        
        if (arg3.b == 0)
            if (arg2.b == 0 && *esi s>= *edi)
                goto label_66e145
            
            goto label_66e11f
        
        if (arg2.b == 0 || *esi s>= *edi)
        label_66e145:
            *eax_1 = *edi
            eax_1[1] = *(edi + 0x10)
            int64_t xmm0_6 = *(edi + 0x20)
            edi = &edi[0xa]
            eax_1[2].q = xmm0_6
            eax_1 += 0x28
            cond:1_1 = edi != var_4
        else
        label_66e11f:
            *eax_1 = *esi
            eax_1[1] = esi[1]
            int64_t xmm0_3 = esi[2].q
            esi += 0x28
            eax_1[2].q = xmm0_3
            eax_1 += 0x28
            cond:1_1 = esi != arg5
    while (cond:1_1)

int32_t var_18 = var_4
int128_t* eax_2 = sub_66f9b0(eax_1, var_4, edi, eax_1)
int32_t var_20 = var_4
return sub_66f9b0(eax_2, arg5, esi, eax_2)
