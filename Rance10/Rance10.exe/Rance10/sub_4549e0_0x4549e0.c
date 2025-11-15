// 函数: sub_4549e0
// 地址: 0x4549e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = *arg1
arg1[3] = 0xffffffff
arg1[4] = 0
char* edx = *(arg2 + 4)
int32_t edi = *(arg2 + 8)

if (&edx[4] u<= edi)
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    uint32_t i
    
    if (ecx_6 s<= 0)
        i.b = 1
        return i
    
    if (&edx[4 + (ecx_6 << 2)] u<= edi)
        sub_42c9c0(arg1, ecx_6)
        int32_t ecx_8 = arg1[1]
        
        for (i = *arg1; i != ecx_8; i += 4)
            char* edi_1 = *(arg2 + 4)
            uint32_t edx_7 =
                ((zx.d(edi_1[3]) << 8 | zx.d(edi_1[2])) << 8 | zx.d(edi_1[1])) << 8 | zx.d(*edi_1)
            *(arg2 + 4) = &edi_1[4]
            *i = edx_7
            
            if (arg1[3] u> edx_7)
                arg1[3] = edx_7
            
            int32_t edx_8 = *i
            
            if (arg1[4] u< edx_8)
                arg1[4] = edx_8
        
        i.b = 1
        return i

void* eax
eax.b = 0
return eax
