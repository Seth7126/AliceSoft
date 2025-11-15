// 函数: sub_636780
// 地址: 0x636780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg2

if (edx[5] u>= 8)
    edx = *edx

if (arg1[5] u>= 8)
    arg1 = *arg1

int32_t edi_1 = edx[4]
int32_t ebx_1 = arg1[4]
int32_t esi = edi_1

if (ebx_1 u< edi_1)
    esi = ebx_1

bool cond:3 = esi != 0
int32_t result

while (true)
    if (not(cond:3))
        result = 0
        break
    
    if (*arg1 != *edx)
        uint32_t eax_2 = zx.d(*arg1)
        result = (sbb.d(eax_2, eax_2, eax_2.w u< *edx) & 0xfffffffe) + 1
        break
    
    arg1 += 2
    edx += 2
    int32_t temp2_1 = esi
    esi -= 1
    cond:3 = temp2_1 != 1

if (result != 0)
    return result

bool c_1 = edi_1 u< ebx_1

if (edi_1 == ebx_1 || c_1)
    return neg.d(sbb.d(result, result, c_1))

return 0xffffffff
