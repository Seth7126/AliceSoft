// 函数: sub_421a50
// 地址: 0x421a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = (*(**(arg1 + 8) + 4))(arg2)

if (esi != 0 && (*(*esi + 0x14))() s> 0)
    int32_t* ebp = (*(*esi + 0x18))()
    uint32_t eax_7
    
    if (ebp != 0)
        switch ((*(**(arg1 + 8) + 0x24))(arg2) - 0xa)
            case nullptr, 1, 0x25, 0x52
                if ((*(**(arg1 + 8) + 0x20))(arg2) s> 0)
                    goto label_421ac1
                
                eax_7.b = 1
                return eax_7
            case 2, 3, 0xa, 0xb, 0x35, 0x39
            label_421ac1:
                int32_t edi_1 = 0
                
                if (((*(*esi + 0x14))() & 0xfffffffc) u<= 0)
                    eax_7.b = 1
                    return eax_7
                
                while (sub_421810(arg1, ebp[edi_1], arg3).b != 0)
                    edi_1 += 1
                    
                    if (edi_1 u>= (*(*esi + 0x14))() u>> 2)
                        uint32_t eax_11
                        eax_11.b = 1
                        return eax_11
            case 8, 9, 0x29, 0x4f, 0x53
                int32_t edi_2 = 0
                
                if (((*(*esi + 0x14))() & 0xfffffffc) u> 0)
                    do
                        if (sub_421810(arg1, ebp[edi_2], arg3).b == 0)
                            goto label_421b40
                        
                        edi_2 += 2
                        eax_7 = (*(*esi + 0x14))() u>> 2
                    while (edi_2 u< eax_7)
                
                eax_7.b = 1
                return eax_7
label_421b40:
    int32_t* eax_3
    eax_3.b = 0
    return eax_3

int32_t* eax_1
eax_1.b = 1
return eax_1
