// 函数: sub_637680
// 地址: 0x637680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t eax = *(arg1 + 0x3c)

if (eax != 0)
    int32_t var_34_1 = eax
    j__free()
    *(arg1 + 0x3c) = 0

int32_t var_34_2 = 0x2d0
char* eax_1 = sub_69adc6()
int32_t ecx = *(arg1 + 0xc)
*(arg1 + 0x30) = ecx
*(arg1 + 0x3c) = eax_1
void* (* var_20)(int32_t* arg1, void* arg2, void* arg3, void* arg4) = sub_637a30
*(arg1 + 0x34) = *(arg1 + 0x10) - ecx
int32_t (* var_1c)(void* arg1, int32_t arg2, int32_t arg3) = sub_637a90
int32_t (* var_18)() = sub_44e3e0
int32_t (* var_14)(void* arg1) = sub_637af0
*(arg1 + 0x38) = ecx
int128_t var_40 = var_20.o
void var_48

if (sub_6488d0(&var_40, eax_1, var_48) != 0)
    int32_t eax_5
    eax_5.b = 0
    return eax_5

void* edi = *(arg1 + 0x3c)
int32_t eax_6
int32_t edx_1
eax_6, edx_1 = sub_648940(edi, 0xffffffff)
int32_t var_1c_1 = edx_1
*(arg1 + 0x44) = eax_6
void* edx_4

if (*(edi + 4) == 0 || *(edi + 0x58) s< 3)
    edx_4 = *(edi + 0x48)
else
    edx_4 = (*(edi + 0x60) << 5) + *(edi + 0x48)

int32_t eax_8 = *(edx_4 + 4) * eax_6
*(arg1 + 0x18) = 1
*(arg1 + 0x48) = eax_8 * 2
int32_t ecx_4 = *(edx_4 + 4)
*(arg1 + 0x1c) = ecx_4
int32_t eax_10 = *(edx_4 + 8)
uint32_t ecx_6 = ecx_4 << 4 u>> 3
*(arg1 + 0x28) = ecx_6
int32_t ecx_7 = ecx_6 * eax_10
*(arg1 + 0x20) = eax_10
eax_10.b = 1
*(arg1 + 0x2c) = 0x10
*(arg1 + 0x40) = 1
*(arg1 + 0x24) = ecx_7
return eax_10
