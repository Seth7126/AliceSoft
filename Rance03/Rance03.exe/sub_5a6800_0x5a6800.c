// 函数: sub_5a6800
// 地址: 0x5a6800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* esi_2 = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (esi_2 != 0)
            result = sub_527000(arg1, arg2)
            
            if (result != 0)
                result = *(result + 0x1d0)
                
                if (result != 0)
                    void* ecx = *(esi_2 + 0x1c8)
                    
                    if (ecx != 0)
                        return sub_547790(ecx, result)

result.b = 0
return result
