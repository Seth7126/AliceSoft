// 函数: sub_427220
// 地址: 0x427220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[0x22]

if (eax != 0)
    j__free(eax)
    arg1[0x22] = 0
    arg1[0x23] = 0
    arg1[0x24] = 0

sub_431cd0(arg1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
