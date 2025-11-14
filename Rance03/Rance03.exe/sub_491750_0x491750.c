// 函数: sub_491750
// 地址: 0x491750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CFlatKeyDataScript::`vftable'{for `IInterface'}
arg1[2] = 0xffffffff
arg1[3].b = 0
bool cond:0 = arg1[9] u< 0x10
arg1[8] = 0
char* result

if (cond:0)
    result = &arg1[4]
else
    result = arg1[4]

*result = 0

if (arg1[9] u>= 0x10)
    result = j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
return result
