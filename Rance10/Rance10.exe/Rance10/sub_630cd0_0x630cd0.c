// 函数: sub_630cd0
// 地址: 0x630cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t eax
char* edx

if (arg1[2].b == 0)
    edx = nullptr
    eax = 0
else
    edx = *arg1
    eax = arg1[1]

*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0

if (edx != eax)
    sub_6317b0(arg2, edx, (eax - edx) s>> 1)

return arg2
