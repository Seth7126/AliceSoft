// 函数: sub_624570
// 地址: 0x624570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct sys43vm::CResumeManager::VTable** var_4 = arg1
*arg1 = &sys43vm::CResumeManager::`vftable'
int32_t* eax = arg1[7]
int32_t* var_10 = eax
sub_624d40(&arg1[7], &var_4, *eax)
sub_403160(arg1[7], 1, 0x34)
int32_t eax_1 = arg1[6]

if (eax_1 u>= 0x10)
    eax_1 = sub_403160(arg1[1], eax_1 + 1, 1)

arg1[6] = 0xf
bool cond:0 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:0)
    arg1[1].b = 0
    return eax_1

char* eax_3 = arg1[1]
*eax_3 = 0
return eax_3
