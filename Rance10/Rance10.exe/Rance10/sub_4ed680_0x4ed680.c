// 函数: sub_4ed680
// 地址: 0x4ed680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const result_2 = arg2
void* const result_1 = arg1

while (true)
    (*(**(result_1 + 0x74) + 0x10))(result_2, arg3, arg4)
    void* const result = *(result_1 + 0x68)
    int32_t esi_2 = *(*(result + 0x70) + 0xbc)
    
    if (esi_2 s> 0)
        int32_t var_14_2 = esi_2
        void* eax_2 = sub_4f15e0(*(result_1 + 0x6c))
        int32_t edx
        
        if (eax_2 != 0)
            edx = *(eax_2 + 8)
        
        if (eax_2 == 0 || esi_2 s< edx || *(eax_2 + 4) + edx s<= esi_2)
            result = nullptr
        else
            result = *(*(eax_2 + 0xc) + ((esi_2 - edx) << 2))
    
    if (esi_2 s<= 0 || result == 0)
        return result
    
    result_2 = result_1
    result_1 = result
