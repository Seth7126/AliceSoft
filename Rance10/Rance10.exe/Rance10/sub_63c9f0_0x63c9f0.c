// 函数: sub_63c9f0
// 地址: 0x63c9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg2 + 0x10))()
int32_t i_1 = (*(*arg2 + 0x14))()

if ((*(*arg1 + 0x40))(i_1 * eax_1).b != 0)
    char* edi_1 = (*(*arg1 + 0xc))(0)
    
    if (edi_1 != 0)
        void* esi_1 = (*(*arg2 + 8))(0, 0)
        
        if (esi_1 != 0)
            char* var_4 = (*(*arg2 + 0x1c))()
            
            if (i_1 s> 0)
                int32_t ebp_1 = eax_1 << 2
                int32_t i
                
                do
                    sub_700660(edi_1, esi_1, ebp_1)
                    esi_1 += var_4
                    edi_1 = &edi_1[ebp_1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            char* eax_7
            eax_7.b = 1
            return eax_7

void* eax_3
eax_3.b = 0
return eax_3
