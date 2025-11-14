// 函数: sub_411e20
// 地址: 0x411e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x48)
int32_t eax

if (ecx != 0)
    eax = (**ecx)()
else
    eax = 0xffffffff

(***(arg1 + 0x3c))(arg1 + 0x60, arg1 + 0x64, eax)

if (data_75d4b4 != 0)
    (*(**(arg1 + 0x48) + 8))()
    data_75d4b4 = 0

(*(*(arg1 + 8) + 4))(arg2, 1)
*(arg1 + 0x5c) = 2
return sub_404e00(arg1 + 0x70, 0)
