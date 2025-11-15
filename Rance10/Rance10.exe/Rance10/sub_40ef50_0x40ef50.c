// 函数: sub_40ef50
// 地址: 0x40ef50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2[4]
int32_t ebx = 0
int32_t result = 2
void** var_8 = arg1

if (ebp u> 2)
    int32_t edi_1 = arg2[5]
    
    do
        char* eax_1
        
        if (edi_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        arg1.b = eax_1[result]
        
        if (sub_40f280(arg1.b) != 0)
            break
        
        char* eax_3
        
        if (edi_1 u< 0x10)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        if (eax_3[result] != 0x30)
            int32_t* eax_4
            
            if (edi_1 u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
            
            if (*(eax_4 + result) != 0x31)
                return 0
        
        int32_t* eax_5
        
        if (edi_1 u< 0x10)
            eax_5 = arg2
        else
            eax_5 = *arg2
        
        int32_t eax_6 = sx.d(*(eax_5 + result))
        result += 1
        ebx = ebx * 2 - 0x30 + eax_6
    while (result u< ebp)

struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_7 = sub_6e810c(8)
struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** var_4 = eax_7
eax_7[1] = ebx
*eax_7 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
*var_8 = eax_7
return result
