// 函数: sub_4854b0
// 地址: 0x4854b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_8 = arg1
void* edx = *arg2
int32_t ebp = arg2[1]

if (edx == ebp)
    int32_t* eax
    eax.b = 0
    return eax

char* eax_1

if (edx + 1 u<= ebp)
    char* edi_1 = edx + 2
    
    if (edi_1 u<= ebp)
        eax_1.b = *(edx + 1)
        int32_t ebx_1 = 0
        eax_1 = zx.d(eax_1.b)
        char* var_4_1 = eax_1
        
        if (eax_1 != 0)
            char* edx_1 = arg1
            void* esi_1 = &edi_1[1]
            char* var_c_1 = &edx_1[0xc]
            
            do
                if (esi_1 u> ebp)
                    goto label_485559
                
                arg1.b = *edi_1
                
                if (esi_1 + 1 u> ebp)
                    goto label_485559
                
                eax_1.b = edi_1[1]
                arg2.b = eax_1.b
                
                if (esi_1 + 2 u> ebp)
                    goto label_485559
                
                edi_1 = &edi_1[3]
                uint32_t var_20_1 = zx.d(arg1.b)
                int32_t var_24_1 = ebx_1
                esi_1 += 3
                eax_1, arg1 = sub_485790(edx_1)
                
                if (ebx_1 u<= 0x3f)
                    eax_1.b = arg2.b != 0
                    *var_c_1 = eax_1.b
                
                var_c_1 = &var_c_1[0x24]
                ebx_1 += 1
                edx_1 = var_8
            while (ebx_1 s< var_4_1)
        
        eax_1.b = 1
        return eax_1

label_485559:
eax_1.b = 0
return eax_1
