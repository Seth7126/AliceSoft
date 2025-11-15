// 函数: sub_63ec10
// 地址: 0x63ec10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct textsurface::CExternalCompressedFont::VTable** result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 8
    
    do
        if (result != 0)
            *result = &textsurface::CExternalCompressedFont::`vftable'
            result[1] = esi_1[-1]
            result[2] = *esi_1
            result[3] = esi_1[1]
        
        esi_1 = &esi_1[4]
        result = &result[4]
    while (&esi_1[-2] != arg2)

return result
