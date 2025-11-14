// 函数: sub_63af50
// 地址: 0x63af50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg3
int32_t esi_1 = arg6 - arg5
void* edi_1 = arg4 - arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_1)
int32_t temp0 = divs.dp.d(sx.q(esi_1), edi_1)
int32_t ecx = temp0 - 1

if (esi_1 s>= 0)
    ecx = temp0 + 1

void* ecx_1 = nullptr
int32_t eax_6
int32_t edx_3
edx_3:eax_6 = sx.q(temp0 * edi_1)
void* result = arg2

if (ebx s> arg4)
    ebx = arg4

if (result s< ebx)
    *(arg7 + (result << 2)) = *((arg5 << 2) + &data_6f1f80) f* *(arg7 + (result << 2))

void* edx_5 = result + 1

if (edx_5 s< ebx)
    result = (arg5 << 2) + &data_6f1f80
    
    do
        ecx_1 += (eax_1 ^ edx) - edx - ((eax_6 ^ edx_3) - edx_3)
        
        if (ecx_1 s< edi_1)
            result += temp0 << 2
        else
            ecx_1 -= edi_1
            result += ecx << 2
        
        *(arg7 + (edx_5 << 2)) = *(arg7 + (edx_5 << 2)) f* *result
        edx_5 += 1
    while (edx_5 s< ebx)

return result
