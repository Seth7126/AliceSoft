// 函数: sub_544390
// 地址: 0x544390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &thread::CCriticalObject<struct sealengine::S3D>::`vftable'
int32_t* ecx = arg1[5]
arg1[4] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
