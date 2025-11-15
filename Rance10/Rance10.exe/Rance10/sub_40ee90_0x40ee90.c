// 函数: sub_40ee90
// 地址: 0x40ee90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2[4]
int32_t result = 2
void** var_8 = arg1
int32_t edi = 0

if (ebp u> 2)
    int32_t ebx_1 = arg2[5]
    
    while (true)
        char* eax_1
        
        if (ebx_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        arg1.b = eax_1[result]
        
        if (sub_40f280(arg1.b) == 0)
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
            edi = (edi << 4) + eax_5
            
            if (result u< ebp)
                continue
        
        if (result == 2)
            break
        
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_8 =
            sub_6e810c(8)
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** var_4 = eax_8
        eax_8[1] = edi
        *eax_8 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
        *var_8 = eax_8
        return result

return 0
