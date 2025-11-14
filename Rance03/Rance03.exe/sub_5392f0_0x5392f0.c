// 函数: sub_5392f0
// 地址: 0x5392f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CFacePack::VTable** var_4 = arg1
*arg1 = &sealengine::CFacePack::`vftable'
sub_5393b0(arg1)
arg1[6] = &sealengine::CMatrixIndexList::`vftable'{for `IMatrixIndexList'}
int32_t eax = arg1[7]

if (eax != 0)
    j__free(eax)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t** eax_1 = arg1[4]
sub_4200d0(&arg1[4], &var_4, *eax_1, eax_1)
j__free(arg1[4])
return sub_539b90(&arg1[1]) __tailcall
