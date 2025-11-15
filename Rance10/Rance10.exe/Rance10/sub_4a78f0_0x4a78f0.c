// 函数: sub_4a78f0
// 地址: 0x4a78f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_2 = ecx
int32_t eax = data_7fcb94

if (eax != 0)
    int32_t __saved_esi_1 = 0x830
    operator new(eax)
    data_7fcb94 = 0

int32_t* ecx_1 = data_7fcb90

if (ecx_1 != 0)
    (**ecx_1)(1)
    data_7fcb90 = 0

int32_t* eax_2 = sub_6e810c(0x830)
int32_t* var_4 = eax_2
*eax_2 = 0xffffffff
_memset(&eax_2[1], 0, 0x824)
eax_2[0x20a] = 0
eax_2[0x20b] = 0
data_7fcb94 = eax_2
struct math::CMTRand::VTable** eax_3 = sub_6e810c(0x9c8)
struct math::CMTRand::VTable** var_4_1 = eax_3
*eax_3 = &math::CMTRand::`vftable'
_memset(&eax_3[1], 0, 0x9c0)
eax_3[0x271] = 0x271
data_7fcb90 = eax_3
uint32_t (* result)[0x4]
result.b = 1
return result
