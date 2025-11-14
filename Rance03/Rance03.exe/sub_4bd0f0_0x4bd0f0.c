// 函数: sub_4bd0f0
// 地址: 0x4bd0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CMotionDataList<float>::`vftable'
int32_t* ecx = arg1[4]

if (ecx != 0)
    int32_t var_8_1 = arg2.d
    int32_t* var_c_1 = ecx
    sub_4bf310(ecx, arg1[5])
    j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

sub_4bd310(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
