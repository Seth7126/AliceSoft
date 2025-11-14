// 函数: sub_52c580
// 地址: 0x52c580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CBoneList::`vftable'
arg1[5] = arg1[4]
int32_t ebp = arg1[2]

for (int32_t* i = arg1[1]; i != ebp; i = &i[0x2b])
    (**i)(0)

arg1[2] = arg1[1]
int32_t eax_3 = arg1[4]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

return sub_52cd40(&arg1[1]) __tailcall
