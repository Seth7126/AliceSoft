// 函数: sub_62f9e0
// 地址: 0x62f9e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint8_t eax = arg1[2].b

if ((eax & 2) != 0)
    int32_t i_2 = *arg1
    arg1.b = *(arg1 + 9)
    
    if (arg1.b != 8)
        if (arg1.b == 0x10)
            int32_t ebp_1
            
            if (eax == 2)
                ebp_1 = 6
            label_62fa4a:
                
                if (i_2 != 0)
                    void* edi_1 = arg2 + 1
                    int32_t i
                    
                    do
                        uint16_t edx_3 = (zx.d(*(edi_1 + 1)) << 8).w | zx.w(*(edi_1 + 2))
                        uint32_t ebx_5 = zx.d(((zx.d(*(edi_1 - 1)) << 8).w | zx.w(*edi_1)) + edx_3)
                        uint16_t ecx_3 = ((zx.d(*(edi_1 + 3)) << 8).w | zx.w(*(edi_1 + 4))) + edx_3
                        *edi_1 = ebx_5.b
                        uint32_t ecx_4 = zx.d(ecx_3)
                        *(edi_1 - 1) = (ebx_5 u>> 8).b
                        eax = (ecx_4 u>> 8).b
                        *(edi_1 + 3) = eax
                        *(edi_1 + 4) = ecx_4.b
                        edi_1 += ebp_1
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
            else if (eax == 6)
                ebp_1 = 8
                goto label_62fa4a
    else
        int32_t edx
        
        if (eax == 2)
            edx = 3
        label_62fa11:
            
            if (i_2 != 0)
                char* eax_1 = arg2 + 2
                int32_t i_1
                
                do
                    arg1.b = eax_1[0xffffffff]
                    eax_1[0xfffffffe] += arg1.b
                    *eax_1 += arg1.b
                    eax_1 = &eax_1[edx]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                return eax_1
        else if (eax == 6)
            edx = 4
            goto label_62fa11

return eax
