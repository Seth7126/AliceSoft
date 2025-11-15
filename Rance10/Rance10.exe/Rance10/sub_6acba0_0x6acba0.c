// 函数: sub_6acba0
// 地址: 0x6acba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint8_t eax = arg1[2].b

if ((eax & 2) != 0)
    int32_t i_2 = *arg1
    arg1.b = *(arg1 + 9)
    
    if (arg1.b != 8)
        if (arg1.b == 0x10)
            int32_t ebp_1
            
            if (eax == 2)
                ebp_1 = 6
            label_6acc0c:
                
                if (i_2 != 0)
                    void* ebx_1 = arg2 + 1
                    int32_t i
                    
                    do
                        uint16_t esi_3 = (zx.d(*(ebx_1 + 1)) << 8).w | zx.w(*(ebx_1 + 2))
                        uint32_t edx_1 = zx.d(((zx.d(*(ebx_1 - 1)) << 8).w | zx.w(*ebx_1)) + esi_3)
                        uint16_t ecx_6 = (zx.d(*(ebx_1 + 3)) << 8).w | zx.w(*(ebx_1 + 4))
                        *ebx_1 = edx_1.b
                        uint32_t ecx_8 = zx.d(ecx_6 + esi_3)
                        *(ebx_1 - 1) = (edx_1 u>> 8).b
                        eax = (ecx_8 u>> 8).b
                        *(ebx_1 + 3) = eax
                        *(ebx_1 + 4) = ecx_8.b
                        ebx_1 += ebp_1
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
            else if (eax == 6)
                ebp_1 = 8
                goto label_6acc0c
    else
        int32_t edx
        
        if (eax == 2)
            edx = 3
        label_6acbd1:
            
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
            goto label_6acbd1

return eax
