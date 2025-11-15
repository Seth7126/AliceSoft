// 函数: sub_5f60f0
// 地址: 0x5f60f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg4
int32_t edi = arg2
int32_t i = ecx - edi
int32_t var_10 = edi

while (i s> 1)
    int32_t esi_1 = edi
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(edi + ecx)
    int32_t edi_1 = ecx - 1
    int32_t ebx_2 = (eax_2 - edx) s>> 1
    
    if (var_10 s<= edi_1)
        while (true)
            int32_t* ecx_1 = *(arg5 + 0x24)
            int32_t var_8 = ebx_2
            int32_t var_4 = esi_1
            
            if (ecx_1 == 0)
            label_5f61da:
                sub_6d090a()
                noreturn
            
            if ((*(*ecx_1 + 8))(&var_4, &var_8) == 0)
                while (true)
                    int32_t* ecx_2 = *(arg5 + 0x24)
                    var_4 = edi_1
                    var_8 = ebx_2
                    
                    if (ecx_2 == 0)
                        goto label_5f61da
                    
                    if ((*(*ecx_2 + 8))(&var_8, &var_4) == 0)
                        break
                    
                    edi_1 -= 1
                
                if (esi_1 s>= edi_1)
                    break
                
                (*(*arg3 + 0x54))(esi_1, edi_1)
                
                if (esi_1 == ebx_2)
                    ebx_2 = edi_1
                else if (edi_1 == ebx_2)
                    ebx_2 = esi_1
                
                esi_1 += 1
                edi_1 -= 1
                
                if (esi_1 s> edi_1)
                    break
            else
                esi_1 += 1
    
    sub_5f60f0(esi_1, arg5)
    ecx = arg4
    var_10 = esi_1
    i = ecx - esi_1
    edi = esi_1

return i
