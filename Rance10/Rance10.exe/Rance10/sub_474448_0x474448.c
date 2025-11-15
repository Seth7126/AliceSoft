// 函数: sub_474448
// 地址: 0x474448
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = *(arg1 - 0x14)

if (i != *(arg1 + 0xc))
    void* ebx_1 = *(arg1 - 0x18)
    
    do
        int32_t* edi_1 = *(*(arg1 + 8) + 4)
        *edi_1[1] = *edi_1
        *(*edi_1 + 4) = edi_1[1]
        sub_408940(&edi_1[2])
        sub_403160(edi_1, 1, 0x40)
        *(ebx_1 + 4) -= 1
        i += 0x38
    while (i != *(arg1 + 0xc))

sub_70021b(nullptr, nullptr)
noreturn
