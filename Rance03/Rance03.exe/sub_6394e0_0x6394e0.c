// 函数: sub_6394e0
// 地址: 0x6394e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = *(arg1 + 0x28)
int32_t i_2 = i_1
int32_t eax = sub_638010(arg2, *(arg1 + 0x24))
int32_t ebp_3
int32_t result

if (eax s< 0)
    ebp_3 = *(arg1 + 8)
    result = 0
else
    int32_t ebp_1 = *(*(arg1 + 0x20) + (eax << 2))
    
    if (ebp_1 s>= 0)
        sub_6380c0(arg2, sx.d(*(*(arg1 + 0x1c) + ebp_1 - 1)))
        return ebp_1 - 1
    
    result = ebp_1 s>> 0xf & 0x7fff
    ebp_3 = *(arg1 + 8) - (ebp_1 & 0x7fff)

int32_t eax_6 = sub_638010(arg2, i_1)

if (eax_6 s>= 0)
label_63957f:
    int32_t eax_7
    int32_t ecx_6
    eax_7, ecx_6 = sub_639470(eax_6)
    int32_t i = ebp_3 - result
    
    if (i s> 1)
        do
            int32_t edx_5 = i s>> 1
            int32_t ecx_8 =
                neg.d(sbb.d(ecx_6, ecx_6, eax_7 u< *(*(arg1 + 0x14) + ((edx_5 + result) << 2))))
            ecx_6 = neg.d(ecx_8) & edx_5
            ebp_3 -= ecx_6
            result += (ecx_8 - 1) & edx_5
            i = ebp_3 - result
        while (i s> 1)
        
        i_1 = i_2
    
    int32_t edx_7 = sx.d(*(*(arg1 + 0x1c) + result))
    
    if (edx_7 s<= i_1)
        sub_6380c0(arg2, edx_7)
        return result
    
    sub_6380c0(arg2, i_1)
else
    while (i_1 s> 1)
        i_1 -= 1
        i_2 = i_1
        eax_6 = sub_638010(arg2, i_1)
        
        if (eax_6 s>= 0)
            goto label_63957f
    
    if (eax_6 s>= 0)
        goto label_63957f

return 0xffffffff
