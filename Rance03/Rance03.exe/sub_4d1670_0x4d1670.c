// 函数: sub_4d1670
// 地址: 0x4d1670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x38)

if (arg2 == 0)
    if (*(esi + 0x4c) != 0)
        void* var_8_2 = arg1
        sub_485ca0(esi + 0x64)
        *(esi + 0x4c) = 0
else if (*(esi + 0x4c) == 0)
    void* var_8_1 = arg1
    sub_485c60(esi + 0x64)
    *(esi + 0x4c) = 1
