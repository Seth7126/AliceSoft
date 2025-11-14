// 函数: sub_5a9b40
// 地址: 0x5a9b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* edx_1 = data_75d508
    
    if (arg1 s< (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
        void* ecx = *(*(edx_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0)
            void* ecx_1 = *(ecx + 0x22c)
            
            if (ecx_1 != 0)
                sub_58d9d0(ecx_1)
            
            result.b = 1
            return result

result.b = 0
return result
