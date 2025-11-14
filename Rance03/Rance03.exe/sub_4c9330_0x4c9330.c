// 函数: sub_4c9330
// 地址: 0x4c9330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x200) != 0)
    *(arg1 + 0x200) = 0

int32_t* ecx = *(arg2 + 0x10)

if (ecx == 0)
    sub_69a52d()
    noreturn

char eax_3 = (*(*ecx + 8))()

if (eax_3 == 0)
    return eax_3

void* ecx_1

if (arg1 == 0)
    ecx_1 = nullptr
else
    ecx_1 = arg1 + 0x2c

if (*(arg1 + 0x200) != ecx_1)
    *(arg1 + 0x200) = ecx_1
    
    if (ecx_1 != 0)
        (**ecx_1)()

int32_t* ecx_2 = *(arg1 + 0x200)

if (ecx_2 != 0)
    (**ecx_2)()

int32_t var_c = *(arg1 + 0x190)
sub_4aaa40(sub_4a3ac0(*(arg1 + 0x94)) + 0xb4)
int32_t var_c_1 = *(arg1 + 0x194)
sub_4aaa40(sub_4a3b70(*(arg1 + 0x98)) + 0xb4)
int32_t* eax_8
eax_8.b = 1
return eax_8
