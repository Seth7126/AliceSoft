// 函数: sub_6ac330
// 地址: 0x6ac330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg3
int32_t ebx
ebx.b = arg3[2].b
int32_t result = *arg3

if ((ebx.b & 4) != 0)
    ebx:1.b = *(arg3 + 9)
    
    if (ebx:1.b == 8)
        int32_t esi_1 = *(arg4 + 0x198)
        
        if (esi_1 != 0)
            int32_t ebx_1
            ebx_1.b = (ebx.b & 2) != 0
            void* edx_1 = arg2 - 1 + (ebx_1 << 1) + 2
            
            if (result == 0)
                return result
            
            int32_t i
            
            do
                uint32_t ecx_1
                ecx_1.b = *(zx.d(*edx_1) + esi_1)
                *edx_1 = ecx_1.b
                edx_1 += (ebx_1 << 1) + 2
                i = result
                result -= 1
            while (i != 1)
            return result
    else if (ebx:1.b == 0x10)
        int32_t ebp_1 = *(arg4 + 0x1a0)
        int32_t* esi_2 = *(arg4 + 0x188)
        var_4 = esi_2
        
        if (ebp_1 != 0)
            int32_t ebx_3
            ebx_3.b = (ebx.b & 2) != 0
            void* edi_2 = arg2 - 2 + (ebx_3 << 2) + 4
            
            if (result != 0)
                int32_t* ecx_4 = zx.d(esi_2.b)
                var_4 = ecx_4
                int32_t i_1
                
                do
                    uint32_t edx_3 = zx.d(
                        *(*(ebp_1 + (zx.d(*(edi_2 + 1)) u>> ecx_4.b << 2)) + (zx.d(*edi_2) << 1)))
                    *(edi_2 + 1) = edx_3.b
                    *edi_2 = (edx_3 u>> 8).b
                    edi_2 += (ebx_3 << 2) + 4
                    ecx_4 = var_4
                    i_1 = result
                    result -= 1
                while (i_1 != 1)
            
            return result

return sub_6a7530(arg4, "png_do_encode_alpha: unexpected call") __tailcall
