// 函数: sub_4c99f0
// 地址: 0x4c99f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg4

if (esi != 0)
    struct IInterface::VTable** var_14_1 = arg3
    
    if (sub_4a55e0(esi + 0x104) != 0)
        struct IInterface::VTable** result = sub_4d6d70(esi, arg3)
        int32_t esi_1 = 0
        arg3 = result
        arg2[1] = *arg2
        void* ecx_3 = result[0x16]
        int32_t edi_4 = (*(ecx_3 + 0x98) - *(ecx_3 + 0x94)) s>> 2
        
        if (edi_4 s> 0)
            do
                int32_t eax_1
                
                if (esi_1 s>= 0)
                    void* ecx_4 = result[0x16]
                    
                    if ((*(ecx_4 + 0x98) - *(ecx_4 + 0x94)) s>> 2 s> esi_1)
                        eax_1 = *(*(ecx_4 + 0x94) + (esi_1 << 2))
                    else
                        eax_1 = 0
                else
                    eax_1 = 0
                
                arg4 = eax_1
                
                if (sub_4c9870(arg1, eax_1) != 0)
                    sub_4158d0(arg2, &arg4)
                
                result = arg3
                esi_1 += 1
            while (esi_1 s< edi_4)
        
        result.b = 1
        return result

return 0
