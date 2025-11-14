// 函数: sub_4e7bb0
// 地址: 0x4e7bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* result = *(arg1 + 4)
int32_t arg_4
int32_t edi = arg_4

if (edi s>= result && *(arg1 + 8) s> result)
    int32_t ebp_1 = *(arg1 + 0x14)
    int32_t* esi_1 = *(arg1 + 0x10)
    void* i = (ebp_1 - esi_1) s>> 2
    
    while (i s> 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(i)
        int32_t i_1 = (eax_1 - edx_1) s>> 1
        result = &esi_1[i_1]
        
        if (esi_1[i_1] s>= edi)
            i = i_1
        else
            esi_1 = &result[1]
            result = 0xffffffff - i_1
            i += result
    
    if (esi_1 == ebp_1)
        return sub_4158d0(arg1 + 0x10, &arg_4)
    
    if (*esi_1 != edi)
        int32_t* var_18_2 = &arg_4
        return sub_47a0a0(arg1 + 0x10, &var_4, esi_1, i)

return result
