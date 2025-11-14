// 函数: sub_620310
// 地址: 0x620310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75d534 != 0)
    int32_t ecx
    int32_t var_10_1 = ecx
    int32_t* eax_1 = sub_6203f0()
    
    if (eax_1 != 0)
        int32_t eax_2 = (**eax_1)(0x6ed290)
        
        if (eax_2 != 0)
            int32_t* eax_4 = (**eax_1)(0x6ed10c)
            
            if (eax_4 != 0)
                struct kiwi::ISoundBufferFactory::kiwi::CDirectSound::VTable** eax_5 =
                    sub_69adc6(0x20)
                struct kiwi::ISoundBufferFactory::kiwi::CDirectSound::VTable** result
                
                if (eax_5 == 0)
                    result = nullptr
                else
                    result = sub_61fda0(eax_5)
                
                if (sub_61fea0(result, (**eax_4)(eax_2)) != 0)
                    return result
                
                if (result != 0)
                    (*result)->vFunc_3(1)

return 0
