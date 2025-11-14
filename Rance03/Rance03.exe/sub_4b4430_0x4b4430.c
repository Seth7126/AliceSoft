// 函数: sub_4b4430
// 地址: 0x4b4430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x174) != 0)
    *(arg1 + 0x174) = 0

int32_t* ecx = *(arg2 + 0x10)

if (ecx == 0)
    sub_69a52d()
    noreturn

char eax_3 = (*(*ecx + 8))()

if (eax_3 == 0)
    return eax_3

*(arg1 + 0x38) = *(arg1 + 0x16c)

if (*(arg1 + 0x174) != arg1 + 0x2c)
    *(arg1 + 0x174) = arg1 + 0x2c
    
    if (arg1 != 0xffffffd4)
        (**(arg1 + 0x2c))()

int32_t* ecx_2 = *(arg1 + 0x174)

if (ecx_2 != 0)
    (**ecx_2)()

int32_t var_c = *(arg1 + 0x128)
sub_4aaa40(sub_4a3ac0(*(arg1 + 0x9c)) + 0xb4)
int32_t* eax_8
eax_8.b = 1
return eax_8
