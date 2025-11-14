// 函数: sub_610080
// 地址: 0x610080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &graphengined3d11::CShaderImage::`vftable'
arg1[2] = arg1[1]
bool cond:0 = arg1[9] u< 0x10
arg1[8] = 0
char* eax_1

if (cond:0)
    eax_1 = &arg1[4]
else
    eax_1 = arg1[4]

*eax_1 = 0

if (arg1[9] u>= 0x10)
    j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
