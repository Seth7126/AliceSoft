// 函数: sub_415a60
// 地址: 0x415a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CSourceInfo::`vftable'
int32_t ebx = arg1[0x13]

for (int32_t* i = arg1[0x12]; i != ebx; i = &i[3])
    (**i)(0)

arg1[0x13] = arg1[0x12]
sub_415df0(&arg1[0x12])
return sub_41b4f0(&arg1[1]) __tailcall
