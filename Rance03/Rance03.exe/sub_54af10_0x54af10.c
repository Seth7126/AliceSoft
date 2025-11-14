// 函数: sub_54af10
// 地址: 0x54af10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CMOTData::`vftable'
void* ecx = arg1[4]

if (ecx != 0)
    int32_t var_8_1 = arg2.d
    void* var_c_1 = ecx
    sub_54ba00(ecx, arg1[5])
    j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
