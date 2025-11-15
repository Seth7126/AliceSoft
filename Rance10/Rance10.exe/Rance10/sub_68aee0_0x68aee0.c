// 函数: sub_68aee0
// 地址: 0x68aee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = &arg1[4]
*arg1 = &graphengined3d11::CShaderImage::`vftable'
arg1[2] = arg1[1]
bool cond:0 = esi[5] u< 0x10
esi[4] = 0
char* eax_1

if (cond:0)
    eax_1 = esi
else
    eax_1 = *esi

*eax_1 = 0
int32_t result = esi[5]

if (result u>= 0x10)
    result = sub_403160(*esi, result + 1, 1)

esi[5] = 0xf
bool cond:1 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:1))
    esi = *esi

*esi = nullptr
void* ecx = arg1[1]

if (ecx != 0)
    result = sub_403160(ecx, arg1[3] - ecx, 1)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
