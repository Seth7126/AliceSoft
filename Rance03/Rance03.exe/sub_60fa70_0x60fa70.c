// 函数: sub_60fa70
// 地址: 0x60fa70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &graphengined3d11::CSamplerStateManager::`vftable'
sub_60fbb0(arg1)
int32_t eax = arg1[7]

if (eax != 0)
    j__free(eax)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

sub_60a4b0(&arg1[4])
sub_60a4b0(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
