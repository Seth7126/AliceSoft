// 函数: sub_627a00
// 地址: 0x627a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t i = (*(*(arg1 + 0x20) + 8))()
uint32_t eax_5

if (sub_405df0(arg1 + 0xc, (*(arg1 + 0x3c) * arg2) << 2).b != 0)
    if (*(arg1 + 0x34) u<= 0)
        switch (*(arg1 + 0x2c) - 0xa)
            case 0, 1, 0x25, 0x52
                if (i s>= arg2)
                    eax_5.b = 1
                    return eax_5
                
                do
                    if (i u< *(arg1 + 0x14) u>> 2)
                        *(*(arg1 + 0x10) + (i << 2)) = 0
                    
                    i += 1
                while (i s< arg2)
                
                uint32_t eax_10
                eax_10.b = 1
                return eax_10
            case 2
                if (i s>= arg2)
                    eax_5.b = 1
                    return eax_5
                
                while (true)
                    eax_5 = sub_621120(*(arg1 + 0x24))
                    
                    if (eax_5 s< 0)
                        break
                    
                    sub_600820(arg1, i, eax_5)
                    i += 1
                    
                    if (i s>= arg2)
                        uint32_t eax_11
                        eax_11.b = 1
                        return eax_11
            case 3
                if (i s>= arg2)
                    eax_5.b = 1
                    return eax_5
                
                while (true)
                    int32_t var_18_3 = arg3
                    eax_5 = sub_6219f0(*(arg1 + 0x24), *(arg1 + 0x30))
                    
                    if (eax_5 s< 0)
                        break
                    
                    sub_600820(arg1, i, eax_5)
                    i += 1
                    
                    if (i s>= arg2)
                        uint32_t eax_12
                        eax_12.b = 1
                        return eax_12
            case 8, 9, 0x29, 0x4f, 0x53
                if (i s>= arg2)
                    eax_5.b = 1
                    return eax_5
                
                int32_t edx = i * 2
                
                do
                    if (edx u< *(arg1 + 0x14) u>> 2)
                        *(*(arg1 + 0x10) + (i << 3)) = 0xffffffff
                    
                    if (edx + 1 u< *(arg1 + 0x14) u>> 2)
                        *(*(arg1 + 0x10) + (i << 3) + 4) = 0
                    
                    i += 1
                    edx += 2
                while (i s< arg2)
                
                uint32_t eax_18
                eax_18.b = 1
                return eax_18
            case 0xa, 0xb, 0x39
                for (; i s< arg2; i += 1)
                    if (i u< *(arg1 + 0x14) u>> 2)
                        *(*(arg1 + 0x10) + (i << 2)) = 0xffffffff
                
                eax_5.b = 1
                return eax_5
            case 0x35
                if (i s>= arg2)
                    eax_5.b = 1
                    return eax_5
                
                while (true)
                    eax_5 = sub_621320(*(arg1 + 0x24))
                    
                    if (eax_5 s< 0)
                        break
                    
                    sub_600820(arg1, i, eax_5)
                    i += 1
                    
                    if (i s>= arg2)
                        uint32_t eax_13
                        eax_13.b = 1
                        return eax_13
    else
        if (i s>= arg2)
            eax_5.b = 1
            return eax_5
        
        while (true)
            eax_5 = sub_6211e0(*(arg1 + 0x24), *(arg1 + 0x2c), *(arg1 + 0x30), *(arg1 + 0x34) - 1)
            
            if (eax_5 s< 0)
                break
            
            if (i u< *(arg1 + 0x14) u>> 2)
                *(*(arg1 + 0x10) + (i << 2)) = eax_5
            
            i += 1
            
            if (i s>= arg2)
                eax_5.b = 1
                return eax_5

eax_5.b = 0
return eax_5
