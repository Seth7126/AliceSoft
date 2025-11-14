// 函数: sub_5475e0
// 地址: 0x5475e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CLightParamList::`vftable'
int32_t eax = arg1[4]

if (eax != 0)
    j__free(eax)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

int32_t* ecx = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
