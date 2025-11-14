// 函数: sub_53bfb0
// 地址: 0x53bfb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CHeightDetection::`vftable'
int32_t result = sub_53c070(arg1)
int32_t* ecx = arg1[5]

if (ecx != 0)
    struct sealengine::CHeightDetection::VTable** var_c_1 = arg1
    int32_t* var_10_1 = ecx
    sub_48c2c0(ecx, arg1[6])
    result = j__free(arg1[5])
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

void* ecx_1 = arg1[2]

if (ecx_1 != 0)
    struct sealengine::CHeightDetection::VTable** var_c_2 = arg1
    void* var_10_2 = ecx_1
    sub_53d9a0(ecx_1, arg1[3])
    result = j__free(arg1[2])
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

return result
