// 函数: sub_63d7b0
// 地址: 0x63d7b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
int32_t i = arg4
char* var_4 = arg2
char* ebp = arg2
int32_t* esi = arg3

while (i != 0)
    int32_t edx = esi[4]
    int32_t ebx_1 = *esi
    int32_t edi_2 = esi[1] + 8
    char ebx_2
    
    if (ebx_1 s< edx - 4)
    label_63d80d:
        char* ebp_1 = esi[3]
        arg3.b = esi[1].b
        uint32_t ebx_4 = zx.d(*ebp_1) u>> arg3.b
        
        if (edi_2 s> 8)
            char edx_2 = (neg.d(esi[1])).b
            ebx_4 |= zx.d(ebp_1[1]) << (edx_2 + 8)
            
            if (edi_2 s> 0x10)
                ebx_4 |= zx.d(ebp_1[2]) << (edx_2 + 0x10)
                
                if (edi_2 s> 0x18)
                    ebx_4 |= zx.d(ebp_1[3]) << (edx_2 + 0x18)
                    
                    if (edi_2 s> 0x20 && esi[1] != 0)
                        ebx_4 |= zx.d(ebp_1[4]) << (edx_2 + 0x20)
        
        int32_t eax_13
        int32_t edx_3
        edx_3:eax_13 = sx.q(edi_2)
        esi[1] = edi_2 & 7
        int32_t eax_15 = (eax_13 + (edx_3 & 7)) s>> 3
        *esi += eax_15
        ebx_2 = ebx_4.b & 0xff
        ebp = var_4
        esi[3] = &ebp_1[eax_15]
    else if (ebx_1 s> edx - ((edi_2 + 7) s>> 3))
        esi[3] = 0
        ebx_2 = -1
        *esi = edx
        esi[1] = 1
    else
        if (edi_2 != 0)
            goto label_63d80d
        
        ebx_2 = 0
    
    i -= 1
    *ebp = ebx_2
    ebp = &ebp[1]
    var_4 = ebp

return i
