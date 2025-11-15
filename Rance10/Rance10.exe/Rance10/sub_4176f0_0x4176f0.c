// 函数: sub_4176f0
// 地址: 0x4176f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg3
void* esi

if (*arg4 != 0)
    char* esi_1 = arg4
    
    do
        arg1 = *esi_1
        esi_1 = &esi_1[1]
    while (arg1 != 0)
    
    esi = esi_1 - &esi_1[1]
else
    esi = nullptr

int32_t* eax = sub_407430(arg2, arg4, esi)
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_4056a0(arg3, eax)
return arg3
