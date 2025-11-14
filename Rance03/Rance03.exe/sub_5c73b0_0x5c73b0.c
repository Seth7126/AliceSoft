// 函数: sub_5c73b0
// 地址: 0x5c73b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* esi = arg1
esi[0x8d] -= 4
int32_t edi = *esi[0x8d]
int32_t eax_3 = (esi[0x5e] - esi[0x5d]) s>> 2

if (edi u< eax_3)
    eax_3 = esi[0x5d]
    arg1 = *(eax_3 + (edi << 2))
    
    if (arg1 != 0)
        int32_t* eax_4 = sub_5d4030(arg1)
        int32_t ebp_3 = (esi[0x8d] - esi[0x8a]) s>> 2
        int32_t eax_5 = esi[0x8b]
        
        if (ebp_3 + 1 u>= eax_5)
            sub_64ad90(&esi[0x89], eax_5 * 2)
            esi[0x8d] = esi[0x8a] + (ebp_3 << 2)
        
        *esi[0x8d] = eax_4
        esi[0x8d] += 4
        int32_t result
        int32_t* ecx_4
        int32_t edx_1
        result, ecx_4, edx_1 = sub_5d5e80(&esi[0x5b], edi)
        
        if (result.b != 0)
            return result
        
        return sub_5c24e0(result, edx_1, ecx_4, esi, 0x6e7a48)

int32_t var_18_3 = edi
int32_t var_1c_2 = 0x6e79c0
int32_t edx
return sub_5c2400(eax_3, edx, arg1, esi, "S_LENGTH2")
