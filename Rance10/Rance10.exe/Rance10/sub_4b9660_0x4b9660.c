// 函数: sub_4b9660
// 地址: 0x4b9660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* eax = arg1[6]
int32_t* var_10 = eax
sub_44dda0(&arg1[6], &var_4, *eax)
sub_403160(arg1[6], 1, 0x40)
int32_t eax_1 = arg1[5]

if (eax_1 u>= 0x10)
    eax_1 = sub_403160(*arg1, eax_1 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_1

char* eax_3 = *arg1
*eax_3 = 0
return eax_3
