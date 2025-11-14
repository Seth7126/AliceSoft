// 函数: sub_585950
// 地址: 0x585950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CPRPData::`vftable'
int32_t ebx = arg1[2]

for (int32_t* i = arg1[1]; i != ebx; i = &i[0xa])
    (**i)(0)

arg1[2] = arg1[1]
return sub_435c20(&arg1[1]) __tailcall
