// 函数: sub_4188f0
// 地址: 0x4188f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x18) == 0)
    return 

int32_t* ecx = *(arg1 + 0x28)
int32_t var_8 = 0xffffffff
int32_t var_4 = 0xffffffff
int32_t eax_1

if (ecx != 0)
    eax_1 = (**ecx)()
else
    eax_1 = 0xffffffff

(***(arg1 + 0x1c))(&var_8, &var_4, eax_1)
sub_418b10(*(arg1 + 0x18) + 0x10)
int32_t eax = var_8

if (eax != 0xffffffff)
    *(arg1 + 0x4c) = eax
