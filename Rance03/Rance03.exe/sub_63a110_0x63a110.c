// 函数: sub_63a110
// 地址: 0x63a110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = *(arg1 + 0x1c)
void** result = _malloc(0x60)
*result = sub_638110(arg2, 8)
result[1] = sub_638110(arg2, 0x10)
result[2] = sub_638110(arg2, 0x10)
result[3] = sub_638110(arg2, 6)
result[4] = sub_638110(arg2, 8)
void* eax_6 = sub_638110(arg2, 4) + 1
bool cond:0 = *result s< 1
result[5] = eax_6

if (not(cond:0) && result[1] s>= 1 && result[2] s>= 1 && eax_6 s>= 1)
    int32_t esi_1 = 0
    
    if (eax_6 s<= 0)
        return result
    
    void* edi_1 = &result[6]
    
    while (true)
        void* eax_7 = sub_638110(arg2, 8)
        *edi_1 = eax_7
        
        if (eax_7 s< 0)
            break
        
        if (eax_7 s>= *(ebp + 0x18))
            break
        
        int32_t* eax_8 = *(ebp + (eax_7 << 2) + 0x720)
        
        if (eax_8[3] == 0)
            break
        
        if (*eax_8 s< 1)
            break
        
        esi_1 += 1
        edi_1 += 4
        
        if (esi_1 s>= result[5])
            return result

_memset(result, 0, 0x60)
_free(result)
return 0
