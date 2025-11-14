// 函数: sub_5ddab0
// 地址: 0x5ddab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi_1

if (arg2 s>= 0)
    esi_1 = *(arg1 + 4)

if (arg2 s< 0 || arg2 s>= *(esi_1 + 0x30))
    sub_64b530(0x6eaae8)
else
    switch (*(*(esi_1 + 0x2c) + (arg2 << 2)) - 0xa)
        case 0, 1, 0x11, 0x25
            return sub_5d35f0(esi_1, arg2)
        case 2
            return sub_5ddc70(arg1, arg2) __tailcall
        case 3
            return sub_5ddd90(arg1, arg2) __tailcall
        case 4, 5, 6, 7, 0x14, 0x28, 0x38
            return sub_5ddd00(arg1, arg2) __tailcall

return 0
