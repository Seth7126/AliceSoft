// 函数: sub_5bade0
// 地址: 0x5bade0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *arg2
void* var_4 = arg1
int32_t* i = *result
int32_t* i_1 = i

if (i != result)
    void* ebp_1 = arg1 + 0x48
    
    do
        int32_t edi_1 = *(arg1 + 0x64)
        int32_t* ebx_1 = *(arg1 + 0x60)
        
        if (ebx_1 == edi_1)
        label_5bae2f:
            int32_t var_1c_2 = i[4]
            sub_5c2180(ebp_1)
            i = i_1
        else
            while (true)
                void* eax_1 = *ebx_1
                void* eax_2 = sub_5c2090(ebp_1, *(eax_1 + 0x18), *(eax_1 + 0x1c))
                
                if (eax_2 != 0 && i[4] == eax_2)
                    break
                
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == edi_1)
                    goto label_5bae2f
        
        if (*(i + 0xd) == 0)
            int32_t* i_3 = i[2]
            
            if (*(i_3 + 0xd) != 0)
                int32_t* i_5 = i[1]
                
                if (*(i_5 + 0xd) == 0)
                    while (i == i_5[2])
                        i = i_5
                        int32_t* i_2 = i
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0xd) != 0)
                            break
                
                i = i_5
            else
                i = i_3
                int32_t* i_4 = *i
                
                while (*(i_4 + 0xd) == 0)
                    i = i_4
                    i_4 = *i
            
            i_1 = i
        
        result = arg2
        arg1 = var_4
    while (i != *result)

return result
