// 函数: sub_5a2a30
// 地址: 0x5a2a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* esi_2 = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (esi_2 != 0 && esi_2 != 0xffffffec)
            if (arg2 s>= 0 && arg2 s< (*(esi_2 + 0x20) - *(esi_2 + 0x1c)) s>> 2)
                int32_t* edi_1 = arg2 << 2
                int32_t* ecx = *(edi_1 + *(esi_2 + 0x1c))
                
                if (ecx != 0)
                    sub_53a360(ecx)
                    *(edi_1 + *(esi_2 + 0x1c)) = 0
            
            result.b = 1
            return result

result.b = 0
return result
