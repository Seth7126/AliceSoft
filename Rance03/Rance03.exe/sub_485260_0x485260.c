// 函数: sub_485260
// 地址: 0x485260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CConstructionProcessList::`vftable'
int32_t ebx = arg1[2]

for (int32_t* i = arg1[1]; i != ebx; i = &i[0x30])
    (**i)(0)

arg1[2] = arg1[1]
sub_4813f0(&arg1[1])
return arg1
