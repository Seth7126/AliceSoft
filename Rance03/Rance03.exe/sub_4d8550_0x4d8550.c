// 函数: sub_4d8550
// 地址: 0x4d8550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CMotionDataList<class std::string>::`vftable'
int32_t* ecx = arg1[4]

if (ecx != 0)
    struct partsengine::CMotionDataList<class std::string>::VTable** var_c_1 = arg1
    int32_t* var_10_1 = ecx
    sub_4d9920(ecx, arg1[5])
    j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

void* ecx_1 = arg1[1]

if (ecx_1 == 0)
    return 

struct partsengine::CMotionDataList<class std::string>::VTable** var_c_2 = arg1
void* var_10_2 = ecx_1
sub_4d98b0(ecx_1, arg1[2])
j__free(arg1[1])
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
