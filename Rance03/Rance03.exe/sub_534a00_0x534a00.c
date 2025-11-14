// 函数: sub_534a00
// 地址: 0x534a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2
int32_t* esi = arg1
int32_t* result_1 = result
int32_t* var_8 = esi

if (esi != result && &esi[1] != result)
    int32_t* edi_2 = &esi[1]
    
    do
        int32_t ebx_1 = *edi_2
        int32_t* ebp_1 = edi_2
        int16_t top = top + 2
        
        if (sub_535480(ebx_1, *esi) == 0)
            int32_t* esi_1 = &edi_2[-1]
            result = sub_535480(ebx_1, edi_2[-1])
            top += 2
            
            while (result.b != 0)
                *ebp_1 = *esi_1
                ebp_1 = esi_1
                int32_t var_1c_4 = esi_1[-1]
                esi_1 -= 4
                result = sub_535480(ebx_1, var_1c_4)
                top += 2
            
            esi = var_8
            *ebp_1 = ebx_1
        else
            int32_t ecx = (edi_2 - esi) s>> 2 << 2
            result = _memcpy(edi_2 - ecx + 4, esi, ecx)
            *esi = ebx_1
        
        edi_2 = &edi_2[1]
    while (edi_2 != result_1)

return result
