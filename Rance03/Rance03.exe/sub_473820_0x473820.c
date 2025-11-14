// 函数: sub_473820
// 地址: 0x473820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg2
int32_t eax

if (ebp != 0)
    eax = (*(*ebp + 0x1c))("timemap_")
    
    if (eax s> 0)
        int32_t* ecx_1 = nullptr
        int32_t ebx = 0
        arg2 = nullptr
        
        if (eax s> 0)
            do
                int32_t* eax_4 = (*(*ebp + 8))((*(*ebp + 0x28))(ebx))
                
                if (eax_4 != 0)
                    void* eax_6 = (*(*eax_4 + 0x14))()
                    struct IEXReader::exfile::CEXReader::VTable** edi_2 =
                        sub_4602d0((*(*eax_4 + 0x18))(), eax_6)
                    
                    if (edi_2 == 0)
                        void* eax_10 = (*(*eax_4 + 0x14))()
                        edi_2 = sub_4604c0((*(*eax_4 + 0x18))(), eax_10)
                    
                    (*(*eax_4 + 4))()
                    
                    if (edi_2 == 0)
                        int32_t eax_14
                        eax_14.b = 0
                        return eax_14
                    
                    if (sub_473910(arg1, edi_2) != 0)
                        arg2 += 1
                    
                    (*edi_2)->vFunc_1()
                
                ebx += 1
            while (ebx s< eax)
            
            ecx_1 = arg2
        
        int32_t eax_17
        eax_17.b = ecx_1 s> 0
        return eax_17

eax.b = 1
return eax
