// 函数: sub_5270f0
// 地址: 0x5270f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d508
int32_t eax

if (arg2 s>= 0 && arg2 s< (*(edi + 0x54) - *(edi + 0x50)) s>> 2)
    eax = *(edi + 0x50)
    void* esi_1 = *(eax + (arg2 << 2))
    
    if (esi_1 != 0)
        int32_t ebp = *(esi_1 + 0x17c)
        void* eax_6
        
        if (arg3 s<= 0)
            sub_587200(esi_1 + 0x10, arg3)
            
            if (*(edi + 0x5c) != 0)
                int32_t* i = *(edi + 0x50)
                
                if (i != *(edi + 0x54))
                    do
                        void* edx_1 = *i
                        
                        if (edx_1 != 0)
                            (*(**(edi + 0x5c) + 0xc))(*(edx_1 + 8))
                        
                        i = &i[1]
                    while (i != *(edi + 0x54))
                    
                    eax_6.b = 1
                    return eax_6
        else
            int32_t* ecx_1 = *(edi + 0x10)
            int32_t edx
            
            if (ecx_1 == 0)
            label_527172:
                sub_59f4e0(eax, edx, ecx_1, 0x6e3414, arg1)
                enum MESSAGEBOX_RESULT eax_7
                eax_7.b = 1
                return eax_7
            
            eax, edx, ecx_1 = (*(*ecx_1 + 0xc))(arg1)
            
            if (eax.b == 0)
                goto label_527172
            
            (*(**(edi + 0x10) + 0x34))(edi)
            sub_587200(esi_1 + 0x10, arg3)
            
            if (ebp s<= 0)
                sub_5271d0(edi)
        
        eax_6.b = 1
        return eax_6

eax.b = 0
return eax
