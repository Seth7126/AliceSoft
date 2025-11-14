// 函数: sub_5ce9a0
// 地址: 0x5ce9a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
void* ecx = arg1 + 0x16c
int32_t result = *(arg1 + 0x234)
int32_t esi = *result
int32_t edx

if (esi s>= 0)
    result = (*(ecx + 0xc) - *(ecx + 8)) s>> 2
    
    if (esi s< result)
        result = *(*(ecx + 8) + (esi << 2))
        
        if (result != 0)
            if (*(result + 0x18) != 1)
                *(result + 0x18) -= 1
                return result
            
            result, ecx, edx = sub_5d5e80(ecx, esi)
            
            if (result.b != 0)
                return result

int32_t var_c_2 = esi
int32_t var_10_1 = 0x6e9f9c
return sub_5c2400(result, edx, ecx, arg1, "SP_DEC")
