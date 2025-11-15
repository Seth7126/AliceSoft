// 函数: sub_477650
// 地址: 0x477650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s>= 0)
    int32_t edi_1 = data_7fcc74
    
    if (arg1 u< (data_7fcc78 - edi_1) s>> 2)
        int32_t esi_1 = arg1 << 2
        
        if (*(esi_1 + edi_1) != 0)
            int32_t* ecx = data_7fcb88
            int32_t ebx
            
            if (ecx != 0)
                int32_t eax_3 = (**ecx)(0x75fbec)
                edi_1 = data_7fcc74
                ebx = eax_3
            else
                ebx = 0
            
            void* edi_2 = *(esi_1 + edi_1)
            sub_46e7f0(edi_2 + 8)
            return sub_463b40(edi_2 + 0x14, edi_2 + 8, arg2, ebx)

int32_t result
result.b = 0
return result
