// 函数: sub_530270
// 地址: 0x530270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t result

if (arg3 s>= 0 && arg3 s< (*(arg2 + 0x50) - *(arg2 + 0x4c)) s>> 2)
    void* edi_1 = *(*(arg2 + 0x4c) + (arg3 << 2))
    
    if (edi_1 != 0)
        if (*(edi_1 + 0x69) == 0)
            result.b = 1
            return result
        
        int32_t ebp_2 = (*(edi_1 + 0x2c) - *(edi_1 + 0x28)) s/ 0xbc
        int32_t esi = 0
        
        if (ebp_2 s> 0)
            do
                if (sub_530310(arg1, arg2, edi_1, esi, arg4) == 0)
                    return 0
                
                esi += 1
            while (esi s< ebp_2)
        
        return 1

result.b = 0
return result
