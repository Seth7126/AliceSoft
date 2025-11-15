// 函数: sub_5bcc30
// 地址: 0x5bcc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x2222222)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t esi_3 = arg2 * 0x78

if (esi_3 u< 0x1000)
    int32_t eax_5 = sub_6e810c(esi_3)
    *arg1 = eax_5
    arg1[1] = eax_5
    arg1[2] = *arg1 + esi_3
    int32_t eax_7
    eax_7.b = 1
    return eax_7

if (esi_3 + 0x23 u<= esi_3)
    sub_6d08ed()
    noreturn

int32_t eax_2 = sub_6e810c(esi_3 + 0x23)
void* ecx_1 = (eax_2 + 0x23) & 0xffffffe0
*(ecx_1 - 4) = eax_2
*arg1 = ecx_1
arg1[1] = ecx_1
arg1[2] = *arg1 + esi_3
int32_t eax_4
eax_4.b = 1
return eax_4
