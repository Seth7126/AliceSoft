// 函数: sub_446c70
// 地址: 0x446c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t* var_4_1 = arg3
void* edi = arg4
uint32_t eax = sub_443580(edi)
int32_t eax_1
void* const ebx

if (eax s>= 0)
    ebx = 0xffffffff
    eax_1 = 1
else
    eax_1 = sub_446ed0(&arg4, eax)
    ebx = arg4

*(edi + 8) += eax_1

if (ebx != 0xfffffffe)
    if (ebx == 0xffffffff)
        int32_t eax_8 = sub_443540(edi, 1)
        int32_t ebx_2 = *(edi + 8) + 1
        *(edi + 8) = ebx_2
        
        if (eax_8 == 0)
            *arg3 = 0xffffffff
            eax_8.b = 1
            return eax_8
        
        *arg3 = 0
        int32_t eax_9 = sub_443540(edi, 1)
        *(edi + 8) = ebx_2 + 1
        int32_t eax_10
        eax_10.b = 1
        *arg2 = 1 - eax_9 * 2
        return eax_10
    
    *arg3 = zx.d((ebx s>> 8).b)
    int32_t eax_5 = sub_443540(edi, 1)
    *(edi + 8) += 1
    uint32_t eax_7
    eax_7.b = 1
    *arg2 = (1 - eax_5 * 2) * zx.d(ebx.b)
    return eax_7

uint32_t eax_11 = sub_443540(edi, 6)
int32_t esi_2 = *(edi + 8) + 6
*arg3 = eax_11
*(edi + 8) = esi_2
int32_t eax_12 = sub_443540(edi, 8)
*arg2 = eax_12
*(edi + 8) = esi_2 + 8

if (eax_12 == 0)
    *arg2 = sub_443540(edi, 8)
    *(edi + 8) = esi_2 + 0x10
    int32_t eax_13
    eax_13.b = 1
    return eax_13

if (eax_12 == 0x80)
    int32_t eax_15 = sub_443540(edi, 8) - 0x100
    *(edi + 8) = esi_2 + 0x10
    *arg2 = eax_15
    eax_15.b = 1
    return eax_15

if (eax_12 s> 0x80)
    *arg2 = eax_12 - 0x100

eax_12.b = 1
return eax_12
