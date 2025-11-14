// 函数: sub_63db40
// 地址: 0x63db40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = *(arg1 + 0x1c)

if (ebp == 0)
    return 0xffffff7f

void* eax_1 = sub_638110(arg2, 0x20)
*arg1 = eax_1

if (eax_1 != 0)
    return 0xffffff7a

*(arg1 + 4) = sub_638110(arg2, 8)
*(arg1 + 8) = sub_638110(arg2, 0x20)
*(arg1 + 0xc) = sub_638110(arg2, 0x20)
*(arg1 + 0x10) = sub_638110(arg2, 0x20)
*(arg1 + 0x14) = sub_638110(arg2, 0x20)
*ebp = 1 << sub_638110(arg2, 4)
int32_t esi_1 = 1 << sub_638110(arg2, 4)
ebp[1] = esi_1

if (*(arg1 + 8) s>= 1 && *(arg1 + 4) s>= 1)
    int32_t eax_10 = *ebp
    
    if (eax_10 s>= 0x40 && esi_1 s>= eax_10 && esi_1 s<= 0x2000 && sub_638110(arg2, 1) == 1)
        return 0

sub_63d910(arg1)
return 0xffffff7b
