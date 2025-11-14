// 函数: sub_5d3640
// 地址: 0x5d3640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 4
int32_t ebx_2 = (edx_3 u>> 0x1f) + edx_3
int32_t edx_4 = 0

if (ebx_2 s> 0)
    int32_t esi_1 = 0
    
    while (true)
        switch (*(esi_1 + *arg2 + 0x18))
            case 0, 0xa, 0xb, 0x1b, 0x2f
                if (*(arg1 + 0xc) != 0)
                    *(*(arg1 + 8) + (edx_4 << 2)) = 0
                else
                    *(edx_4 << 2) = 0
                
            label_5d36ab:
                edx_4 += 1
                esi_1 += 0x28
                
                if (edx_4 s>= ebx_2)
                    break
                
                continue
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                    0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                if (*(arg1 + 0xc) != 0)
                    eax = *(arg1 + 8)
                else
                    eax = 0
                
                *(eax + (edx_4 << 2)) = 0xffffffff
                goto label_5d36ab
        
        uint32_t eax_2
        eax_2.b = 0
        return eax_2

eax.b = 1
return eax
