// 函数: sub_548e80
// 地址: 0x548e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CMesh::`vftable'{for `sealengine::CDrawInstance'}
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x1c].b = 0
sub_5393b0(&arg1[9])
arg1[1] = 0
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0
char* eax

if (cond:0)
    eax = &arg1[2]
else
    eax = arg1[2]

*eax = 0
arg1[0x1d] = &sealengine::CClipBox::`vftable'
int32_t result = sub_5392f0(&arg1[9])

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
return result
