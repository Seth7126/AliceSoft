// 函数: sub_6c6c60
// 地址: 0x6c6c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t eax_1 = 0
uint32_t edi = zx.d(zx.w(arg1) * 0x100 + zx.w(arg2))

while (true)
    uint32_t esi_1 = zx.d(*((eax_1 << 1) + &data_787670))
    
    if (edi.w u>= esi_1.w)
        uint32_t ecx_1 = zx.d(*((eax_1 << 1) + &data_787670:2))
        
        if (edi.w u<= ecx_1.w)
            break
        
        eax_1 += 2
        ebx = ebx + 1 + ecx_1 - esi_1
        
        if (eax_1 s< 0xd2)
            continue
    
    return 0xffffffff

return edi - zx.d(*((eax_1 << 1) + &data_787670)) + ebx
