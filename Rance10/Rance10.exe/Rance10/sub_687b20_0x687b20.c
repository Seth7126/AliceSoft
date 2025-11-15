// 函数: sub_687b20
// 地址: 0x687b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__builtin_memset(arg1 + 0x14c, 0, 0x28)
int32_t esi = 0
*(arg1 + 0x284) = 0
int32_t* edx = *(arg1 + 0x2a4)
uint32_t edi_3 = (*(arg1 + 0x2a8) - edx + 3) u>> 2

if (edx u> *(arg1 + 0x2a8))
    edi_3 = 0

if (edi_3 != 0)
    do
        esi += 1
        *edx = 0
        edx = &edx[1]
    while (esi != edi_3)

sub_68aa40(arg1 + 0x288)
sub_6845d0(arg1 + 0x268)
int32_t* ecx_2 = *(arg1 + 0x264)

if (ecx_2 != 0)
    (**ecx_2)(1)
    *(arg1 + 0x264) = 0

int32_t* ecx_3 = *(arg1 + 0x254)

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)
    *(arg1 + 0x254) = 0

*(arg1 + 0x25c) = *(arg1 + 0x258)
int32_t* ecx_4 = *(arg1 + 0x240)

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    *(arg1 + 0x240) = 0

*(arg1 + 0x248) = *(arg1 + 0x244)
int32_t* ecx_5 = *(arg1 + 0x1dc)

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    *(arg1 + 0x1dc) = 0

*(arg1 + 0x1e4) = *(arg1 + 0x1e0)
int32_t* ecx_6 = *(arg1 + 0x1c8)

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(ecx_6)
    *(arg1 + 0x1c8) = 0

*(arg1 + 0x1d0) = *(arg1 + 0x1cc)

if (sub_688050(arg1 + 0x10c) != 0 && sub_688050(arg1 + 0xf4) != 0)
    int32_t* i = *(arg1 + 0xc8)
    
    for (int32_t edi_4 = *(arg1 + 0xcc); i != edi_4; i = &i[1])
        if (sub_68a170(*i) == 0)
            return 0
    
    if (sub_688580(arg1 + 0xac) != 0 && sub_688670(arg1 + 0x94) != 0
            && sub_688750(arg1 + 0x7c) != 0)
        sub_6850e0(arg1 + 0x2c)
        void* result
        result.b = 1
        return result

return 0
