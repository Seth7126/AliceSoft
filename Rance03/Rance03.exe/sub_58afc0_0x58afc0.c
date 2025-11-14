// 函数: sub_58afc0
// 地址: 0x58afc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 1
void* eax = *(arg1 + 4)
*(arg1 + 0x14) = *(eax + 0x28)
*(arg1 + 0x1c) = *(eax + 0x30)
*(arg1 + 0x20) = *(arg1 + 0x268)
*(arg1 + 0x30) = *(arg1 + 0x278)
*(arg1 + 0x40) = *(arg1 + 0x288)
*(arg1 + 0x50) = *(arg1 + 0x298)
void* eax_2 = *(arg1 + 4)
int32_t xmm0_5 = *(eax_2 + 0x140)
*(arg1 + 0x60) = *(eax_2 + 0x13c)
*(arg1 + 0x64) = xmm0_5
*(arg1 + 0x68) = *(arg1 + 0x2a8)
*(arg1 + 0x78) = *(arg1 + 0x2b8)
*(arg1 + 0x88) = *(arg1 + 0x2c8)
*(arg1 + 0x98) = *(arg1 + 0x2d8)
*(arg1 + 0xc0) = *(arg1 + 0x3b8)
*(arg1 + 0xc4) = *(arg1 + 0x3bc)
*(arg1 + 0xc8) = *(arg1 + 0x3c0)
*(arg1 + 0xa8) = *(*(arg1 + 4) + 0x1b0)
void* eax_9 = *(arg1 + 4)
int32_t ecx = *(eax_9 + 0x164)
*(arg1 + 0xfc) = *(eax_9 + 0x160)
*(arg1 + 0x100) = ecx
void* esi = *(arg1 + 4)
int32_t* var_4
sub_42f3d0(esi + 0x16c, &var_4, &var_8)
int32_t* eax_11 = var_4
int32_t eax_12

if (eax_11 != *(esi + 0x16c))
    eax_12 = eax_11[5]
else
    eax_12 = 0

*(arg1 + 0xcc) = eax_12
*(arg1 + 0xd0) = *(esi + 0x18c)
*(arg1 + 0xd4) = *(esi + 0x188)
*(arg1 + 0xd8) = *(esi + 0x190)
*(arg1 + 0xdc) = *(esi + 0xd4)
*(arg1 + 0xe4) = *(esi + 0xd8)
*(arg1 + 0xe8) = *(esi + 0xdc)
*(arg1 + 0xec) = *(esi + 0xe0)
int32_t eax_20

if (*(esi + 0x184) == 0)
    eax_20 = 0
else
    eax_20 = *(esi + 0xb8)

int32_t* ecx_2 = *(arg1 + 0x104)
*(arg1 + 0xbc) = eax_20
void* esi_1 = *(esi + 0x1b4)

if (ecx_2 != 0)
    sub_53a360(ecx_2)

*(arg1 + 0x104) = esi_1

if (esi_1 != 0)
    EnterCriticalSection(*(esi_1 + 0xc) + 4)
    *(esi_1 + 4) += 1
    LeaveCriticalSection(*(esi_1 + 0xc) + 4)

eax_20.b = *(arg1 + 0x150)
*(arg1 + 0x108) = eax_20.b
*(arg1 + 0x10c) = *(*(arg1 + 4) + 0xb4)
void* ecx_3 = *(arg1 + 4)
int32_t result

if (((*(ecx_3 + 0x1a4) - *(ecx_3 + 0x1a0)) & 0xfffffffc) s> 0x14)
    result = *(*(ecx_3 + 0x1a0) + 0x14)
    
    if (result u> 4)
        return result
else
    result = 0

switch (jump_table_58b224[result])
    case 0x58b1e2
        *(arg1 + 0x110) = 1
        return result
    case 0x58b1f2
        *(arg1 + 0x110) = 2
        return result
    case 0x58b202
        *(arg1 + 0x110) = 3
        return result
    case 0x58b212
        *(arg1 + 0x110) = 0
        return result
