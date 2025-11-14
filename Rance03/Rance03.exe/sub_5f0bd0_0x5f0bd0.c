// 函数: sub_5f0bd0
// 地址: 0x5f0bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &chipmunk::CTextBoldBuf::`vftable'
arg1[0xf] = arg1[0xe]
arg1[0x11] = 0
arg1[4] = arg1[3]
__builtin_memset(&arg1[6], 0, 0x1c)
int32_t eax_2 = arg1[0xe]

if (eax_2 != 0)
    j__free(eax_2)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

return sub_5f0a00(&arg1[1]) __tailcall
