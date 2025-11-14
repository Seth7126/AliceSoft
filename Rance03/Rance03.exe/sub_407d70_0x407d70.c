// 函数: sub_407d70
// 地址: 0x407d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_4_1 = arg1
int32_t ebp = arg2[4]
int32_t ebx = 0
int32_t result = 2
void** edi = arg1

if (ebp u> 2)
    int32_t edi_1 = arg2[5]
    
    do
        char* eax_1
        
        if (edi_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        arg1.b = eax_1[result]
        
        if (sub_4080c0(arg1.b) != 0)
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

struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_7 = sub_69adc6(8)

if (eax_7 == 0)
    *edi = nullptr
    return result

eax_7[1] = ebx
*eax_7 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
*edi = eax_7
return result
