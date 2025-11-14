// 函数: sub_407ca0
// 地址: 0x407ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_4_1 = arg1
int32_t ebp = arg2[4]
int32_t result = 2
void** var_4 = arg1

if (ebp u> 2)
    int32_t ebx_1 = arg2[5]
    int32_t edi_1 = 0
    
    while (true)
        char* eax_1
        
        if (ebx_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        arg1.b = eax_1[result]
        
        if (sub_4080c0(arg1.b) == 0)
            int32_t* eax_3
            
            if (ebx_1 u< 0x10)
                eax_3 = arg2
            else
                eax_3 = *arg2
            
            arg1.b = *(eax_3 + result)
            eax_3.b = arg1.b
            eax_3.b -= 0x30
            int32_t eax_5
            
            if (eax_3.b u> 9)
                eax_3.b = arg1.b
                eax_3.b -= 0x61
                
                if (eax_3.b u> 5)
                    eax_3.b = arg1.b
                    eax_3.b -= 0x41
                    
                    if (eax_3.b u> 5)
                        break
                    
                    eax_5 = zx.d(arg1.b) - 0x37
                else
                    eax_5 = zx.d(arg1.b) - 0x57
            else
                eax_5 = zx.d(arg1.b) - 0x30
            
            if (eax_5 s< 0)
                break
            
            result += 1
            edi_1 = (edi_1 << 4) + eax_5
            
            if (result u< ebp)
                continue
        
        if (result == 2)
            break
        
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_8 =
            sub_69adc6(8)
        
        if (eax_8 == 0)
            *var_4 = 0
            return result
        
        eax_8[1] = edi_1
        *eax_8 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
        *var_4 = eax_8
        return result

return 0
