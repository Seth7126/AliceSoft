// 函数: sub_588190
// 地址: 0x588190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xc) == 0 || *(arg1 + 0x10) != 0)
    return 

void* esi_1 = *arg2
EnterCriticalSection(*(esi_1 + 0x70) + 4)
int32_t var_4_1 = *(esi_1 + 0x68)
CRITICAL_SECTION* lpCriticalSection = *(esi_1 + 0x70) + 4
int64_t var_c = *(esi_1 + 0x60)
LeaveCriticalSection(lpCriticalSection)
sub_5b74e0(*(arg1 + 0xc) + 0x70, &var_c)
int32_t* eax_6 = *(arg1 + 0xc) + 0x70
int32_t* esi_3 = *arg2 + 0x80

if (sub_6cad80(&eax_6[7], esi_3) == 0)
    *(eax_6 + 0x1c) = *esi_3
    *(eax_6 + 0x2c) = *(esi_3 + 0x10)
    *(eax_6 + 0x3c) = *(esi_3 + 0x20)
    eax_6[0x5a].b = 1
    *(eax_6 + 0x4c) = *(esi_3 + 0x30)

sub_5b7450(*(arg1 + 0xc) + 0x70, *arg2 + 0xc0)
void* eax_11
eax_11.b = *(*arg2 + 0x10d)
*(*(arg1 + 0xc) + 0x10) = eax_11.b
void* eax_12
eax_12.b = *(*arg2 + 0x10e)
*(*(arg1 + 0xc) + 0x11) = eax_12.b
void* ecx_6
ecx_6.b = *(*(*arg2 + 0x110) + 8) != 0
*(*(arg1 + 0xc) + 0x12) = ecx_6.b
sub_5c4370(*(arg1 + 0xc), *arg2 + 0xe4)
sub_5c3f70(*(arg1 + 0xc), *(*arg2 + 0x23c), arg3, arg4)
