// 函数: sub_605470
// 地址: 0x605470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg1[1]
*arg1 = &filesystem::CFindFile::`vftable'
HANDLE hFindFile = *(edi + 4)

if (hFindFile != 0xffffffff && FindClose(hFindFile) != 0)
    *(edi + 4) = 0xffffffff

int32_t* ecx = arg1[1]

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
