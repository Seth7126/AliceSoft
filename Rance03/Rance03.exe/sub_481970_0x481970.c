// 函数: sub_481970
// 地址: 0x481970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CConstructionProcessList::`vftable'
int32_t ebx = arg1[2]

for (int32_t* i = arg1[1]; i != ebx; i = &i[0x30])
    (**i)(0)

arg1[2] = arg1[1]
return sub_4813f0(&arg1[1]) __tailcall
