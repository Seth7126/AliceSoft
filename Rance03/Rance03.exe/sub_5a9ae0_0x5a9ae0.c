// 函数: sub_5a9ae0
// 地址: 0x5a9ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* edx = data_75d508
    
    if (arg1 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* esi_1 = *(*(edx + 0x50) + (arg1 << 2))
        
        if (esi_1 != 0)
            if (*(esi_1 + 0x24c) != arg2)
                sub_587cf0(esi_1 + 0x14, arg2)
                void* ecx_1 = *(esi_1 + 0x224)
                
                if (ecx_1 != 0)
                    sub_58c380(ecx_1, arg2)
                
                *(esi_1 + 0x24c) = arg2
            
            result.b = 1
            return result

result.b = 0
return result
