// 函数: sub_4b64d0
// 地址: 0x4b64d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
sub_468ec0(edi, *(arg1 + 4))

switch (*(arg1 + 4) - 1)
    case 0
        sub_468ec0(edi, *(arg1 + 8))
        int32_t eax_2
        eax_2.b = 1
        return eax_2
    case 1
        arg2 = *(arg1 + 0xc)
        sub_468ec0(edi, arg2)
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    case 2
        arg2.b = *(arg1 + 0x10) != 0
        sub_414b60(edi + 4, &arg2)
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    case 3
        sub_468f70(edi, arg1 + 0x14)

int32_t eax_1
eax_1.b = 1
return eax_1
