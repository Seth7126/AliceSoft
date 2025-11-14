// 函数: sub_44e100
// 地址: 0x44e100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4cc
int32_t var_14 = arg1
int32_t* eax
int32_t ecx_1
eax, ecx_1 = sub_44e630(edi + 0x288)
int32_t* ebx = eax

if (ebx != 0 && data_75d534 != 0)
    int32_t var_14_1 = ecx_1
    eax = sub_6203f0()
    
    if (eax != 0)
        eax = (**eax)(0x6db7e0)
        
        if (eax != 0)
            bool cond:0_1 = sub_44dd30(edi) != 0
            void* eax_2 = *eax
            
            if (cond:0_1)
                bool cond:1_1 = (*(eax_2 + 0x7c))(ebx) == 0
                eax_2 = *eax
                
                if (not(cond:1_1))
                    (*(eax_2 + 4))()
                    int32_t eax_5
                    eax_5.b = 1
                    return eax_5
            
            (*(eax_2 + 4))()

eax.b = 0
return eax
