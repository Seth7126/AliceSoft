// 函数: sub_6b2ec0
// 地址: 0x6b2ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1

if (arg2 u<= 0x20)
    int32_t ecx = arg1[4]
    int32_t edx = arg1[1]
    int32_t esi_1 = arg2 + edx
    int32_t ebx_1 = *arg1
    var_4 = *((arg2 << 2) + &data_774860)
    
    if (ebx_1 s< ecx - 4)
    label_6b2f09:
        char* ebp = arg1[3]
        ecx.b = edx.b
        uint32_t ebx_3 = zx.d(*ebp) u>> ecx.b
        
        if (esi_1 s> 8)
            ebx_3 |= zx.d(ebp[1]) << (8 - edx.b)
            
            if (esi_1 s> 0x10)
                ebx_3 |= zx.d(ebp[2]) << (0x10 - edx.b)
                
                if (esi_1 s> 0x18)
                    ebx_3 |= zx.d(ebp[3]) << (0x18 - edx.b)
                    
                    if (esi_1 s> 0x20 && edx != 0)
                        ebx_3 |= zx.d(ebp[4]) << (0x20 - edx.b)
        
        int32_t eax_15
        int32_t edx_1
        edx_1:eax_15 = sx.q(esi_1)
        arg1[1] = esi_1 & 7
        int32_t eax_17 = (eax_15 + (edx_1 & 7)) s>> 3
        *arg1 += eax_17
        arg1[3] = &ebp[eax_17]
        return ebx_3 & var_4
    
    if (ebx_1 s<= ecx - ((esi_1 + 7) s>> 3))
        if (esi_1 == 0)
            return 0
        
        goto label_6b2f09

*arg1 = arg1[4]
arg1[3] = 0
arg1[1] = 1
return 0xffffffff
