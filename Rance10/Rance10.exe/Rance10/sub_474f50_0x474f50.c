// 函数: sub_474f50
// 地址: 0x474f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct IEXTreeReader::exfile::CDefineDataTree::VTable** var_4 = arg1
int32_t* ecx = arg1[7]
*arg1 = &exfile::CDefineDataTree::`vftable'{for `IEXTreeReader'}

if (ecx != 0)
    (**ecx)(1)

arg1[7] = 0
sub_475010(arg1)
arg1[0xd] = 0
int32_t* eax_2 = arg1[0xb]
int32_t* var_10 = eax_2
sub_46f4b0(&arg1[0xb], &var_4, *eax_2)
sub_403160(arg1[0xb], 1, 0x2c)
void* ecx_3 = arg1[8]

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[0xa] - ecx_3) s>> 2, 4)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t eax_7 = arg1[6]

if (eax_7 u>= 0x10)
    eax_7 = sub_403160(arg1[1], eax_7 + 1, 1)

arg1[6] = 0xf
bool cond:0 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:0)
    arg1[1].b = 0
    return eax_7

char* eax_8 = arg1[1]
*eax_8 = 0
return eax_8
