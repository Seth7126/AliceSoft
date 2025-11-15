// 函数: sub_6b2e10
// 地址: 0x6b2e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u> 0x20)
    return 0xffffffff

int32_t ebx = *arg1
int32_t esi = arg1[4]
int32_t edi = arg1[1]
int32_t edx = arg2 + edi

if (ebx s>= esi - 4)
    if (ebx s> esi - ((edx + 7) s>> 3))
        return 0xffffffff
    
    if (edx == 0)
        return 0

char* ebx_1 = arg1[3]
arg1.b = arg1[1].b
uint32_t esi_3 = zx.d(*ebx_1) u>> arg1.b

if (edx s> 8)
    esi_3 |= zx.d(ebx_1[1]) << (8 - edi.b)
    
    if (edx s> 0x10)
        esi_3 |= zx.d(ebx_1[2]) << (0x10 - edi.b)
        
        if (edx s> 0x18)
            esi_3 |= zx.d(ebx_1[3]) << (0x18 - edi.b)
            
            if (edx s> 0x20 && edi != 0)
                esi_3 |= zx.d(ebx_1[4]) << (0x20 - edi.b)

return esi_3 & *((arg2 << 2) + &data_774860)
