// 函数: sub_4bd010
// 地址: 0x4bd010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CMotionDataList<float>::`vftable'
int32_t* ecx = arg1[4]

if (ecx != 0)
    struct partsengine::CMotionDataList<float>::VTable** var_c_1 = arg1
    int32_t* var_10_1 = ecx
    sub_4bf310(ecx, arg1[5])
    j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

return sub_4bd310(&arg1[1]) __tailcall
