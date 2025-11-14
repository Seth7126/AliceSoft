// 函数: sub_4758f0
// 地址: 0x4758f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4e4
int32_t result

if (*(esi + 5) == 0)
    if (*(esi + 4) != 0)
        result.b = 1
        return result
    
    if (*(esi + 6) == 0)
        bool cond:0_1 = data_75d534 == 0
        *(esi + 6) = 1
        
        if (cond:0_1)
            sub_4759b0(esi)
        else
            int32_t ecx
            int32_t var_18_1 = ecx
            int32_t* eax = sub_6203f0()
            
            if (eax == 0)
                sub_4759b0(esi)
            else
                result = (**eax)(0x6dd844)
                
                if (result != 0)
                    if (sub_475a40(esi, eax) == 0)
                        sub_4759b0(esi)
                    else
                        struct kiwi::ISoundBufferFactory::kiwi::CDirectSound::VTable** eax_2 =
                            sub_620310()
                        *(esi + 0x934) = eax_2
                        
                        if (eax_2 == 0)
                            sub_4759b0(esi)
                        else if (sub_475af0(esi, result) == 0)
                            sub_4759b0(esi)
                        else
                            int32_t* eax_5 = (**eax)(0x6dd824)
                            
                            if (eax_5 != 0)
                                (**eax_5)(esi + 0x940)
                                *(esi + 4) = 1
                                *(esi + 6) = 0
                                result.b = 1
                                return result
                            
                            sub_4759b0(esi)

result.b = 0
return result
