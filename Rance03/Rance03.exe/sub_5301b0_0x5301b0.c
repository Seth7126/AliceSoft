// 函数: sub_5301b0
// 地址: 0x5301b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CDetectPolygonList::`vftable'
int32_t ebp = arg1[2]

for (int32_t* i = arg1[1]; i != ebp; i = &i[0x21])
    (**i)(0)

arg1[2] = arg1[1]
sub_530760(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
