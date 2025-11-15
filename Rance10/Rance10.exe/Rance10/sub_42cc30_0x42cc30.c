// 函数: sub_42cc30
// 地址: 0x42cc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &advengine::CTokenList::`vftable'
void* ecx = arg1[0xe]

if (ecx != 0)
    sub_403160(ecx, (arg1[0x10] - ecx) s>> 2, 4)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

arg1[1] = &advengine::CToken::`vftable'
int32_t eax_4 = arg1[8]

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(arg1[3], eax_4 + 1, 1)

arg1[8] = 0xf
bool cond:0 = arg1[8] u< 0x10
arg1[7] = 0

if (cond:0)
    arg1[3].b = 0
    return eax_4

char* eax_6 = arg1[3]
*eax_6 = 0
return eax_6
