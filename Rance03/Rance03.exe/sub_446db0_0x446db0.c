// 函数: sub_446db0
// 地址: 0x446db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* const edi = arg4
uint32_t eax = sub_443580(edi)
void* const eax_2
int32_t ecx_2

if (eax s>= 0)
    eax_2 = 0xffffffff
    ecx_2 = 1
else
    ecx_2 = sub_446ed0(&arg4, eax)
    eax_2 = arg4

*(edi + 8) += ecx_2
int32_t esi = *(edi + 8)
arg4 = eax_2

if (eax_2 != 0xfffffffe)
    if (eax_2 == 0xffffffff)
        *arg3 = 0
        int32_t eax_9 = sub_443540(edi, 1)
        *(edi + 8) = esi + 1
        int32_t eax_10
        eax_10.b = 1
        *arg2 = 1 - eax_9 * 2
        return eax_10
    
    *arg3 = zx.d((eax_2 s>> 8).b)
    int32_t eax_5 = sub_443540(edi, 1)
    *(edi + 8) = esi + 1
    uint32_t eax_8
    eax_8.b = 1
    *arg2 = (1 - eax_5 * 2) * zx.d(arg4.b)
    return eax_8

*arg3 = sub_443540(edi, 6)
*(edi + 8) = esi + 6
int32_t eax_12 = sub_443540(edi, 8)
*arg2 = eax_12
*(edi + 8) = esi + 0xe

if (eax_12 == 0)
    *arg2 = sub_443540(edi, 8)
    *(edi + 8) = esi + 0x16
    int32_t eax_13
    eax_13.b = 1
    return eax_13

if (eax_12 == 0x80)
    int32_t eax_15 = sub_443540(edi, 8) - 0x100
    *(edi + 8) = esi + 0x16
    *arg2 = eax_15
    eax_15.b = 1
    return eax_15

if (eax_12 s> 0x80)
    *arg2 = eax_12 - 0x100

eax_12.b = 1
return eax_12
