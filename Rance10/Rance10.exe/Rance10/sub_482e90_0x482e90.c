// 函数: sub_482e90
// 地址: 0x482e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t eax = *(arg1 + 0x40)
int128_t var_40

if (eax != 0)
    int32_t var_34_1 = 0x2d0
    var_40:8.d = eax
    operator new()
    *(arg1 + 0x40) = 0

int32_t var_34_2 = 0x2d0
uint32_t (* eax_1)[0x4] = sub_6e810c()
void* (* var_20)(char* arg1, void* arg2, void* arg3, void* arg4) = sub_482f90
*(arg1 + 0x40) = eax_1
*(arg1 + 0x34) = *(arg1 + 0x10)
*(arg1 + 0x38) = *(arg1 + 0x14) - *(arg1 + 0x10)
*(arg1 + 0x3c) = *(arg1 + 0x10)
int32_t (* var_1c)(void* arg1, int32_t arg2, int32_t arg3) = sub_482ff0
int32_t (* var_18)() = sub_426be0
int32_t (* var_14)(void* arg1) = sub_483050
var_40 = var_20.o
void var_48

if (sub_6c32e0(&var_40, eax_1, var_48) != 0)
    int128_t* eax_6
    eax_6.b = 0
    return eax_6

void* edi = *(arg1 + 0x40)
int32_t eax_7 = sub_6c3350(edi, 0xffffffff)
*(arg1 + 0x48) = eax_7
void* edx_3

if (*(edi + 4) == 0 || *(edi + 0x58) s< 3)
    edx_3 = *(edi + 0x48)
else
    edx_3 = (*(edi + 0x60) << 5) + *(edi + 0x48)

int32_t eax_9 = *(edx_3 + 4) * eax_7
*(arg1 + 0x1c) = 1
*(arg1 + 0x4c) = eax_9 * 2
int32_t ecx_4 = *(edx_3 + 4)
*(arg1 + 0x20) = ecx_4
int32_t eax_11 = *(edx_3 + 8)
uint32_t ecx_6 = ecx_4 << 4 u>> 3
*(arg1 + 0x2c) = ecx_6
int32_t ecx_7 = ecx_6 * eax_11
*(arg1 + 0x24) = eax_11
eax_11.b = 1
*(arg1 + 0x30) = 0x10
*(arg1 + 0x44) = 1
*(arg1 + 0x28) = ecx_7
return eax_11
