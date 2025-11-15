// 函数: sub_56da90
// 地址: 0x56da90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3

if (esi == arg2)
    return arg4

int32_t* edi = arg4

do
    if (edi != esi)
        int32_t eax = *esi
        *esi = 0
        struct common::CSize::VTable** ebx_1 = *edi
        *edi = eax
        
        if (ebx_1 != 0)
            sub_56d020(&ebx_1[7])
            sub_55c120(&ebx_1[4])
            int32_t var_14_1 = 0x28
            *ebx_1 = &common::CSize::`vftable'
            operator new(ebx_1)
    
    esi = &esi[1]
    edi = &edi[1]
while (esi != arg2)

return edi
