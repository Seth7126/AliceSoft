// 函数: sub_60fdd0
// 地址: 0x60fdd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct memory::CFastMemory::VTable** var_4 = arg1
int32_t** eax = arg1[0x3d]
sub_4346e0(&arg1[0x3d], &var_4, *eax, eax)
sub_403160(arg1[0x3d], 1, 0x18)
void* ecx_1 = arg1[0x38]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0x3a] - ecx_1) s>> 2, 4)
    arg1[0x38] = 0
    arg1[0x39] = 0
    arg1[0x3a] = 0

sub_44b780(&arg1[0x36])
sub_403160(arg1[0x36], 1, 0x24)
void* ecx_3 = arg1[0x30]

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[0x32] - ecx_3) s>> 2, 4)
    arg1[0x30] = 0
    arg1[0x31] = 0
    arg1[0x32] = 0

sub_44b780(&arg1[0x2e])
sub_403160(arg1[0x2e], 1, 0x24)
void* ecx_5 = arg1[0x28]

if (ecx_5 != 0)
    sub_403160(ecx_5, (arg1[0x2a] - ecx_5) s>> 2, 4)
    arg1[0x28] = 0
    arg1[0x29] = 0
    arg1[0x2a] = 0

sub_44b780(&arg1[0x26])
sub_403160(arg1[0x26], 1, 0x24)
sub_417070(&arg1[0x22])
sub_60c510(&arg1[0x1f])
sub_601430(&arg1[0x1c])
sub_60c600(&arg1[0x19])
sub_417070(&arg1[0x16])
sub_60c780(&arg1[0x13])
sub_60c880(&arg1[0x10])
sub_60c880(&arg1[0xd])
sub_609c80(&arg1[7])
int32_t* ecx_16 = arg1[4]

if (ecx_16 != 0)
    struct memory::CFastMemory::VTable** var_10_1 = var_4
    int32_t* var_14_4 = ecx_16
    sub_60d8c0(ecx_16, arg1[5])
    void* esi_1 = arg1[4]
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = muls.dp.d(0x2aaaaaab, arg1[6] - esi_1)
    int32_t edx_3 = edx_2 s>> 1
    sub_403160(esi_1, (edx_3 u>> 0x1f) + edx_3, 0xc)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

BOOL lpMem = arg1[1]
*arg1 = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_7fcbf4, HEAP_NONE, lpMem)
