// 函数: sub_545ba0
// 地址: 0x545ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (result != 0 && arg2 != 1)
    if (arg2 == 2)
        void* ecx_4 = *(result + 0x44)
        
        if (*(ecx_4 + 0x4c) != 0)
            int32_t* ecx_5 = *(ecx_4 + 0x74)
            
            if (ecx_5 != 0)
                jump(*(*ecx_5 + 8))
    else if (arg2 == 3)
        void* ecx_2 = *(result + 0x44)
        
        if (*(ecx_2 + 0x64) != arg2 - 3)
            int32_t* ecx_3 = *(ecx_2 + 0x78)
            
            if (ecx_3 != 0)
                jump(*(*ecx_3 + 8))

return result
