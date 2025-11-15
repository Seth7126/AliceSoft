// 函数: sub_5c0280
// 地址: 0x5c0280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2

if (arg3 == esi)
    return arg4

int32_t* edi = arg4

do
    esi -= 4
    edi -= 4
    
    if (edi != esi)
        int32_t eax = *esi
        *esi = 0
        int32_t* ebx_1 = *edi
        *edi = eax
        
        if (ebx_1 != 0)
            sub_5bd030(ebx_1)
            int32_t var_14_1 = 0x80
            operator new(ebx_1)
while (esi != arg3)

return edi
