// 函数: sub_5a6790
// 地址: 0x5a6790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* edi_1 = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (edi_1 != 0)
            int32_t esi_2 = sub_527000(arg1, arg2)
            
            if (esi_2 != 0)
                void* ecx = *(esi_2 + 0x1d0)
                
                if (ecx != 0)
                label_5a67df:
                    result = *(edi_1 + 0x1c8)
                    
                    if (result != 0)
                        return sub_547790(ecx, result)
                else if (sub_53e620(esi_2).b != 0)
                    ecx = *(esi_2 + 0x1d0)
                    
                    if (ecx != 0)
                        goto label_5a67df

result.b = 0
return result
