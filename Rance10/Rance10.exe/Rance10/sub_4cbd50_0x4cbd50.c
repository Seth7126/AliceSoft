// 函数: sub_4cbd50
// 地址: 0x4cbd50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
void* result = (*(*arg2 + 4))()

if (*(result + arg1 + 0x15) == 0)
    if (result != 0x18)
        goto label_4cbd7a
    
    if (*(arg1 + 0x14) == 0)
        *(arg1 + 0x14) = 1
    label_4cbd7a:
        int32_t* esi_1 = *(arg1 + 4)
        result_1 = nullptr
        uint32_t ebp_4 = (*(arg1 + 8) - esi_1 + 3) u>> 2
        
        if (esi_1 u> *(arg1 + 8))
            ebp_4 = 0
        
        if (ebp_4 != 0)
            do
                (***esi_1)(sub_4cbd40(arg1, arg3), arg2)
                esi_1 = &esi_1[1]
                result = result_1 + 1
                result_1 = result
            while (result != ebp_4)

return result
