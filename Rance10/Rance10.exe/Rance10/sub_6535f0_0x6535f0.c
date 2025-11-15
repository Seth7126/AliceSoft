// 函数: sub_6535f0
// 地址: 0x6535f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg2
int32_t edx = arg3
int32_t result_1 = result
int32_t ecx = arg4
int32_t ebx_1 = arg5 - ecx
int32_t var_4 = edx

if (ebx_1 s> 0)
    int32_t ebp_1 = 0
    
    if (result s> 0)
        do
            void* edi_1 = *(edx + (ebp_1 << 2))
            ebp_1 += 1
            void* edi_2 = edi_1 + ecx
            edx = var_4
            result = zx.d(*(edi_2 - 1)) * 0x1010101
            int32_t ecx_3
            int32_t edi_3
            edi_3, ecx_3 = __memfill_u32(edi_2, result, ebx_1 u>> 2)
            int32_t ecx_6
            int32_t edi_4
            edi_4, ecx_6 = __memfill_u8(edi_3, result.b, ebx_1 & 3)
            ecx = arg4
        while (ebp_1 s< result_1)

return result
