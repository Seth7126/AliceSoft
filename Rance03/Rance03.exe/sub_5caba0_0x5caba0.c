// 函数: sub_5caba0
// 地址: 0x5caba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sys43vm::CPage::VTable** eax = sub_5d57c0(&arg1[0x62])

if (eax != 0)
    int32_t eax_1 = sub_5d5dc0(&arg1[0x5b])
    *(arg1[0x5d] + (eax_1 << 2)) = eax
    
    if (sub_5d3920(eax, *(arg2 + 0x2c), arg2 + 0x3c, *(arg2 + 0x30)).b != 0
            && sub_5c0400(arg1, eax_1).b != 0)
        if (arg4 s<= 0)
        label_5cac1e:
            int32_t edx = *(arg2 + 4)
            int32_t ecx_8 = arg1[0x82] - arg1[0x83]
            *arg1[0x393] = 1
            arg1[0x393] += 4
            *arg1[0x18f] = ecx_8
            arg1[0x18f] += 4
            arg1[0x82] = arg1[0x83] + edx
            int32_t eax_6
            eax_6.b = 1
            return eax_6
        
        if (sub_5d3b50(arg1[0x496], arg3, arg4).b != 0)
            goto label_5cac1e

eax.b = 0
return eax
