// 函数: sub_4819b0
// 地址: 0x4819b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
void* var_4 = ebp
void* i = *(ebp + 4)

while (i != *(ebp + 8))
    void* edi_1 = i + 0x10
    int32_t eax_2
    int32_t ecx_1
    eax_2, ecx_1 = (*(**(i + 0x10) + 4))()
    
    if (eax_2 s> 0)
        (***edi_1)()
        i += 0x14
    else
        int32_t eax_3 = *(ebp + 8)
        void* ebx_1 = i + 0x14
        int32_t var_8_1 = eax_3
        
        if (ebx_1 != eax_3)
            do
                ecx_1 = sub_484e00(edi_1 - 0xc, edi_1 + 8)
                int32_t eax_5 = *(edi_1 + 0x14)
                edi_1 += 0x14
                ebx_1 += 0x14
                *(edi_1 - 0x14) = eax_5
            while (ebx_1 != eax_3)
            
            ebp = var_4
        
        void* edx_1 = *(ebp + 8)
        void* var_1c_2 = var_4
        int32_t var_20_1 = ecx_1
        sub_484d80(edx_1 - 0x14, edx_1)
        *(ebp + 8) -= 0x14
