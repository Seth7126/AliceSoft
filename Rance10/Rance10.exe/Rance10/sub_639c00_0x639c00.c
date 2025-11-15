// 函数: sub_639c00
// 地址: 0x639c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* esi = arg3

if (esi != arg2)
    arg1 = arg4 - esi
    arg4 = arg1
    
    do
        if ((*(**(*arg5 + 4) + 0x20))(zx.d(*esi)) != (*(**(*arg5 + 4) + 0x20))(zx.d(*(arg1 + esi))))
            int16_t eax_8
            eax_8.b = 0
            return eax_8
        
        arg1 = arg4
        esi = &esi[1]
    while (esi != arg2)

arg1.b = 1
return arg1
