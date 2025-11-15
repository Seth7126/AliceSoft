// 函数: sub_5c6f80
// 地址: 0x5c6f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
char* ecx = *(arg2 + 4)

if (&ecx[0x10] u> *(arg2 + 8))
    void* eax
    eax.b = 0
    return eax

uint32_t eax_3 = zx.d(*ecx)
uint32_t ebx_5 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8
*(arg2 + 4) = &ecx[4]
uint32_t eax_6 = zx.d(ecx[4])
uint32_t edi_5 = ((zx.d(ecx[7]) << 8 | zx.d(ecx[6])) << 8 | zx.d(ecx[5])) << 8
*(arg2 + 4) = &ecx[8]
uint32_t esi_4 = (zx.d(ecx[0xb]) << 8 | zx.d(ecx[0xa])) << 8 | zx.d(ecx[9])
uint32_t eax_9 = zx.d(ecx[8])
*(arg2 + 4) = &ecx[0xc]
uint32_t edx_6 =
    ((zx.d(ecx[0xf]) << 8 | zx.d(ecx[0xe])) << 8 | zx.d(ecx[0xd])) << 8 | zx.d(ecx[0xc])
*(arg2 + 4) = &ecx[0x10]
*(arg1 + 0xc0) = edi_5 | eax_6
*(arg1 + 0xbc) = ebx_5 | eax_3
*(arg1 + 0xc8) = esi_4 << 8 | eax_9
*(arg1 + 0xcc) = edx_6
void* eax_14
eax_14.b = 1
return eax_14
